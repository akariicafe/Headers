@class NSMutableSet;

@interface PUAssetExplorerAnalytics : NSObject {
    NSMutableSet *_eventsSent;
}

- (id)init;
- (void).cxx_destruct;
- (void)sendEvent:(id)a0 view:(unsigned long long)a1 source:(unsigned long long)a2 currentAssetCount:(long long)a3;

@end
