@class NSString;

@interface GEOLogMsgStateMuninResource : PBCodable <NSCopying> {
    NSString *_assetBucket;
    unsigned int _levelOfDetail;
    struct { unsigned char has_levelOfDetail : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasAssetBucket;
@property (retain, nonatomic) NSString *assetBucket;
@property (nonatomic) BOOL hasLevelOfDetail;
@property (nonatomic) unsigned int levelOfDetail;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
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

@end
