@class NSData, NSMutableArray;

@interface NTPBArticleInfoList : PBCodable <NSCopying>

@property (retain, nonatomic) NSData *urlHash;
@property (retain, nonatomic) NSMutableArray *articleInfos;

+ (Class)articleInfoType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addArticleInfo:(id)a0;
- (id)articleInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)articleInfosCount;
- (void)clearArticleInfos;

@end
