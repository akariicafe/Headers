@class NSString, NSArray;
@protocol BPSWatchMigrationControllerDelegate;

@interface BPSWatchMigrationController : BPSWelcomeOptinViewController

@property (retain, nonatomic) NSString *sourceDeviceName;
@property (retain, nonatomic) NSString *localizedDetailText;
@property (retain, nonatomic) NSArray *migratableDevices;
@property (nonatomic) BOOL iTunes;
@property (weak, nonatomic) id<BPSWatchMigrationControllerDelegate> migrationDelegate;

- (id)detailString;
- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (id)initWithSnapshot:(id)a0;
- (id)titleString;
- (id)alternateButtonTitle;
- (id)imageResource;
- (void)alternateButtonPressed:(id)a0;
- (void)suggestedButtonPressed:(id)a0;
- (id)suggestedButtonTitle;
- (id)imageResourceBundleIdentifier;
- (void)_notifyDelegateShouldMigrateWithData:(id)a0;
- (void)_saveMigrationPreference:(BOOL)a0;
- (id)initWithSourceDeviceName:(id)a0;
- (BOOL)shouldBeDisplayedGivenMigrationData:(id)a0;
- (BOOL)useBridgeStyling;

@end
