@class UIMenu, NSString, UIAction, NSNumberFormatter, PXImportController, UIViewController;
@protocol PUImportActionCoordinatorDelegate;

@interface PUImportActionCoordinator : NSObject

@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) PXImportController *importController;
@property (retain, nonatomic) NSString *loggingPrefix;
@property (retain, nonatomic) UIAction *importAllAction;
@property (retain, nonatomic) UIMenu *importActionsMenu;
@property (retain, nonatomic) NSNumberFormatter *percentageNumberFormatter;
@property (nonatomic) BOOL ppt_alwaysImportDuplicatesNoPrompt;
@property (weak, nonatomic) id<PUImportActionCoordinatorDelegate> delegate;
@property (readonly, nonatomic) long long loggingSource;
@property (nonatomic) BOOL presentsAdditionalDeleteAllConfirmation;

+ (id)deleteAllConfirmationMessageForItems:(id)a0 importSource:(id)a1;
+ (long long)importBehaviorForBatteryState:(long long)a0 batteryLevel:(float)a1;
+ (void)retrieveBatteryState:(long long *)a0 batteryLevel:(float *)a1;
+ (float)lowBatteryLevelThresholdForDevice;

- (void).cxx_destruct;
- (void)stopImport;
- (id)initWithViewController:(id)a0 importController:(id)a1 loggingSource:(long long)a2;
- (void)configureImportActionsForBarButtonItem:(id)a0;
- (id)actionMenuForImportButton;
- (BOOL)someItemsButNotAllAreSelected;
- (void)ppt_beginImportFromBarButtonItem;
- (void)importAllFromBarButtonItem;
- (void)checkBatteryLevelWithCompletion:(id /* block */)a0;
- (void)_importItems:(id)a0 allowDuplicates:(BOOL)a1;
- (void)_commitImportingItems:(id)a0;
- (void)deleteItemsFromBarButtonItem:(id)a0;
- (void)notifyDelegateOfImportCancellation;
- (void)deleteItemsFromBarButtonItem:(id)a0 withOneUpHintItems:(id)a1;
- (void)deleteItemsWithoutConfirmation:(id)a0;
- (void)_deleteItems:(id)a0;

@end
