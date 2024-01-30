@class NSLayoutConstraint, NSString, OBTrayButton, PXSharedLibraryAssistantViewModel, NSProgress, OBBoldTrayButton, PXRoundProgressView, UILabel;
@protocol PXAssistantViewControllerDelegate;

@interface PXSharedLibraryAssistantSummaryViewController : OBWelcomeController <PXChangeObserver, PXAssistantViewController> {
    UILabel *_progressLabel;
    PXRoundProgressView *_progressView;
    OBBoldTrayButton *_previewButton;
    OBTrayButton *_skipPreviewButton;
    NSLayoutConstraint *_progressHeightConstraint;
}

@property (retain, nonatomic) NSProgress *previewProgress;
@property (readonly, nonatomic) PXSharedLibraryAssistantViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXAssistantViewControllerDelegate> assistantViewControllerDelegate;

- (void)updateProgress;
- (id)initWithViewModel:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)viewDidLoad;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)skipAndContinue;
- (void)_createPreviewAndCompleteAssistant;
- (id)_presentationEnvironment;
- (void)_previewInvitationAndCompleteAssistant;
- (void)_setIsProcessing:(BOOL)a0;
- (void)cancelShareIfInProgress;
- (void)createPreviewAndCompleteAssistant;
- (void)prepareUIForProcessing:(BOOL)a0;
- (void)primaryButtonTapped:(id)a0;
- (void)secondaryButtonTapped:(id)a0;

@end
