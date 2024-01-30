@class NSString, NSData, GEOLatLng, PBDataReader;

@interface GEORPDirectionsEvent : PBCodable <NSCopying> {
    PBDataReader *_reader;
    long long _errorCode;
    NSString *_errorDomain;
    GEOLatLng *_occurrenceLatLng;
    NSData *_occurrenceRouteId;
    NSData *_switchedToRouteId;
    NSString *_synthesizedStepInstructions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _occurrenceResponseIndex;
    unsigned int _occurrenceStepIndex;
    unsigned int _switchedToResponseIndex;
    int _synthesizedStepManeuverType;
    int _type;
    struct { unsigned char has_errorCode : 1; unsigned char has_occurrenceResponseIndex : 1; unsigned char has_occurrenceStepIndex : 1; unsigned char has_switchedToResponseIndex : 1; unsigned char has_synthesizedStepManeuverType : 1; unsigned char has_type : 1; unsigned char read_errorDomain : 1; unsigned char read_occurrenceLatLng : 1; unsigned char read_occurrenceRouteId : 1; unsigned char read_switchedToRouteId : 1; unsigned char read_synthesizedStepInstructions : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasOccurrenceResponseIndex;
@property (nonatomic) unsigned int occurrenceResponseIndex;
@property (readonly, nonatomic) BOOL hasOccurrenceRouteId;
@property (retain, nonatomic) NSData *occurrenceRouteId;
@property (nonatomic) BOOL hasOccurrenceStepIndex;
@property (nonatomic) unsigned int occurrenceStepIndex;
@property (readonly, nonatomic) BOOL hasOccurrenceLatLng;
@property (retain, nonatomic) GEOLatLng *occurrenceLatLng;
@property (nonatomic) BOOL hasSwitchedToResponseIndex;
@property (nonatomic) unsigned int switchedToResponseIndex;
@property (readonly, nonatomic) BOOL hasSwitchedToRouteId;
@property (retain, nonatomic) NSData *switchedToRouteId;
@property (nonatomic) BOOL hasSynthesizedStepManeuverType;
@property (nonatomic) int synthesizedStepManeuverType;
@property (readonly, nonatomic) BOOL hasSynthesizedStepInstructions;
@property (retain, nonatomic) NSString *synthesizedStepInstructions;
@property (readonly, nonatomic) BOOL hasErrorDomain;
@property (retain, nonatomic) NSString *errorDomain;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) long long errorCode;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)synthesizedStepManeuverTypeAsString:(int)a0;
- (int)StringAsSynthesizedStepManeuverType:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
