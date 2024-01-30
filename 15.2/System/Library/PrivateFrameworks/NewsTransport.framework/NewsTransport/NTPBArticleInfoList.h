@class NSData, NSMutableArray;

@interface NTPBArticleInfoList : PBCodable <NSCopying>

@property (retain, nonatomic) NSData *urlHash;
@property (retain, nonatomic) NSMutableArray *articleInfos;

+ (Class)articleInfoType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addArticleInfo:(id)a0;
- (void)clearArticleInfos;
- (unsigned long long)articleInfosCount;
- (id)articleInfoAtIndex:(unsigned long long)a0;

@end
