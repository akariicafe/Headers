@class NSMutableArray;

@interface NRPBMutableDevice : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *names;
@property (retain, nonatomic) NSMutableArray *properties;

+ (Class)propertiesType;
+ (Class)namesType;

- (void)addProperties:(id)a0;
- (unsigned long long)propertiesCount;
- (void)clearProperties;
- (void)clearNames;
- (BOOL)readFrom:(id)a0;
- (id)propertiesAtIndex:(unsigned long long)a0;
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
- (void)addNames:(id)a0;
- (id)namesAtIndex:(unsigned long long)a0;

@end
