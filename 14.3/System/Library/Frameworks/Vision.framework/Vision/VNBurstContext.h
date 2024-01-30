@class BurstImageSetInternal;

@interface VNBurstContext : NSObject {
    BurstImageSetInternal *_burstSet;
}

@property (copy, nonatomic) id /* block */ loggingCallback;

- (BOOL)isPortrait;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isAction;
- (id)allClusters;
- (id)initWithOptions:(id)a0 error:(id *)a1;
- (BOOL)addBurstFrameWithIdentifier:(id)a0 fromImageBuffer:(id)a1 withProperties:(id)a2 error:(id *)a3;
- (id)bestImageIdentifiers;
- (id)allImageIdentifiers;
- (id)coverImageIdentifier;
- (id)allImageStats;

@end
