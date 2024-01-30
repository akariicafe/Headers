@class OBBoldTrayButton, NSString, PXSharedLibraryLegacyDevicesFallbackMonitor, UITextView, PXSharedLibraryAssistantViewModel;
@protocol PXAssistantViewControllerDelegate;

@interface PXSharedLibraryReplyAssistantViewController : OBWelcomeController <PXChangeObserver, PXAssistantViewController> {
    UITextView *_textView;
}

@property (retain, nonatomic) OBBoldTrayButton *setupButton;
@property (nonatomic) BOOL wantsToStepForward;
@property (readonly, nonatomic) PXSharedLibraryAssistantViewModel *viewModel;
@property (readonly, nonatomic) PXSharedLibraryLegacyDevicesFallbackMonitor *legacyDevicesFallbackMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXAssistantViewControllerDelegate> assistantViewControllerDelegate;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateImage;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (void)declineInvitation;
- (BOOL)_canStepForward;
- (void)_updateTextView;
- (void)_setIsWaitingToStepForward:(BOOL)a0;
- (void)_stepForward;
- (void)acceptAndContinue;
- (void)declineButtonTapped:(id)a0;
- (id)initWithViewModel:(id)a0 legacyDevicesFallbackMonitor:(id)a1;
- (void)legacyDevicesFallbackMonitorChangedState;
- (void)setupButtonTapped:(id)a0;

@end
