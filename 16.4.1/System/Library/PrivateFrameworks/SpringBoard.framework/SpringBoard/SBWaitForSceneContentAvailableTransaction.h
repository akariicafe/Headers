@class NSString, SBSceneHandle;

@interface SBWaitForSceneContentAvailableTransaction : SBTransaction <SBSceneHandleObserver> {
    BOOL _isContentStateReady;
    BOOL _manualListener;
}

@property (copy, nonatomic) SBSceneHandle *sceneHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_begin;
- (void)sceneHandle:(id)a0 didDestroyScene:(id)a1;
- (void)_didComplete;
- (BOOL)_canBeInterrupted;
- (void)sceneHandle:(id)a0 didUpdateContentState:(long long)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_noteSceneContentReadinessDidChange:(BOOL)a0;
- (id)initWithSceneHandle:(id)a0 manualListener:(BOOL)a1;
- (void)noteSceneContentIsReady:(BOOL)a0;

@end
