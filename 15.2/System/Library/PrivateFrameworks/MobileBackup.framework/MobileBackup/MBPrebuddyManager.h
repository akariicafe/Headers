@class NSString, MBManagerClient, NSObject;
@protocol MBManagerDelegate;

@interface MBPrebuddyManager : NSObject <MBManagerDelegate>

@property (class, readonly, nonatomic) NSString *twoDeviceImageName;
@property (class, readonly, nonatomic) NSString *backupToCloudImageName;

@property (retain) MBManagerClient *managerClient;
@property (weak, nonatomic) NSObject<MBManagerDelegate> *delegate;
@property (readonly, nonatomic, getter=isPrebuddyMode) BOOL prebuddyMode;

+ (id)baseFollowupItem;
+ (id)sharedManager;

- (id)dateOfLastBackup;
- (BOOL)beginPrebuddyBackupFromManualSignal:(BOOL)a0 error:(id *)a1;
- (void)isPrebuddyBackupInProgress:(id /* block */)a0;
- (void)turnOnBackup;
- (void)signalPrebuddy:(id)a0;
- (void)extendPrebuddy:(id)a0 completion:(id /* block */)a1;
- (void)prebuddyBackupDeleted:(id)a0;
- (void)cancelPrebuddy;
- (void)beginPrebuddyBackupFromManualSignal:(BOOL)a0;
- (void)followupAction:(id /* block */)a0;
- (void)updateFollowUp;
- (void)shortenPrebuddyExpiration;
- (void).cxx_destruct;
- (id)init;

@end
