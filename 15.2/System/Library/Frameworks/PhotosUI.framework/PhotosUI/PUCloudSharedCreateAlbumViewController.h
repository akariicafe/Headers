@class NSArray, NSString, PUPhotoStreamRecipientViewController, UINavigationItem;
@protocol PUCloudSharedCreateAlbumViewControllerDelegate;

@interface PUCloudSharedCreateAlbumViewController : UIViewController {
    UINavigationItem *_navItem;
    PUPhotoStreamRecipientViewController *_composeRecipientController;
}

@property (retain, nonatomic, setter=_setAlbumRecipients:) NSArray *_albumRecipients;
@property (weak, nonatomic) id<PUCloudSharedCreateAlbumViewControllerDelegate> delegate;
@property (retain, nonatomic) NSString *nextButtonTitle;
@property (readonly, nonatomic) NSArray *albumRecipients;

- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)loadView;
- (BOOL)_validateRecipientsToAdd:(id)a0;
- (struct CGSize { double x0; double x1; })contentSizeForViewInPopover;
- (void).cxx_destruct;
- (id)navigationItem;
- (id)init;
- (void)_doneAction:(id)a0;
- (void)_cancelAction:(id)a0;
- (void)dealloc;
- (void)_handleCompletionWithSuccess:(BOOL)a0;
- (void)_saveUserEnterredInfo;

@end
