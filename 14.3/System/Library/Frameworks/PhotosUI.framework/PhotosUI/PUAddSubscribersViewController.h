@class PLCloudSharedAlbum, PUPhotoStreamRecipientViewController, UIBarButtonItem;

@interface PUAddSubscribersViewController : UIViewController {
    PUPhotoStreamRecipientViewController *_composeRecipientController;
    UIBarButtonItem *_addButton;
}

@property (readonly, nonatomic) PLCloudSharedAlbum *album;

- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (id)contentScrollView;
- (void).cxx_destruct;
- (void)_keyboardWillShow:(id)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (void)_saveAndDismiss;
- (id)initWithSharedStream:(id)a0;
- (void)_addButtonHandler;
- (void)_cancelButtonHandler;
- (BOOL)_validateRecipientsToAdd:(id)a0;
- (void)recipientViewControllerDidAddRecipient:(id)a0;
- (void)recipientViewControllerDidRemoveRecipient:(id)a0;
- (void)recipientViewController:(id)a0 didEnterText:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)_dismiss;
- (void)viewDidLoad;

@end
