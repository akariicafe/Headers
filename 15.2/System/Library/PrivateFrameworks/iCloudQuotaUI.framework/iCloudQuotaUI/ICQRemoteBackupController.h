@class NSString, ICQDeviceIdentificationView, NSURL, ICQPreferencesRemoteUIDelegate, ICQSpinnerBezel;

@interface ICQRemoteBackupController : PSListController <NSURLConnectionDelegate, DelayedPushDelegate> {
    ICQDeviceIdentificationView *_deviceIdentificationView;
    ICQSpinnerBezel *_deletionBezel;
}

@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) NSString *deviceIdentifier;
@property (retain, nonatomic) NSString *backupSizeString;
@property (retain, nonatomic) NSString *lastBackupDateString;
@property (retain, nonatomic) NSURL *deletionURL;
@property (retain, nonatomic) NSURL *deviceImageURL;
@property (retain, nonatomic) ICQPreferencesRemoteUIDelegate *remoteDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)specifier;

- (id)specifiers;
- (void)loadView;
- (void).cxx_destruct;
- (BOOL)needsToShowToolbarInPrefsAppRoot;
- (void)dealloc;
- (void)loadPropertyValuesFromDictionary:(id)a0;
- (void)confirmDelete:(id)a0;
- (void)deleteBackupConfirmed;
- (void)startDeletionBezel;
- (void)endDeletionBezel;
- (void)loadStarted:(id)a0;
- (void)loadFinished:(id)a0;
- (void)loadFailed:(id)a0 withError:(id)a1;
- (void)_backupDeletionFailedWithCode:(long long)a0;

@end
