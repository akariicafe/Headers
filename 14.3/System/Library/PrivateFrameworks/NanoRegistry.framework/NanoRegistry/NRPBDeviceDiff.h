@class NSMutableArray;

@interface NRPBDeviceDiff : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *names;
@property (retain, nonatomic) NSMutableArray *diffs;

+ (Class)diffsType;
+ (Class)namesType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearNames;
- (void)addDiffs:(id)a0;
- (unsigned long long)diffsCount;
- (id)diffsAtIndex:(unsigned long long)a0;
- (void)addNames:(id)a0;
- (id)namesAtIndex:(unsigned long long)a0;
- (unsigned long long)namesCount;
- (void)clearDiffs;

@end
