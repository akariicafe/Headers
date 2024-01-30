@class GEORPIncidentAnnotationDetails, GEORPIncidentUserPath, GEORPNewIncidentDetails, GEORPSiriContext, PBDataReader;

@interface GEORPIncidentFeedback : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEORPIncidentAnnotationDetails *_incidentAnnotationDetails;
    GEORPNewIncidentDetails *_newIncidentDetails;
    GEORPSiriContext *_siriContext;
    GEORPIncidentUserPath *_userPath;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _type;
    struct { unsigned char has_type : 1; unsigned char read_incidentAnnotationDetails : 1; unsigned char read_newIncidentDetails : 1; unsigned char read_siriContext : 1; unsigned char read_userPath : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasNewIncidentDetails;
@property (retain, nonatomic) GEORPNewIncidentDetails *newIncidentDetails;
@property (readonly, nonatomic) BOOL hasIncidentAnnotationDetails;
@property (retain, nonatomic) GEORPIncidentAnnotationDetails *incidentAnnotationDetails;
@property (readonly, nonatomic) BOOL hasSiriContext;
@property (retain, nonatomic) GEORPSiriContext *siriContext;
@property (readonly, nonatomic) BOOL hasUserPath;
@property (retain, nonatomic) GEORPIncidentUserPath *userPath;

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
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (id)dictionaryRepresentation;

@end
