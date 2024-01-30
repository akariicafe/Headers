@class NSString, NSArray, BPSRemoteWatchView, BPSMultipleWatchMigrationView;
@protocol BPSWatchMigrationControllerDelegate;

@interface BPSWatchMigrationController : UIViewController

@property (retain, nonatomic) BPSRemoteWatchView *watchView;
@property (retain, nonatomic) BPSMultipleWatchMigrationView *multipleWatchView;
@property (retain, nonatomic) NSString *sourceDeviceName;
@property (retain, nonatomic) NSArray *migratableDevices;
@property (nonatomic) BOOL iTunes;
@property (weak, nonatomic) id<BPSWatchMigrationControllerDelegate> migrationDelegate;

- (void).cxx_destruct;
- (void)loadView;
- (id)initWithSnapshot:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithSourceDeviceName:(id)a0;
- (void)_notifyDelegateShouldMigrateWithData:(id)a0;
- (void)_saveMigrationPreference:(BOOL)a0;
- (BOOL)shouldBeDisplayedGivenMigrationData:(id)a0;

@end
