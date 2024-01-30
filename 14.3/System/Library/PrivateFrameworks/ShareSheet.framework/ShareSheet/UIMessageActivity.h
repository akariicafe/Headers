@class NSString, LPLinkMetadata, MFMessageComposeViewController;

@interface UIMessageActivity : UIActivity <UIManagedConfigurationRestrictableActivity>

@property (retain, nonatomic) MFMessageComposeViewController *messageComposeViewController;
@property (retain, nonatomic) LPLinkMetadata *linkMetadata;
@property (nonatomic) BOOL isContentManaged;
@property (copy, nonatomic) NSString *sourceApplicationBundleID;

+ (long long)activityCategory;
+ (unsigned long long)_xpcAttributes;
+ (void)_preheatAsyncIfNeeded;
+ (id)applicationBundleID;

- (void)setSessionID:(id)a0;
- (id)activityType;
- (void).cxx_destruct;
- (id)activityViewController;
- (id)_bundleIdentifierForActivityImageCreation;
- (id /* block */)_backgroundPreheatBlock;
- (void)_prepareWithActivityItems:(id)a0 completion:(id /* block */)a1;
- (void)_cleanup;
- (void)dealloc;
- (void)prepareWithActivityItems:(id)a0;
- (void)messageComposeViewController:(id)a0 didFinishWithResult:(long long)a1;
- (id)activityTitle;
- (BOOL)canPerformWithActivityItems:(id)a0;

@end
