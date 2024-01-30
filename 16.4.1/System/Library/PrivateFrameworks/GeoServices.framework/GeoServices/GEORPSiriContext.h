@class NSString, PBDataReader;

@interface GEORPSiriContext : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_additionalDetails;
    NSString *_siriIncidentType;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_additionalDetails : 1; unsigned char read_siriIncidentType : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasSiriIncidentType;
@property (retain, nonatomic) NSString *siriIncidentType;
@property (readonly, nonatomic) BOOL hasAdditionalDetails;
@property (retain, nonatomic) NSString *additionalDetails;

+ (BOOL)isValid:(id)a0;

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
