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
}

@property (nonatomic, setter=_setRemakerWasCancelled:) BOOL _remakerWasCancelled;
@property (copy, nonatomic) NSString *transcodedVideoFilePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXActivityItemSourceController> itemSourceController;

+ (BOOL)canPerformActivityAsIndividualItemsInSourceController:(id)a0;
+ (BOOL)isMailDropEnabled;
+ (void)openEmailAccountPrefs;
+ (id)_momentShareLinkSubjectForMomentShare:(id)a0;
+ (id)_momentShareLinkActivityItemsForURL:(id)a0 momentShare:(id)a1;
+ (BOOL)canPerformActivityWithTotalCount:(unsigned long long)a0 assetMediaTypeCount:(struct PXAssetMediaTypeCount { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; })a1;
+ (id)_momentShareLinkPrompt;
+ (id)_momentShareLinkTitleForMomentShare:(id)a0;
+ (id)_expirationStringForMomentShare:(id)a0;
+ (BOOL)allowedToModifyEmailAccounts;

- (void).cxx_destruct;
- (id)activityViewController;
- (id)mailComposeViewController;
- (void)activityDidFinish:(BOOL)a0;
- (void)mailComposeController:(id)a0 didFinishWithResult:(long long)a1 error:(id)a2;
- (void)dealloc;
- (BOOL)_presentActivityOnViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)prepareWithActivityItems:(id)a0;
- (void)_pu_cleanup;
- (BOOL)_isMailDropEnabled;
- (void)videoRemakerDidBeginRemaking:(id)a0;
- (void)videoRemakerDidEndRemaking:(id)a0 temporaryPath:(id)a1;
- (void)_cleanupRemaker;
- (void)_showTrimViewControllerForVideo:(id)a0 maximumTrimDuration:(double)a1 trimButtonTitle:(id)a2;
- (BOOL)_showTrimViewControllerIfNeededForVideoAsset:(id)a0;
- (void)_remakeAndSendVideoAsset:(id)a0 withTrimStartTime:(double)a1 endTime:(double)a2;
- (void)_transcodeAndSendVideo:(id)a0;
- (void)remakeVideoAsset:(id)a0 withTrimStartTime:(double)a1 endTime:(double)a2 progressHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)_removeTempVideoRemakerFile;
- (void)_composeMailForVideo:(id)a0 trimmedFilePath:(id)a1;
- (BOOL)_momentShareLinkDidFail;
- (BOOL)_canPerformWithLink;
- (BOOL)_canPerformForIndividualAssetsWithActivityItems:(id)a0;
- (void)_prepareWithMomentShareLink:(id)a0;
- (void)editVideoViewControllerDidCancel:(id)a0;
- (void)editVideoViewController:(id)a0 didTrimVideoWithOptions:(id)a1;
- (void)cancelRemaking;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;

@end
