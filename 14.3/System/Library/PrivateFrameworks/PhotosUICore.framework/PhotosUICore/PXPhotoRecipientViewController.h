@class CNContactPickerViewController, NSString, NSArray, PXSearchRecipientController, PXComposeRecipientView, PXRecipientSearchDataSourceManager, NSLayoutConstraint, UILabel, UIBarButtonItem;
@protocol PXPhotoRecipientViewControllerDelegate;

@interface PXPhotoRecipientViewController : UIViewController <PXSearchRecipientControllerDelegate, PXComposeRecipientViewDelegate, UIPopoverPresentationControllerDelegate, CNContactPickerDelegate> {
    NSLayoutConstraint *_recipientViewHeightConstraint;
    UIBarButtonItem *_addButton;
}

@property (retain, nonatomic) NSString *initialLocalizedNameToQuery;
@property (retain, nonatomic) CNContactPickerViewController *contactPickerViewController;
@property (retain, nonatomic) PXSearchRecipientController *searchRecipientController;
@property (readonly, nonatomic) PXRecipientSearchDataSourceManager *searchDataSourceManager;
@property (retain, nonatomic) PXComposeRecipientView *composeRecipientView;
@property (retain, nonatomic) UILabel *noContentLabel;
@property (retain, nonatomic) NSArray *layoutConstraints;
@property (weak, nonatomic) id<PXPhotoRecipientViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *fieldLabel;
@property (nonatomic) long long maxRecipients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_contentSizeCategoryDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_commonInitialization;
- (void)popoverPresentationControllerDidDismissPopover:(id)a0;
- (void)_handleDoneButton:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)updateViewConstraints;
- (void)prepareForPopoverPresentation:(id)a0;
- (void)composeRecipientView:(id)a0 disambiguateRecipient:(id)a1;
- (void)searchRecipientController:(id)a0 didSelectRecipient:(id)a1;
- (void)searchRecipientController:(id)a0 searchStateDidChange:(long long)a1;
- (void)searchRecipientController:(id)a0 numberOfSearchRecipientsDidChange:(unsigned long long)a1;
- (id)viewControllerForPresentingContactViewControllerBySearchRecipientController:(id)a0;
- (id)initWithInitialLocalizedNameToQuery:(id)a0;
- (void)_presentContactPickerViewController:(id)a0;
- (void)_dismissContactPickerViewController;
- (void)_updateAddButton;
- (void)_updateNoContentLabelVisibility;
- (void)_contactPicker:(id)a0 didSelectContact:(id)a1;
- (void)_updateNoContentLabelFont;
- (void)viewWillAppear:(BOOL)a0;
- (void)contactPicker:(id)a0 didSelectContactProperty:(id)a1;
- (void)contactPicker:(id)a0 didSelectContact:(id)a1;
- (void)contactPickerDidCancel:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_handleCancelButton:(id)a0;
- (void)composeRecipientView:(id)a0 didFinishEnteringAddress:(id)a1;
- (void)composeRecipientView:(id)a0 didAddRecipient:(id)a1;
- (void)composeRecipientView:(id)a0 didRemoveRecipient:(id)a1;
- (void)composeRecipientView:(id)a0 textDidChange:(id)a1;
- (void)composeRecipientView:(id)a0 didChangeSize:(struct CGSize { double x0; double x1; })a1;
- (void)composeRecipientViewRequestAddRecipient:(id)a0;
- (void)viewDidLoad;

@end
