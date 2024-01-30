@class NSSet, NSString;

@interface CLSCurationDebugCluster : CLSCurationDebugObject {
    NSSet *_debugClusters;
}

@property (retain, nonatomic) NSSet *unclusteredDebugItems;
@property (readonly) NSString *reason;

- (id)dictionaryRepresentation;
- (id)timestamp;
- (void).cxx_destruct;
- (void)addDebugClusters:(id)a0;
- (id)allDebugItems;
- (id)initWithDebugItems:(id)a0 reason:(id)a1;
- (void)resetWithReason:(id)a0 agent:(id)a1 stage:(id)a2;
- (void)setDebugClusters:(id)a0;

@end
