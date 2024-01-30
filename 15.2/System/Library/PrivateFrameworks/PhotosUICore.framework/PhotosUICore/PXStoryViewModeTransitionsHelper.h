@class PXStoryModel, PXUpdater, PXStoryViewModeTransition, NSString;
@protocol PXStoryViewModeTransitionsHelperDelegate;

@interface PXStoryViewModeTransitionsHelper : NSObject <PXChangeObserver>

@property (nonatomic) long long presentedViewMode;
@property (retain, nonatomic) PXStoryViewModeTransition *currentViewModeTransition;
@property (retain, nonatomic) PXStoryViewModeTransition *pendingViewModeTransition;
@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly, weak, nonatomic) PXStoryModel *model;
@property (weak, nonatomic) id<PXStoryViewModeTransitionsHelperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateIfNeeded;
- (void)_updateTransition;
- (void)_setNeedsUpdate;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void)invalidatePresentingGeometry;
- (id)initWithModel:(id)a0;
- (void)_configureTransition:(id)a0;
- (void)_invalidateTransition;
- (void)_invalidateTransitionCompletion;
- (void)_updateTransitionCompletion;
- (BOOL)_isViewModeSupported:(long long)a0;
- (void)_startTransition:(id)a0;
- (void)_currentTransitionDidFinish;
- (void)_currentTransitionDidCancel;

@end
