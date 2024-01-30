@class OBLinkTrayButton, NSString, PXSharedLibraryParticipantTableViewController, PXSharedLibraryAssistantParticipantViewModel, NSArray, OBTrayButton, PXSharedLibraryAssistantViewModel;
@protocol PXAssistantViewControllerDelegate;

@interface PXSharedLibraryAssistantParticipantViewController : OBTableWelcomeController <PXSharedLibraryParticipantTableViewControllerDelegate, PXChangeObserver, PXAssistantViewController> {
    PXSharedLibraryParticipantTableViewController *_tableViewController;
    NSArray *_tableViewLayoutConstraints;
    OBTrayButton *_titleButton;
    OBLinkTrayButton *_addLaterButton;
}

@property (readonly, nonatomic) PXSharedLibraryAssistantViewModel *assistantViewModel;
@property (readonly, nonatomic) PXSharedLibraryAssistantParticipantViewModel *participantViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXAssistantViewControllerDelegate> assistantViewControllerDelegate;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateIcon;
- (void).cxx_destruct;
- (void)continueButtonTapped:(id)a0;
- (void)_continueAssistant;
- (void)_updateButtonsAppearance;
- (void)_updateTableViewLayoutConstraints;
- (void)addLaterButtonTapped:(id)a0;
- (void)dismissPresentedViewControllerAnimated:(BOOL)a0 forSharedLibraryParticipantTableViewController:(id)a1;
- (id)initWithAssistantViewModel:(id)a0 participantViewModel:(id)a1;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 forSharedLibraryParticipantTableViewController:(id)a2;
- (void)sharedLibraryParticipantTableViewControllerDidChangeHeight:(id)a0;

@end
