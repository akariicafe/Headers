@class NSString, NSArray, NSObject;
@protocol PLAlbumProtocol, PLAlbumContainer;

@interface PUPhotoStreamComposeServiceViewController : PXPhotoStreamComposeServiceViewController <PUPhotoStreamsAlbumsTableViewControllerDelegate, PUPhotoStreamCreateTitleDelegate, PUCloudSharedCreateAlbumViewControllerDelegate, SLSheetViewHostProtocol> {
    struct { unsigned char hasDidPost : 1; unsigned char hasDidCancel : 1; } _delegateFlags;
    NSObject<PLAlbumProtocol> *_selectedAlbum;
    NSArray *_actions;
    NSObject<PLAlbumContainer> *_albumList;
    BOOL _inCreateNewAlbum;
    NSArray *_recipients;
    BOOL _shouldShowPost;
    NSString *_itemCountString;
}

@property (readonly, copy, nonatomic) NSString *startingContentText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStartingContentText:(id)a0;
- (void).cxx_destruct;
- (void)userDidPost;
- (void)controller:(id)a0 didSelectAlbum:(id)a1;
- (void)controllerWillCreateNewAlbum:(id)a0;
- (void)userDidCancel;
- (void)titleController:(id)a0 didSetTitle:(id)a1;
- (void)titleControllerDidCancel:(id)a0;
- (id)_imageFromStreamShareSource:(id)a0;
- (id)sheetActions;
- (id)serviceIconImage;
- (id)albumListAction;
- (void)shouldShowNetworkActivityIndicator:(id)a0;
- (void)_pushTitleController;
- (BOOL)isContentValid;
- (void)send;
- (void)setDelegate:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)failWithError:(id)a0;
- (void)setSourcesToShare:(id)a0;
- (void)albumStreamingCreateViewController:(id)a0 didSucceed:(BOOL)a1;
- (id)title;
- (void)viewDidLoad;
- (void)setAssetsToShare:(id)a0;

@end
