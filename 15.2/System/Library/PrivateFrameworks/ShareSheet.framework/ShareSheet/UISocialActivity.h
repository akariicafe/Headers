@class NSString, SLComposeViewController;

@interface UISocialActivity : UIApplicationExtensionActivity <UIManagedConfigurationRestrictableActivity>

@property (copy, nonatomic) NSString *builtinActivityType;
@property (retain, nonatomic) SLComposeViewController *socialComposeViewController;
@property (retain, nonatomic) NSString *initialText;
@property (nonatomic) BOOL isContentManaged;
@property (copy, nonatomic) NSString *sourceApplicationBundleID;

+ (id)_activityExtensionItemsForActivityItemValues:(id)a0 extensionItemDataRequest:(id)a1;
+ (long long)activityCategory;

- (id)activityType;
- (void)_cleanup;
- (id)initWithActivityType:(id)a0;
- (id)activityViewController;
- (id)initWithApplicationExtension:(id)a0;
- (void).cxx_destruct;
- (BOOL)_managesOwnPresentation;
- (BOOL)_presentActivityOnViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)_dismissActivityFromViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)prepareWithActivityExtensionItemData:(id)a0;
- (void)_willBePerformedOrPresented;
- (BOOL)_canBeExcludeWhenMatchingWithContext:(id)a0;
- (BOOL)_wantsThumbnailItemData;
- (BOOL)_wantsAttachmentURLItemData;
- (BOOL)_wantsInitialSocialText;
- (void)_prepareComposeViewController:(id)a0 withInjectedExtensionItems:(id)a1;
- (void)_prepareComposeViewController:(id)a0 withActivityExtensionItems:(id)a1;
- (struct CGSize { double x0; double x1; })_thumbnailSize;
- (id)debugDescription;
- (BOOL)canPerformWithActivityItems:(id)a0;

@end
