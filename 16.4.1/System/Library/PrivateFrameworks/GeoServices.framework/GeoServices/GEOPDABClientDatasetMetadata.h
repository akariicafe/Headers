@class PBUnknownFields;

@interface GEOPDABClientDatasetMetadata : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _bucketId;
    unsigned int _datasetId;
    struct { unsigned char has_bucketId : 1; unsigned char has_datasetId : 1; } _flags;
}

@property (nonatomic) BOOL hasBucketId;
@property (nonatomic) unsigned int bucketId;
@property (nonatomic) BOOL hasDatasetId;
@property (nonatomic) unsigned int datasetId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

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
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;

@end
