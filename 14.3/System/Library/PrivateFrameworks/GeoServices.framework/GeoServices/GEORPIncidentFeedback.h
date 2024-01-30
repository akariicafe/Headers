@class GEORPIncidentAnnotationDetails, PBDataReader, GEORPNewIncidentDetails;

@interface GEORPIncidentFeedback : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEORPIncidentAnnotationDetails *_incidentAnnotationDetails;
    GEORPNewIncidentDetails *_newIncidentDetails;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _type;
    struct { unsigned char has_type : 1; unsigned char read_incidentAnnotationDetails : 1; unsigned char read_newIncidentDetails : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasNewIncidentDetails;
@property (retain, nonatomic) GEORPNewIncidentDetails *newIncidentDetails;
@property (readonly, nonatomic) BOOL hasIncidentAnnotationDetails;
@property (retain, nonatomic) GEORPIncidentAnnotationDetails *incidentAnnotationDetails;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (int)StringAsType:(id)a0;
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
- (id)typeAsString:(int)a0;

@end
