@class NSString, PUPhotoStreamComposeServiceViewController, PXVideoTrimQueueController, NSObject, UIViewController;
@protocol PXActivityItemSourceController, PLUserEditableAlbumProtocol, PUAlbumStreamActivityDelegate;

@interface PUAlbumStreamActivity : PXActivity <PXPhotoStreamComposeServiceDelegate, PXVideoTrimQueueControllerDelegate> {
    PUPhotoStreamComposeServiceViewController *_streamComposeViewController;
    double _startTime;
    double _endTime;
    UIViewController *_presenterViewController;
    UIViewController *_activityController;
    PXVideoTrimQueueController *_trimController;
    id<PXActivityItemSourceController> _itemSourceController;
}

@property (retain, nonatomic) NSObject<PLUserEditableAlbumProtocol> *destinationStreamingAlbum;
@property BOOL destinationAlbumWasCreated;
@property (nonatomic, setter=setPresentedFromActivityViewController:) BOOL isPresentedFromActivityViewController;
@property (weak, nonatomic) UIViewController *referenceViewController;
@property (weak, nonatomic) id<PUAlbumStreamActivityDelegate> albumStreamDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)activityCategory;
+ (id)customExportsOutputDirectoryParent;
+ (void)_recordRecentInvitationRecipient:(id)a0 displayName:(id)a1 date:(id)a2;
+ (id)customExportsOutputDirectoryForAsset:(id)a0;

- (id)activityType;
- (id)itemSourceController;
- (void)setItemSourceController:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)activityViewController;
- (id)_activityBundleImageConfiguration;
- (BOOL)_presentActivityOnViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)prepareWithActivityItems:(id)a0;
- (id)activityTitle;
- (id)activityImage;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)_systemImageName;
- (void)presentActivityOnViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)_selectedVideo;
- (void)controller:(id)a0 presentViewController:(id)a1;
- (void)controller:(id)a0 didFinishTrimmingVideoSources:(id)a1;
- (void)controller:(id)a0 didCancelTrimmingVideoSources:(id)a1;
- (void)controller:(id)a0 dismissViewControllerWithCompletion:(id /* block */)a1;
- (void)photoStreamComposeService:(id)a0 didPostComment:(id)a1;
- (void)_handleDismissWithSuccess:(BOOL)a0;
- (void)photoStreamComposeServiceDidCancel:(id)a0;
- (void)_createStreamsPickerContainerWithExisting:(BOOL)a0;
- (BOOL)_sharedAlbumAllowsAdding:(id)a0;
- (void)_performPresentationOnViewController:(id)a0 completion:(id /* block */)a1;
- (void)_prepareToPost:(id)a0 albumName:(id)a1 recipients:(id)a2 comments:(id)a3;
- (void)_publishAssets:(id)a0 withSharingInfos:(id)a1 customExportsInfo:(id)a2 andTrimmedVideoPathInfo:(id)a3 toAlbum:(id)a4 orCreateWithName:(id)a5 comment:(id)a6 invitationRecipients:(id)a7 wantsPublicWebsite:(BOOL)a8 completion:(id /* block */)a9;

@end
