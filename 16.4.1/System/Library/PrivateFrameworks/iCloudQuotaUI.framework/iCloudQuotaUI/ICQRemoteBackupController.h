@class NSString, ICQDeviceIdentificationView, NSURL, ICQPreferencesRemoteUIDelegate, ICQSpinnerBezel, ACAccount;

@interface ICQRemoteBackupController : PSListController <NSURLConnectionDelegate, DelayedPushDelegate> {
    ICQDeviceIdentificationView *_deviceIdentificationView;
    ICQSpinnerBezel *_deletionBezel;
    ACAccount *_account;
}

@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) NSString *deviceIdentifier;
@property (retain, nonatomic) NSString *backupSizeString;
@property (retain, nonatomic) NSString *lastBackupDateString;
@property (retain, nonatomic) NSURL *deletionURL;
@property (retain, nonatomic) NSURL *deviceImageURL;
@property (nonatomic) BOOL isBackupEnabled;
@property (retain, nonatomic) ICQPreferencesRemoteUIDelegate *remoteDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)specifier;
+ (id)specifierForAccount:(id)a0;

- (void)setSpecifier:(id)a0;
- (void)dealloc;
- (id)specifiers;
- (void).cxx_destruct;
- (void)loadView;
- (void)_backupDeletionFailedWithCode:(long long)a0;
- (void)_backupDeletionSuccess;
- (void)confirmDelete:(id)a0;
- (void)deleteBackupConfirmed;
- (void)endDeletionBezel;
- (void)loadFailed:(id)a0 withError:(id)a1;
- (void)loadFinished:(id)a0;
- (void)loadPropertyValuesFromDictionary:(id)a0;
- (void)loadStarted:(id)a0;
- (void)startDeletionBezel;

@end
