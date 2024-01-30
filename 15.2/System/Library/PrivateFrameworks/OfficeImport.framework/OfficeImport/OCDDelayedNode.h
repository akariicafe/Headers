@protocol OCDDelayedNodeContext;

@interface OCDDelayedNode : NSObject {
    id<OCDDelayedNodeContext> mDelayedContext;
    BOOL mLoaded;
}

- (BOOL)isLoaded;
- (void)setLoaded:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)load;
- (void)setDelayedContext:(id)a0;
- (id)delayedContext;

@end
