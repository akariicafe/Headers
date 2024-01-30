@class PBUnknownFields, PBDataReader, GEOFareOptions;

@interface GEOTransitOptions : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _avoidedModes;
    GEOFareOptions *_fareOptions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _prioritization;
    int _routingBehavior;
    BOOL _enableIncidents;
    struct { unsigned char has_prioritization : 1; unsigned char has_routingBehavior : 1; unsigned char has_enableIncidents : 1; unsigned char read_unknownFields : 1; unsigned char read_avoidedModes : 1; unsigned char read_fareOptions : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long avoidedModesCount;
@property (readonly, nonatomic) int *avoidedModes;
@property (nonatomic) BOOL hasPrioritization;
@property (nonatomic) int prioritization;
@property (readonly, nonatomic) BOOL hasFareOptions;
@property (retain, nonatomic) GEOFareOptions *fareOptions;
@property (nonatomic) BOOL hasRoutingBehavior;
@property (nonatomic) int routingBehavior;
@property (nonatomic) BOOL hasEnableIncidents;
@property (nonatomic) BOOL enableIncidents;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (void)setAvoidedModes:(int *)a0 count:(unsigned long long)a1;
- (void)clearAvoidedModes;
- (int)avoidedModeAtIndex:(unsigned long long)a0;
- (id)initWithData:(id)a0;
- (int)StringAsAvoidedModes:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)routingBehaviorAsString:(int)a0;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)avoidedModesAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (int)StringAsRoutingBehavior:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addAvoidedMode:(int)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)prioritizationAsString:(int)a0;
- (int)StringAsPrioritization:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;

@end
