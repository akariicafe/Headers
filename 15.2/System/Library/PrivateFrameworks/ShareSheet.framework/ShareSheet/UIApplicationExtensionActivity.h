@class NSExtension, NSExtensionItem, NSString, UISUIActivityExtensionItemDataRequest, NSDate, _UIActivityBundleHelper, UIViewController;

@interface UIApplicationExtensionActivity : UIActivity <UIActivityExtensionItemDataSource, UIActivityExtensionItemDataTarget>

@property (retain, nonatomic) UIViewController *extensionViewController;
@property (retain, nonatomic) NSExtension *applicationExtension;
@property (copy, nonatomic) id extensionContextIdentifier;
@property (weak, nonatomic) UIViewController *presenterViewController;
@property (copy, nonatomic) id /* block */ presenterCompletion;
@property (retain, nonatomic) _UIActivityBundleHelper *activityBundleHelper;
@property (retain, nonatomic) NSExtensionItem *_injectedExtensionItem;
@property (copy, nonatomic) id /* block */ extensionRequestCleanupCompletion;
@property (readonly, nonatomic) NSDate *installationDate;
@property (readonly, nonatomic) NSString *containingAppBundleIdentifier;
@property (retain, nonatomic) UISUIActivityExtensionItemDataRequest *extensionItemDataRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_activityExtensionItemsForActivityItemValues:(id)a0 extensionItemDataRequest:(id)a1;
+ (id)preparedActivityExtensionItemDataForActivityItemValues:(id)a0 extensionItemDataRequest:(id)a1;
+ (id)_applicationExtensionActivitiesForItems:(id)a0;
+ (long long)activityCategory;

- (id)activityType;
- (void)_cleanup;
- (id)_activitySettingsImage;
- (long long)_defaultSortGroup;
- (id)initWithApplicationExtension:(id)a0;
- (void).cxx_destruct;
- (void)prepareWithActivityItems:(id)a0;
- (BOOL)_managesOwnPresentation;
- (BOOL)_presentActivityOnViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)_dismissActivityFromViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)_activityImage;
- (void)prepareWithActivityExtensionItemData:(id)a0;
- (BOOL)_canBeExcludeWhenMatchingWithContext:(id)a0;
- (id)_actionImage;
- (id)activityTitle;
- (void)dealloc;
- (BOOL)_isServiceExtension;
- (void)_instantiateExtensionViewControllerWithInputItems:(id)a0;
- (void)_presentExtensionViewControllerIfPossible;
- (void)_injectedJavaScriptResult:(id)a0;
- (BOOL)canPerformWithActivityItems:(id)a0;

@end
