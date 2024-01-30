@class NSMutableArray;

@interface NPKProtoRelevantPassesRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *passRelevancyTuples;

+ (Class)passRelevancyTuplesType;

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
- (void)addPassRelevancyTuples:(id)a0;
- (unsigned long long)passRelevancyTuplesCount;
- (void)clearPassRelevancyTuples;
- (id)passRelevancyTuplesAtIndex:(unsigned long long)a0;

@end
