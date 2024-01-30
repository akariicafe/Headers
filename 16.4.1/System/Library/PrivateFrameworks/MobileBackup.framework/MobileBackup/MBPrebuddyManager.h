@class NSString, MBManagerClient, NSObject;
@protocol MBManagerDelegate;

@interface MBPrebuddyManager : NSObject <MBManagerDelegate>

@property (class, readonly, nonatomic) NSString *twoDeviceImageName;
@property (class, readonly, nonatomic) NSString *backupToCloudImageName;
@property (class, readonly, nonatomic) BOOL hasPrebuddyFollowUp;

@property (retain) MBManagerClient *managerClient;
@property (weak, nonatomic) NSObject<MBManagerDelegate> *delegate;
@property (readonly, nonatomic, getter=isPrebuddyMode) BOOL prebuddyMode;

+ (id)sharedManager;
+ (id)baseFollowupItem;

- (id)dateOfLastBackup;
- (id)init;
- (void).cxx_destruct;
- (void)followupAction:(id /* block */)a0;
- (void)signalPrebuddy:(id)a0;
- (void)beginPrebuddyBackupFromManualSignal:(BOOL)a0;
- (BOOL)beginPrebuddyBackupFromManualSignal:(BOOL)a0 error:(id *)a1;
- (void)cancelPrebuddy;
- (void)cancelPrebuddyOnAccountSignOut;
- (void)extendPrebuddy:(id)a0 completion:(id /* block */)a1;
- (void)prebuddyBackupDeleted:(id)a0;
- (void)shortenPrebuddyExpiration;
- (void)turnOnBackup;
- (void)updateFollowUp;

@end
