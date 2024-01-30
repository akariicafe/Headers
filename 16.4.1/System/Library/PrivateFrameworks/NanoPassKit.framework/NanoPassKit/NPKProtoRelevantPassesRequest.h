@class NSMutableArray;

@interface NPKProtoRelevantPassesRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *passRelevancyTuples;

+ (Class)passRelevancyTuplesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addPassRelevancyTuples:(id)a0;
- (void)clearPassRelevancyTuples;
- (id)passRelevancyTuplesAtIndex:(unsigned long long)a0;
- (unsigned long long)passRelevancyTuplesCount;

@end
