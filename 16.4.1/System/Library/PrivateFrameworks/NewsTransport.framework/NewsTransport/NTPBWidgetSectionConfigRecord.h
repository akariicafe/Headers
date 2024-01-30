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

+ (Class)articleIDs2Type;
+ (Class)articleListIDs2Type;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addArticleIDs2:(id)a0;
- (void)addArticleListIDs2:(id)a0;
- (id)articleIDs2AtIndex:(unsigned long long)a0;
- (unsigned long long)articleIDs2sCount;
- (id)articleListIDs2AtIndex:(unsigned long long)a0;
- (unsigned long long)articleListIDs2sCount;
- (void)clearArticleIDs2s;
- (void)clearArticleListIDs2s;

@end
