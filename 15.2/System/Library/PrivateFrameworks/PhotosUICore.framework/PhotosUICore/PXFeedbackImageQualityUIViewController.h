@class UINavigationController, NSArray, NSDictionary, PXFeedbackLikeItOrNotComboUIViewController, NSString;
@protocol PXFeedbackImageQualityUIViewControllerDelegate;

@interface PXFeedbackImageQualityUIViewController : UIViewController <PXFeedbackFormDelegate>

@property (retain, nonatomic) NSArray *assets;
@property (retain, nonatomic) NSDictionary *negativeFeedback;
@property (retain, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic) PXFeedbackLikeItOrNotComboUIViewController *feedbackController;
@property (retain, nonatomic) NSArray *imageQualityDiagnosticFileURLs;
@property (readonly, weak, nonatomic) id<PXFeedbackImageQualityUIViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithAssets:(id)a0 delegate:(id)a1;
- (BOOL)wantsCustomFeedbackSection;
- (BOOL)wantsPositiveFeedbackSection;
- (BOOL)shouldContinuePresentingFormAfterFeedback;
- (void)userDidFinish:(BOOL)a0;
- (id)longTitleText;
- (id)viewTitleForRadar;
- (id)negativeFeedbackKeys;
- (id)positiveFeedbackKeys;
- (BOOL)shouldDisplaySecondaryFeedbackButtons;
- (void)userIndicatedLike;
- (void)userIndicatedDislike;
- (void)userSentPositiveFeedback:(id)a0 negativeFeedback:(id)a1 customFeedback:(id)a2;
- (void)_fileRadarWithAssets:(id)a0 positiveFeedback:(id)a1 negativeFeedback:(id)a2 customFeedback:(id)a3;
- (void)_generateResourceFilesForAssets:(id)a0 completionHandler:(id /* block */)a1;
- (id)_generateTitleForFeedback:(id)a0 forAssets:(id)a1;
- (long long)_radarComponentForFeedback:(id)a0;
- (id)_componentIDForComponent:(long long)a0;
- (id)_componentNameForComponent:(long long)a0;
- (id)_keywordIDForComponent:(long long)a0;
- (id)_generateURLsForAssetsDBGFiles:(id)a0;
- (id)_generateZippedCaptureFoldersForAssets:(id)a0;
- (void)_archiveFolder:(id)a0 destinationPath:(id)a1;
- (int)_addFileToArchive:(id)a0 withFileName:(id)a1 archive:(struct archive { } *)a2;
- (int)_addDirectoryToArchive:(id)a0 withDirName:(id)a1 archive:(struct archive { } *)a2;
- (id)_captureIDFromURL:(id)a0;
- (id)_captureIDsToCaptureFoldersInDirectory:(id)a0;

@end
