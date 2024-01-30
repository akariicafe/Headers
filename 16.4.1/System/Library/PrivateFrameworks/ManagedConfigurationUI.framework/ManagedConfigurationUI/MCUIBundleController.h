@class PSSpecifier, NSObject, PSListController;
@protocol OS_dispatch_queue, MCUIDataManagerProtocol;

@interface MCUIBundleController : PSBundleController

@property (weak, nonatomic) PSListController *parentController;
@property (retain, nonatomic) PSSpecifier *specifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) id<MCUIDataManagerProtocol> dataManager;

+ (id)sharedInstance;

- (id)initWithParentListController:(id)a0 properties:(id)a1;
- (void)_mcuiUpdated;
- (id)_initWithDataManager:(id)a0;
- (id)_detailsFromSpecifier:(id)a0;
- (id)initWithParentListController:(id)a0 dataManager:(id)a1;
- (void)dealloc;
- (void)_reloadTopLevelSpecifier;
- (void)_sharedInitWithDataManager:(id)a0;
- (id)specifiersWithSpecifier:(id)a0;
- (BOOL)_swizzlingFromSpecifier:(id)a0;
- (BOOL)_updateTopLevelSpecifier;
- (void).cxx_destruct;
- (void)unload;

@end
