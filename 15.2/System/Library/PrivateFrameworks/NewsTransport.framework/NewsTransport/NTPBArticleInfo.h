@class NSString;

@interface NTPBArticleInfo : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *articleId;
@property (readonly, nonatomic) BOOL hasStoreFrontId;
@property (retain, nonatomic) NSString *storeFrontId;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
