@class PLCloudSharedAlbum, PUPhotoStreamRecipientViewController, UIBarButtonItem;

@interface PUAddSubscribersViewController : UIViewController {
    PUPhotoStreamRecipientViewController *_composeRecipientController;
    UIBarButtonItem *_addButton;
}

@property (readonly, nonatomic) PLCloudSharedAlbum *album;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (id)contentScrollView;
- (void)loadView;
- (void)_keyboardWillShow:(id)a0;
- (void)_addButtonHandler;
- (void)_cancelButtonHandler;
- (void)_saveAndDismiss;
- (BOOL)_validateRecipientsToAdd:(id)a0;
- (void)recipientViewControllerDidAddRecipient:(id)a0;
- (void)recipientViewControllerDidRemoveRecipient:(id)a0;
- (void)recipientViewController:(id)a0 didEnterText:(id)a1;
- (void).cxx_destruct;
- (void)_dismiss;
- (void)dealloc;
- (id)initWithSharedStream:(id)a0;

@end
