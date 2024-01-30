@class NSString, NSMutableArray, NTPBRecordBase;

@interface NTPBWidgetSectionConfigRecord : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (readonly, nonatomic) BOOL hasConfiguration2;
@property (retain, nonatomic) NSString *configuration2;
@property (retain, nonatomic) NSMutableArray *articleListIDs2s;
@property (retain, nonatomic) NSMutableArray *articleIDs2s;
@property (readonly, nonatomic) BOOL hasSingleTagConfiguration;
@property (retain, nonatomic) NSString *singleTagConfiguration;

+ (Class)articleListIDs2Type;
+ (Class)articleIDs2Type;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addArticleListIDs2:(id)a0;
- (void)addArticleIDs2:(id)a0;
- (void)clearArticleListIDs2s;
- (unsigned long long)articleListIDs2sCount;
- (id)articleListIDs2AtIndex:(unsigned long long)a0;
- (void)clearArticleIDs2s;
- (unsigned long long)articleIDs2sCount;
- (id)articleIDs2AtIndex:(unsigned long long)a0;

@end
