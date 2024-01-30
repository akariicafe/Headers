@class NSMutableArray;

@interface NRPBDeviceDiff : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *names;
@property (retain, nonatomic) NSMutableArray *diffs;

+ (Class)diffsType;
+ (Class)namesType;

- (void)clearNames;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)namesCount;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)clearDiffs;
- (void)addDiffs:(id)a0;
- (unsigned long long)diffsCount;
- (id)diffsAtIndex:(unsigned long long)a0;
- (void)addNames:(id)a0;
- (id)namesAtIndex:(unsigned long long)a0;

@end
