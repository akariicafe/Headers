@class UIMenu, NSString, PXImportController, NSNumberFormatter, UIAction, PLCacheDeleteClient, NSByteCountFormatter, UIViewController;
@protocol PUImportActionCoordinatorDelegate;

@interface PUImportActionCoordinator : NSObject

@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) PXImportController *importController;
@property (retain, nonatomic) NSString *loggingPrefix;
@property (retain, nonatomic) UIAction *importAllAction;
@property (retain, nonatomic) UIMenu *importActionsMenu;
@property (retain, nonatomic) NSNumberFormatter *percentageNumberFormatter;
@property (nonatomic) BOOL ppt_alwaysImportDuplicatesNoPrompt;
@property (retain, nonatomic) NSByteCountFormatter *byteCountFormatter;
@property (retain, nonatomic) PLCacheDeleteClient *cacheDeleteClient;
@property (weak, nonatomic) id<PUImportActionCoordinatorDelegate> delegate;
@property (readonly, nonatomic) long long loggingSource;
@property (nonatomic) BOOL presentsAdditionalDeleteAllConfirmation;

+ (id)deleteAllConfirmationMessageForItems:(id)a0 importSource:(id)a1;
+ (long long)importBehaviorForBatteryState:(long long)a0 batteryLevel:(float)a1;
+ (float)lowBatteryLevelThresholdForDevice;
+ (void)retrieveBatteryState:(long long *)a0 batteryLevel:(float *)a1;

- (void).cxx_destruct;
- (void)stopImport;
- (void)deleteItemsWithoutConfirmation:(id)a0;
- (void)_commitImportingItems:(id)a0;
- (void)_deleteItems:(id)a0;
- (void)_handleDiskAvailabilityRequestForItems:(id)a0 withSuccess:(BOOL)a1 numBytesPurged:(long long)a2 additionalBytesRequired:(long long)a3 error:(id)a4;
- (void)_importItems:(id)a0 allowDuplicates:(BOOL)a1;
- (void)_presentInsufficientDiskSpaceAlertForItems:(id)a0;
- (id)actionMenuForImportButton;
- (void)checkBatteryLevelWithCompletion:(id /* block */)a0;
- (void)configureImportActionsForBarButtonItem:(id)a0;
- (void)deleteItemsFromBarButtonItem:(id)a0;
- (void)deleteItemsFromBarButtonItem:(id)a0 withOneUpHintItems:(id)a1;
- (void)importAllFromBarButtonItem;
- (id)initWithViewController:(id)a0 importController:(id)a1 loggingSource:(long long)a2;
- (void)notifyDelegateOfImportCancellation;
- (void)ppt_beginImportFromBarButtonItem;
- (BOOL)someItemsButNotAllAreSelected;

@end
