@protocol OCDDelayedNodeContext;

@interface OCDDelayedNode : NSObject {
    id<OCDDelayedNodeContext> mDelayedContext;
    BOOL mLoaded;
}

- (BOOL)load;
- (void).cxx_destruct;
- (void)setLoaded:(BOOL)a0;
- (BOOL)isLoaded;
- (void)setDelayedContext:(id)a0;
- (id)delayedContext;

@end
