@class CLPMeta, NSMutableArray;

@interface CLPPoiCollectionRequest : PBRequest <NSCopying>

@property (retain, nonatomic) CLPMeta *meta;
@property (retain, nonatomic) NSMutableArray *harvests;

+ (Class)harvestsType;

- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addHarvests:(id)a0;
- (unsigned long long)harvestsCount;
- (void)clearHarvests;
- (id)harvestsAtIndex:(unsigned long long)a0;

@end
