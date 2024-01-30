@class GEORPUserLocationDetails, NSString, PBDataReader;

@interface GEORPIncidentAnnotationDetails : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_incidentId;
    GEORPUserLocationDetails *_userLocation;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _annotationType;
    struct { unsigned char has_annotationType : 1; unsigned char read_incidentId : 1; unsigned char read_userLocation : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasUserLocation;
@property (retain, nonatomic) GEORPUserLocationDetails *userLocation;
@property (readonly, nonatomic) BOOL hasIncidentId;
@property (retain, nonatomic) NSString *incidentId;
@property (nonatomic) BOOL hasAnnotationType;
@property (nonatomic) int annotationType;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (id)annotationTypeAsString:(int)a0;
- (int)StringAsAnnotationType:(id)a0;

@end
