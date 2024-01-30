@class NSIndexSet, NSData;

@interface ATXActionCacheClientReader : NSObject {
    NSData *_scoredActionsChunk;
}

@property (readonly, nonatomic) NSIndexSet *lockscreenPredictionIndices;

- (unsigned long long)chunkCount;
- (id)initWithData:(id)a0;
- (id)_getLockScreenPredictionIndices:(id)a0;
- (id)_predicateForInstalledAndNonEngagedPredictions:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)actionsWithLimit:(long long)a0 shouldFilterRestrictedAppsAndRecentEngagements:(BOOL)a1;
- (id)initWithChunks:(id)a0;
- (id)lockscreenPredictionIndicesUpToLimit:(long long)a0;
- (id)actionsWithConsumerSubType:(unsigned char)a0 limit:(long long)a1;

@end
