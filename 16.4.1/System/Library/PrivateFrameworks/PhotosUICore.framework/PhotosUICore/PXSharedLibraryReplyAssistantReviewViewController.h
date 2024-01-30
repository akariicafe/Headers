@class OBBoldTrayButton, PXSharedLibraryAssistantViewModel, NSString;
@protocol PXAssistantViewControllerDelegate;

@interface PXSharedLibraryReplyAssistantReviewViewController : OBWelcomeController <PXChangeObserver, PXAssistantViewController>

@property (readonly, nonatomic) OBBoldTrayButton *movePhotosButton;
@property (readonly, nonatomic) PXSharedLibraryAssistantViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXAssistantViewControllerDelegate> assistantViewControllerDelegate;

- (id)initWithViewModel:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateIcon;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (void)acceptInvitation;
- (void)_setIsProcessing:(BOOL)a0;
- (void)_updateHeaderText;
- (void)moveButtonTapped:(id)a0;

@end
