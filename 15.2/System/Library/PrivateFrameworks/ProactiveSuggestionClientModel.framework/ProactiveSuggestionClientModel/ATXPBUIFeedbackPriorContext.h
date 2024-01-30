@class NSData, NSMutableArray, NSString;

@interface ATXPBUIFeedbackPriorContext : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *cacheUpdateOrderings;
@property (retain, nonatomic) NSMutableArray *blendingModelCacheUpdates;
@property (retain, nonatomic) NSMutableArray *clientModelCacheUpdates;
@property (readonly, nonatomic) BOOL hasContext;
@property (retain, nonatomic) NSData *context;
@property (readonly, nonatomic) BOOL hasContextClassString;
@property (retain, nonatomic) NSString *contextClassString;
@property (readonly, nonatomic) BOOL hasPinnedBlendingModelUICacheUpdateUUID;
@property (retain, nonatomic) NSString *pinnedBlendingModelUICacheUpdateUUID;

+ (Class)cacheUpdateOrderingType;
+ (Class)blendingModelCacheUpdatesType;
+ (Class)clientModelCacheUpdatesType;

- (void)addBlendingModelCacheUpdates:(id)a0;
- (void)clearCacheUpdateOrderings;
- (id)blendingModelCacheUpdatesAtIndex:(unsigned long long)a0;
- (void)clearBlendingModelCacheUpdates;
- (id)clientModelCacheUpdatesAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (void)clearClientModelCacheUpdates;
- (id)description;
- (void)addCacheUpdateOrdering:(id)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)cacheUpdateOrderingsCount;
- (id)cacheUpdateOrderingAtIndex:(unsigned long long)a0;
- (void)addClientModelCacheUpdates:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)blendingModelCacheUpdatesCount;
- (unsigned long long)clientModelCacheUpdatesCount;
- (id)dictionaryRepresentation;

@end
