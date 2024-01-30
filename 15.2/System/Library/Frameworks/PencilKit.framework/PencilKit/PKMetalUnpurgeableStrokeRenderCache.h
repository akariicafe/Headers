@class NSMutableSet;

@interface PKMetalUnpurgeableStrokeRenderCache : PKMetalStrokeRenderCache {
    NSMutableSet *_lockedResourceSet;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithInk:(id)a0;
- (void)addBuffer:(id)a0;

@end
