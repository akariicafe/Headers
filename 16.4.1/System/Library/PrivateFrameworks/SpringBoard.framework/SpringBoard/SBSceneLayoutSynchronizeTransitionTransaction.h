@class NSString;

@interface SBSceneLayoutSynchronizeTransitionTransaction : BSTransaction {
    NSString *_debugName;
}

- (void)synchronize;
- (BOOL)_canBeInterrupted;
- (id)initWithDebugName:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_graphNodeDebugName;

@end
