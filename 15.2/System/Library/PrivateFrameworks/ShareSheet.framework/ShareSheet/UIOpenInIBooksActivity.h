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

+ (id)bestJobNameForActivityItems:(id)a0;
+ (id)jobNameFormatForFile;
+ (id)defaultJobName;
+ (unsigned long long)_xpcAttributes;
+ (long long)activityCategory;

- (id)activityType;
- (void)_cleanup;
- (void)openResourceOperation:(id)a0 didFailWithError:(id)a1;
- (void)openResourceOperationDidComplete:(id)a0;
- (void)openResourceOperation:(id)a0 didFinishCopyingResource:(id)a1;
- (id)_loadedApplicationProxy;
- (void)_finishedCopyingResource:(BOOL)a0;
- (void)_openDocumentWithApplication;
- (long long)_defaultSortGroup;
- (void).cxx_destruct;
- (void)prepareWithActivityItems:(id)a0;
- (id)_bundleIdentifierForActivityImageCreation;
- (id)init;
- (BOOL)_appIsDocumentTypeOwner;
- (id)activityTitle;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;

@end
