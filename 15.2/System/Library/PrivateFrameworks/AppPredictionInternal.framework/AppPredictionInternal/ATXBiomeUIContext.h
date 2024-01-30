@class NSMutableDictionary, NSUUID, NSMutableOrderedSet, ATXPredictionContext;

@interface ATXBiomeUIContext : NSObject <NSSecureCoding, ATXProtoBufWrapper>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableOrderedSet *cacheUpdateOrdering;
@property (readonly, nonatomic) NSMutableDictionary *blendingModelCacheUpdates;
@property (readonly, nonatomic) NSMutableDictionary *clientModelCacheUpdates;
@property (readonly, nonatomic) ATXPredictionContext *context;
@property (readonly, nonatomic) NSUUID *pinnedBlendingModelUICacheUpdateUUID;

- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithProto:(id)a0;
- (id)_initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)pruneUnreferencedClientModelCachesIfPossible;
- (id)_referencedClientModelCaches;
- (id)initWithProtoData:(id)a0;
- (id)initWithContext:(id)a0;
- (void)addClientModelCacheUpdate:(id)a0;
- (void)_pruneBlendingModelCachesOlderThanUUID:(id)a0;
- (void)pruneContextStateOlderThanBlendingUUID:(id)a0;
- (void)addContext:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (void)addBlendingModelUICacheUpdate:(id)a0;
- (id)blendingModelUICacheUpdateForUUID:(id)a0;
- (void)pruneBlendingModelCachesOverMaxNum;
- (unsigned long long)hash;
- (id)encodeAsProto;
- (void)_validateCacheUpdateOrderingAndCacheDictMapping;
- (id)clientModelCacheUpdatesForBlendingModelUICacheUpdateUUID:(id)a0;
- (id)initWithBlendingModelCacheUpdateOrdering:(id)a0 blendingModelCacheUpdates:(id)a1 clientModelCacheUpdates:(id)a2 context:(id)a3 pinnedBlendingModelUICacheUpdateUUID:(id)a4;
- (id)contextStateVerboseStringRepresentation;
- (BOOL)isEqualToATXBiomeUIContext:(id)a0;
- (void)pinBlendingModelUICacheUpdateWithUUID:(id)a0;
- (void)clearExistingPinnedBlendingModelCache;

@end
