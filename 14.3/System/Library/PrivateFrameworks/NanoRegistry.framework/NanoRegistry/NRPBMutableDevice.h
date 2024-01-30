@class NSMutableArray;

@interface NRPBMutableDevice : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *names;
@property (retain, nonatomic) NSMutableArray *properties;

+ (Class)propertiesType;
+ (Class)namesType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)addProperties:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)propertiesCount;
- (void)clearProperties;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)propertiesAtIndex:(unsigned long long)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearNames;
- (void)addNames:(id)a0;
- (id)namesAtIndex:(unsigned long long)a0;
- (unsigned long long)namesCount;

@end
