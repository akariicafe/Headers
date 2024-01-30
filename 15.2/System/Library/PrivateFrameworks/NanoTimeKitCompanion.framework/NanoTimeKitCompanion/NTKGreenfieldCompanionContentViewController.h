@class ASCLockupView, NSString, NSArray, NSError, NSSet, UIView, NTKGreenfieldHighlightableFaceContainerView, NSObject, NTKGreenfieldDecodedRecipe, NSNumber;
@protocol BPSWatchViewProtocol, NTKGreenfieldCompanionContentViewControllerDelegate, OS_dispatch_queue;

@interface NTKGreenfieldCompanionContentViewController : BPSWelcomeOptinViewController <ASCLockupViewDelegate> {
    unsigned long long _state;
    NTKGreenfieldDecodedRecipe *_decodedRecipe;
    NSError *_error;
    NSNumber *_complicationItemId;
    BOOL _canAddFaceDirectly;
    NSString *_addFaceDescription;
    NSArray *_skippedComplicationSlots;
    NSSet *_unavailableSlots;
    NSString *_unavailableTitle;
    NSString *_unavailableDescription;
    ASCLockupView *_appStoreView;
    BOOL _lockupViewStateDidChange;
    BOOL _lockupViewDidUpdateStateForInstallingOrOpenable;
    UIView<BPSWatchViewProtocol> *_watchView;
    NTKGreenfieldHighlightableFaceContainerView *_faceView;
    long long _installMode;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (weak, nonatomic) id<NTKGreenfieldCompanionContentViewControllerDelegate> greenfieldDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)alternateButtonTitle;
- (void).cxx_destruct;
- (id)detailString;
- (id)titleString;
- (void)viewDidAppear:(BOOL)a0;
- (id)presentingViewControllerForLockupView:(id)a0;
- (void)lockupViewDidFinishRequest:(id)a0;
- (void)lockupView:(id)a0 appStateDidChange:(id)a1;
- (id)suggestedButtonTitle;
- (void)suggestedButtonPressed:(id)a0;
- (void)alternateButtonPressed:(id)a0;
- (void)_didTapShowInternalErrorButton;
- (id)initStartStateWithDecodedRecipe:(id)a0 canAddFaceDirectly:(BOOL)a1 addFaceDescription:(id)a2;
- (id)initComplicationNotAvailableStateWithDecodedRecipe:(id)a0 unavailableSlots:(id)a1 unavailableTitle:(id)a2 unavailableDescription:(id)a3;
- (id)initAddComplicationStateWithDecodedRecipe:(id)a0 complicationItemId:(id)a1 installMode:(long long)a2 skippedComplicationSlots:(id)a3;
- (id)initCompletedStateWithDecodedRecipe:(id)a0 skippedComplicationSlots:(id)a1 canRevisit:(BOOL)a2;
- (id)initWithError:(id)a0 decodedRecipe:(id)a1;
- (void)_setupContentViewForWatchFaceNotAvailableError;
- (void)_setupContentView;
- (void)_presentErrorUIAlert;
- (id)_errorTitleForError:(id)a0;
- (id)_errorSubtitleForError:(id)a0;
- (void)refreshViews;
- (void)_setupWatchFaceViewContainerWithView:(id)a0 deviceSize:(unsigned long long)a1 deviceMaterial:(unsigned long long)a2;
- (void)_updateComplicationDisplayStates;
- (struct CGSize { double x0; double x1; })_watchScreenSizeForDeviceSize:(unsigned long long)a0 screenScale:(double)a1;
- (struct CGPoint { double x0; double x1; })_watchScreenInsetForDeviceSize:(unsigned long long)a0 screenScale:(double)a1;
- (unsigned long long)_deviceSizeForCLKDeviceSizeClass:(unsigned long long)a0;
- (void)_installLocallyAvailableApp;
- (void)_overrideLockup:(id)a0 withButtonTitle:(id)a1 buttonAction:(id /* block */)a2;
- (void)_reinstallSystemAppWithBundleId:(id)a0;
- (void)_reinstallAppWithAdamId:(id)a0;
- (void)_didTapAddToMyFacesButton;

@end
