@class NSString, NSURL, LSApplicationProxy, NSOperation, UIPrintInteractionController;

@interface UIOpenInIBooksActivity : UIActivity <LSOpenResourceOperationDelegate, UIManagedConfigurationRestrictableActivity>

@property (retain, nonatomic) NSURL *url;
@property (nonatomic) BOOL shouldUnlinkFile;
@property (retain, nonatomic) NSString *applicationIdentifier;
@property (retain, nonatomic) LSApplicationProxy *applicationProxy;
@property (retain, nonatomic) NSOperation *operation;
@property (retain, nonatomic) UIPrintInteractionController *printInteractionController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isContentManaged;
@property (copy, nonatomic) NSString *sourceApplicationBundleID;

+ (long long)activityCategory;
+ (unsigned long long)_xpcAttributes;
+ (id)bestJobNameForActivityItems:(id)a0;
+ (id)jobNameFormatForFile;
+ (id)defaultJobName;

- (void)openResourceOperationDidComplete:(id)a0;
- (void)openResourceOperation:(id)a0 didFailWithError:(id)a1;
- (void)openResourceOperation:(id)a0 didFinishCopyingResource:(id)a1;
- (id)activityType;
- (id)init;
- (id)_loadedApplicationProxy;
- (void)_finishedCopyingResource:(BOOL)a0;
- (void).cxx_destruct;
- (void)_openDocumentWithApplication;
- (id)_bundleIdentifierForActivityImageCreation;
- (void)_cleanup;
- (BOOL)_appIsDocumentTypeOwner;
- (void)prepareWithActivityItems:(id)a0;
- (id)activityTitle;
- (long long)_defaultSortGroup;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;

@end
