@class NSString, UIViewController, UIImage;

@interface _UICloudSharingActivity : UIActivity <_UICloudSharingControllerDelegate_Internal, _UIDocumentSharingControllerDelegate_Private> {
    UIViewController *_activityViewController;
}

@property (retain, nonatomic) UIViewController *activityViewController;
@property (retain, nonatomic) NSString *activityTitle;
@property (retain, nonatomic) UIImage *activityImage;
@property (nonatomic) BOOL initialSharing;
@property (nonatomic) BOOL activityItemIsFolder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)_xpcAttributes;
+ (long long)activityCategory;

- (id)activityType;
- (void)_cloudShareControllerDidDismiss:(id)a0;
- (void)_documentSharingControllerDidDismiss:(id)a0;
- (void).cxx_destruct;
- (void)prepareWithActivityItems:(id)a0;
- (BOOL)_activitySupportsPromiseURLs;
- (BOOL)_isURLEligibleForSharing:(id)a0 isInitial:(BOOL *)a1 isFolder:(BOOL *)a2;
- (void)_setupForInitialSharing;
- (void)_setupForSharingInfo;
- (BOOL)eligibleTypeForActivity:(id)a0;
- (id)_systemImageName;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;

@end
