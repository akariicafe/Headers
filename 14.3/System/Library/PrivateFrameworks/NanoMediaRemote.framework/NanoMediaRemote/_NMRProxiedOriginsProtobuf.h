@class NSMutableArray;

@interface _NMRProxiedOriginsProtobuf : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *origins;

+ (Class)originsType;

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
- (void)addOrigins:(id)a0;
- (unsigned long long)originsCount;
- (void)clearOrigins;
- (id)originsAtIndex:(unsigned long long)a0;

@end
