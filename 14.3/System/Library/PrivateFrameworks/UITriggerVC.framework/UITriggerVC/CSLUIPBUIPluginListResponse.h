@class NSMutableArray;

@interface CSLUIPBUIPluginListResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *names;
@property (retain, nonatomic) NSMutableArray *usages;

- (void)addUsage:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)addName:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)nameAtIndex:(unsigned long long)a0;
- (void)clearNames;
- (unsigned long long)namesCount;
- (unsigned long long)usagesCount;
- (void)clearUsages;
- (id)usageAtIndex:(unsigned long long)a0;

@end
