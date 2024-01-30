@class NSString;
@protocol ATXActionProducerDelegate;

@interface ATXMLActionProducer : NSObject <ATXActionProducer> {
    NSString *_cacheBasePath;
    NSString *_cacheFilename;
}

@property (weak, nonatomic) id<ATXActionProducerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)predictionChunksForActionResults:(id)a0;
+ (id)consumerSubTypesToUpdate;

- (void)updateBlendingLayerForAllConsumerSubTypes;
- (id)_cachePathForConsumerSubtype:(unsigned char)a0;
- (BOOL)_writeIntermediateCacheForConsumerSubType:(unsigned char)a0 actionPredictionCandidates:(id)a1 remainingPredictionItems:(void *)a2;
- (void)readCacheAndSendFilteredResultsToBlendingForConsumerSubType:(unsigned char)a0;
- (void)updateBlendingLayerForLockscreen;
- (id)_getActionsFromCacheForConsumerSubType:(unsigned char)a0 cacheFileData:(id)a1;
- (BOOL)writeCacheIfNotExistsForConsumerSubType:(unsigned char)a0;
- (void)updateBlendingLayerForConsumerSubType:(unsigned char)a0;
- (void)updateBlendingLayerForSpotlight;
- (void)updateBlendingLayerForHomeScreen;
- (void).cxx_destruct;
- (id)init;
- (id)consumerSubTypesToInvalidateForTTL:(double)a0 disabledConsumerSubTypes:(id)a1 shouldOverrideRefreshRateForDisabledConsumerSubTypes:(BOOL)a2;
- (id)produceActions;
- (id)lockscreenActionsFromPredictions:(id)a0;
- (void)invalidateCacheForConsumerSubType:(unsigned char)a0 actionPredictionCandidates:(id)a1 remainingPredictionItems:(struct vector<ATXPredictionItem, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem *x0; struct ATXPredictionItem *x1; struct __compressed_pair<ATXPredictionItem *, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem *x0; } x2; })a2;
- (void)invalidateCacheForConsumerSubTypes:(id)a0 featureCache:(id)a1;

@end
