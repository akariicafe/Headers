@class NSString;

@interface SBSceneLayoutSynchronizeTransitionTransaction : BSTransaction {
    NSString *_debugName;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)_canBeInterrupted;
- (id)_graphNodeDebugName;
- (id)initWithDebugName:(id)a0;
- (void)synchronize;

@end
