@class UINavigationController, NSArray, NSDictionary, PXFeedbackLikeItOrNotComboUIViewController, PHAsset, PXAutoloopVideoProcessTask, NSString;
@protocol PXFeedbackAssetUIViewControllerDelegate;

@interface PXFeedbackAssetUIViewController : UIViewController <PXFeedbackFormDelegate, PXAutoloopVideoTaskDelegate>

@property (retain, nonatomic) PHAsset *asset;
@property (nonatomic) BOOL userLikedIt;
@property (retain, nonatomic) NSDictionary *positiveFeedback;
@property (retain, nonatomic) NSDictionary *negativeFeedback;
@property (retain, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic) PXFeedbackLikeItOrNotComboUIViewController *feedbackController;
@property (retain, nonatomic) PXAutoloopVideoProcessTask *autoLoopFrameworkDiagnosticsCurrentTask;
@property (retain, nonatomic) NSArray *autoLoopFrameworkDiagnosticFileURLs;
@property (readonly, weak, nonatomic) id<PXFeedbackAssetUIViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithAsset:(id)a0 delegate:(id)a1;
- (void)userDidFinish:(BOOL)a0;
- (id)longTitleText;
- (id)viewTitleForRadar;
- (id)negativeFeedbackKeys;
- (id)positiveFeedbackKeys;
- (BOOL)shouldDisplaySecondaryFeedbackButtons;
- (void)userIndicatedLike;
- (void)userIndicatedDislike;
- (void)userSentPositiveFeedback:(id)a0 negativeFeedback:(id)a1 customFeedback:(id)a2;
- (void)autoloopVideoTaskStatusDidChange:(id)a0;
- (void)_fileRadarWithAutoLoopAsset:(id)a0 positiveFeedback:(id)a1 negativeFeedback:(id)a2;
- (void)continueFiling;
- (void)_startAutoLoopVideoTaskForDiagnosticsWithAsset:(id)a0;

@end
