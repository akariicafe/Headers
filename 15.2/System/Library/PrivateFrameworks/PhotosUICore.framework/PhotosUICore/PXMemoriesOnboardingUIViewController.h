@class PXOnboardingStatusUIView, NSString, PXPhotoAnalysisStatusController, PXOnboardingWelcomeUIView;
@protocol PXMemoriesOnboardingViewControllerDelegate;

@interface PXMemoriesOnboardingUIViewController : UIViewController <PXChangeObserver> {
    struct { BOOL views; BOOL stage; BOOL progress; } _needsUpdateFlags;
}

@property (readonly, nonatomic) PXPhotoAnalysisStatusController *_statusController;
@property (nonatomic, setter=_setStage:) unsigned long long _stage;
@property (nonatomic, setter=_setWelcomeView:) PXOnboardingWelcomeUIView *_welcomeView;
@property (nonatomic, setter=_setStatusView:) PXOnboardingStatusUIView *_statusView;
@property (weak, nonatomic) id<PXMemoriesOnboardingViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)_updateIfNeeded;
- (void)contentSizeCategoryDidChange:(id)a0;
- (BOOL)_needsUpdate;
- (void)_setNeedsUpdate;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateViews;
- (id)_constraintsForMaximizingView:(id)a0;
- (void)_tearDownViews;
- (void)startButtonTapped:(id)a0;
- (void)_invalidateStage;
- (void)_updateStageIfNeeded;
- (void)_invalidateProgress;
- (void)_updateProgressIfNeeded;

@end
