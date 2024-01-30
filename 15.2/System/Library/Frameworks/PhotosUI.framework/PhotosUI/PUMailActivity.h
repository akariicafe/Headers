@class MFMailComposeViewController, NSString, PLUIEditVideoViewController, PLProgressView, PHAsset, PLVideoRemaker, UIViewController;
@protocol PXActivityItemSourceController;

@interface PUMailActivity : UIMailActivity <MFMailComposeViewControllerDelegate, PLVideoRemakerDelegate, PXMomentShareSuggestionHandlingActivity> {
    UIViewController *_referenceViewController;
    PHAsset *_videoAssetBeingTrimmed;
    MFMailComposeViewController *_mailComposeController;
    PLUIEditVideoViewController *_editVideoViewController;
    PLProgressView *_remakerProgressView;
    PLVideoRemaker *_videoRemaker;
    id /* block */ _remakerCompletionHandler;
    id _strongSelf;
    BOOL _isSharingSingleVideo;
    BOOL _didCheckMailDropAvailable;
    BOOL _isMailDropAvailable;
    BOOL _canSendMailInNewScene;
    BOOL _didFallbackToPresentComposeControllerModally;
}

@property (nonatomic, setter=_setRemakerWasCancelled:) BOOL _remakerWasCancelled;
@property (copy, nonatomic) NSString *transcodedVideoFilePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXActivityItemSourceController> itemSourceController;

+ (BOOL)isMailDropEnabled;
+ (BOOL)canPerformActivityAsIndividualItemsInSourceController:(id)a0;
+ (void)openEmailAccountPrefs;
+ (id)_momentShareLinkSubjectForMomentShare:(id)a0;
+ (id)_momentShareLinkActivityItemsForURL:(id)a0 momentShare:(id)a1;
+ (BOOL)canPerformActivityWithTotalCount:(unsigned long long)a0 assetMediaTypeCount:(struct PXAssetMediaTypeCount { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; })a1;
+ (id)_momentShareLinkPrompt;
+ (id)_momentShareLinkTitleForMomentShare:(id)a0;
+ (id)_expirationStringForMomentShare:(id)a0;
+ (BOOL)allowedToModifyEmailAccounts;

- (void)cancelRemaking;
- (id)activityViewController;
- (void)editVideoViewController:(id)a0 didTrimVideoWithOptions:(id)a1;
- (id)mailComposeViewController;
- (void).cxx_destruct;
- (void)prepareWithActivityItems:(id)a0;
- (BOOL)_presentActivityOnViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)_dismissActivityFromViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)mailComposeController:(id)a0 didFinishWithResult:(long long)a1 error:(id)a2;
- (id)init;
- (void)dealloc;
- (void)editVideoViewControllerDidCancel:(id)a0;
- (BOOL)_isMailDropEnabled;
- (void)activityDidFinish:(BOOL)a0;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;
- (void)videoRemakerDidBeginRemaking:(id)a0;
- (void)videoRemakerDidEndRemaking:(id)a0 temporaryPath:(id)a1;
- (void)_pu_cleanup;
- (void)_showTrimViewControllerForVideo:(id)a0 maximumTrimDuration:(double)a1 trimButtonTitle:(id)a2;
- (BOOL)_showTrimViewControllerIfNeededForVideoAsset:(id)a0;
- (void)_remakeAndSendVideoAsset:(id)a0 withTrimStartTime:(double)a1 endTime:(double)a2;
- (void)_transcodeAndSendVideo:(id)a0;
- (void)remakeVideoAsset:(id)a0 withTrimStartTime:(double)a1 endTime:(double)a2 progressHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)_cleanupRemaker;
- (void)_removeTempVideoRemakerFile;
- (void)_composeMailForVideo:(id)a0 trimmedFilePath:(id)a1;
- (BOOL)_momentShareLinkDidFail;
- (BOOL)_canPerformWithLink;
- (BOOL)_canPerformForIndividualAssetsWithActivityItems:(id)a0;
- (void)_prepareWithMomentShareLink:(id)a0;

@end
