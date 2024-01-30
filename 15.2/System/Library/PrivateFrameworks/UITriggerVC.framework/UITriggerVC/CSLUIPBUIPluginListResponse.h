@class NSMutableArray;

@interface CSLUIPBUIPluginListResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *names;
@property (retain, nonatomic) NSMutableArray *usages;

- (void)addUsage:(id)a0;
- (void)clearNames;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)namesCount;
- (id)description;
- (id)nameAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void)addName:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (unsigned long long)usagesCount;
- (void)clearUsages;
- (id)usageAtIndex:(unsigned long long)a0;

@end
