@class NSMutableArray;

@interface NTPBArticleInfoListResponse : PBCodable <NSCopying>

@property (nonatomic) BOOL isValidBucketGroup;
@property (retain, nonatomic) NSMutableArray *articleInfoLists;

+ (Class)articleInfoListType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addArticleInfoList:(id)a0;
- (void)clearArticleInfoLists;
- (unsigned long long)articleInfoListsCount;
- (id)articleInfoListAtIndex:(unsigned long long)a0;

@end
