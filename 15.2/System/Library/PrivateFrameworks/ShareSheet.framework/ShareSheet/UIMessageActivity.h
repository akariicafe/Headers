@class NSString, LPLinkMetadata, MFMessageComposeViewController;
@protocol SHSheetUIPeopleSuggestion;

@interface UIMessageActivity : UIActivity <UIManagedConfigurationRestrictableActivity>

@property (retain, nonatomic) MFMessageComposeViewController *messageComposeViewController;
@property (retain, nonatomic) LPLinkMetadata *linkMetadata;
@property (retain, nonatomic) id<SHSheetUIPeopleSuggestion> peopleSuggestion;
@property (nonatomic) BOOL ppt_forceImageTypeSupport;
@property (nonatomic) BOOL isContentManaged;
@property (copy, nonatomic) NSString *sourceApplicationBundleID;

+ (id)applicationBundleID;
+ (unsigned long long)_xpcAttributes;
+ (void)_preheatAsyncIfNeeded;
+ (long long)activityCategory;

- (id)activityType;
- (void)_cleanup;
- (void)setSessionID:(id)a0;
- (id)activityViewController;
- (void).cxx_destruct;
- (void)prepareWithActivityItems:(id)a0;
- (id)_bundleIdentifierForActivityImageCreation;
- (id /* block */)_backgroundPreheatBlock;
- (void)_prepareWithActivityItems:(id)a0 completion:(id /* block */)a1;
- (id)activityTitle;
- (void)messageComposeViewController:(id)a0 didFinishWithResult:(long long)a1;
- (void)dealloc;
- (BOOL)canPerformWithActivityItems:(id)a0;

@end
