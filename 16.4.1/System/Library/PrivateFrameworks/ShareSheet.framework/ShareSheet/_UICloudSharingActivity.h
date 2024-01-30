@class NSString, UIViewController, UIImage;

@interface _UICloudSharingActivity : UIActivity <_UICloudSharingControllerDelegate_Internal, _UIDocumentSharingControllerDelegate_Private> {
    UIViewController *_activityViewController;
}

@property (retain, nonatomic) UIViewController *activityViewController;
@property (retain, nonatomic) NSString *activityTitle;
@property (retain, nonatomic) UIImage *activityImage;
@property (nonatomic) BOOL initialSharing;
@property (nonatomic) BOOL activityItemIsFolder;
@property (nonatomic) BOOL activityItemIsInSharedFolder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)activityCategory;
+ (unsigned long long)_xpcAttributes;

- (id)activityType;
- (void).cxx_destruct;
- (void)_cloudShareControllerDidDismiss:(id)a0;
- (void)_documentSharingControllerDidDismiss:(id)a0;
- (id)_systemImageName;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)_activityFooterText;
- (BOOL)_activitySupportsPromiseURLs;
- (BOOL)_allowsAutoCancelOnDismiss;
- (BOOL)_isURLEligibleForSharing:(id)a0 isInitial:(BOOL *)a1 isFolder:(BOOL *)a2;
- (void)_prepareWithActivityItems:(id)a0 completion:(id /* block */)a1;
- (void)_setupForInitialSharing;
- (void)_setupForSharingInfo;
- (void)_showSharingControllerForURL:(id)a0 completion:(id /* block */)a1;
- (BOOL)eligibleTypeForActivity:(id)a0;

@end
