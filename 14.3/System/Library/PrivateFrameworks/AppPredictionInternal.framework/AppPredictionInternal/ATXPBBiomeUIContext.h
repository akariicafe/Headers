@class NSString, NSMutableArray, ATXPBPredictionContext;

@interface ATXPBBiomeUIContext : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *cacheUpdateOrderings;
@property (retain, nonatomic) NSMutableArray *blendingModelCacheUpdates;
@property (retain, nonatomic) NSMutableArray *clientModelCacheUpdates;
@property (readonly, nonatomic) BOOL hasContext;
@property (retain, nonatomic) ATXPBPredictionContext *context;
@property (readonly, nonatomic) BOOL hasPinnedBlendingModelUICacheUpdateUUID;
@property (retain, nonatomic) NSString *pinnedBlendingModelUICacheUpdateUUID;

+ (Class)cacheUpdateOrderingType;
+ (Class)blendingModelCacheUpdatesType;
+ (Class)clientModelCacheUpdatesType;

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
- (void)addCacheUpdateOrdering:(id)a0;
- (void)addBlendingModelCacheUpdates:(id)a0;
- (void)addClientModelCacheUpdates:(id)a0;
- (unsigned long long)cacheUpdateOrderingsCount;
- (void)clearCacheUpdateOrderings;
- (id)cacheUpdateOrderingAtIndex:(unsigned long long)a0;
- (unsigned long long)blendingModelCacheUpdatesCount;
- (void)clearBlendingModelCacheUpdates;
- (id)blendingModelCacheUpdatesAtIndex:(unsigned long long)a0;
- (unsigned long long)clientModelCacheUpdatesCount;
- (void)clearClientModelCacheUpdates;
- (id)clientModelCacheUpdatesAtIndex:(unsigned long long)a0;

@end
