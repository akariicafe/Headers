@class NSString;

@interface SBSceneLayoutSynchronizeTransitionTransaction : BSTransaction {
    NSString *_debugName;
}

- (BOOL)_canBeInterrupted;
- (id)initWithDebugName:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)synchronize;
- (id)_graphNodeDebugName;

@end
