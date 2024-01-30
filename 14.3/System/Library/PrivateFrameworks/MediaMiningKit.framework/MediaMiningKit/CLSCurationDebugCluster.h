@class NSSet, NSString;

@interface CLSCurationDebugCluster : CLSCurationDebugObject {
    NSSet *_debugClusters;
}

@property (retain, nonatomic) NSSet *unclusteredDebugItems;
@property (readonly) NSString *reason;

- (id)timestamp;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)resetWithReason:(id)a0 agent:(id)a1 stage:(id)a2;
- (id)initWithDebugItems:(id)a0 reason:(id)a1;
- (id)allDebugItems;
- (void)setDebugClusters:(id)a0;
- (void)addDebugClusters:(id)a0;

@end
