@class PSSpecifier, PSListController;
@protocol MCUIDataManagerProtocol;

@interface MCUIBundleController : PSBundleController

@property (weak, nonatomic) PSListController *parentController;
@property (retain, nonatomic) PSSpecifier *specifier;
@property (retain, nonatomic) id<MCUIDataManagerProtocol> dataManager;
@property (nonatomic) unsigned long long nanoProfileCount;

+ (id)sharedInstance;
+ (BOOL)isRunningInBridge;

- (void)unload;
- (id)specifiersWithSpecifier:(id)a0;
- (id)initWithParentListController:(id)a0 properties:(id)a1;
- (void)_mcuiUpdated:(id)a0;
- (id)nanoDomainAccessor;
- (BOOL)_updateTopLevelSpecifier;
- (void).cxx_destruct;
- (id)initWithParentListController:(id)a0 dataManager:(id)a1;
- (void)decrementNanoProfileCount;
- (id)_initWithDataManager:(id)a0;
- (void)incrementNanoProfileCount;
- (id)_detailsFromSpecifier:(id)a0;
- (void)load;
- (void)dealloc;
- (void)_reloadTopLevelSpecifier;
- (BOOL)_swizzlingFromSpecifier:(id)a0;

@end
