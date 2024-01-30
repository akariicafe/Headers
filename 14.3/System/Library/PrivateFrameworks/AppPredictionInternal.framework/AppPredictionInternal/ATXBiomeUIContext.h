@class NSMutableDictionary, NSUUID, NSMutableOrderedSet, ATXPredictionContext;

@interface ATXBiomeUIContext : NSObject <NSSecureCoding, ATXProtoBufWrapper>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableOrderedSet *cacheUpdateOrdering;
@property (readonly, nonatomic) NSMutableDictionary *blendingModelCacheUpdates;
@property (readonly, nonatomic) NSMutableDictionary *clientModelCacheUpdates;
@property (readonly, nonatomic) ATXPredictionContext *context;
@property (readonly, nonatomic) NSUUID *pinnedBlendingModelUICacheUpdateUUID;

- (id)initWithContext:(id)a0;
- (id)_initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithProtoData:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithProto:(id)a0;
- (id)proto;
- (id)encodeAsProto;
- (BOOL)isEqual:(id)a0;
- (void)addContext:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)addClientModelCacheUpdate:(id)a0;
- (void)addBlendingModelUICacheUpdate:(id)a0;
- (void)pinBlendingModelUICacheUpdateWithUUID:(id)a0;
- (void)clearExistingPinnedBlendingModelCache;
- (id)blendingModelUICacheUpdateForUUID:(id)a0;
- (id)clientModelCacheUpdatesForBlendingModelUICacheUpdateUUID:(id)a0;
- (id)initWithBlendingModelCacheUpdateOrdering:(id)a0 blendingModelCacheUpdates:(id)a1 clientModelCacheUpdates:(id)a2 context:(id)a3 pinnedBlendingModelUICacheUpdateUUID:(id)a4;
- (void)pruneBlendingModelCachesOverMaxNum;
- (void)pruneUnreferencedClientModelCachesIfPossible;
- (id)contextStateVerboseStringRepresentation;
- (void)_pruneBlendingModelCachesOlderThanUUID:(id)a0;
- (void)_validateCacheUpdateOrderingAndCacheDictMapping;
- (void)pruneContextStateOlderThanBlendingUUID:(id)a0;
- (id)_referencedClientModelCaches;
- (BOOL)isEqualToATXBiomeUIContext:(id)a0;

@end
