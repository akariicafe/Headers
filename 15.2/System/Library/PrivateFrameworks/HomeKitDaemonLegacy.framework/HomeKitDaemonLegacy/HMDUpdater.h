@class NSString, NSBackgroundActivityScheduler;

@interface HMDUpdater : HMFObject <HMFLogging>

@property (retain, nonatomic) NSBackgroundActivityScheduler *backgroundScheduler;
@property (retain, nonatomic) NSString *model;
@property (retain, nonatomic) NSString *targetKitUUID;
@property (retain, nonatomic) NSString *targetKitURLString;
@property (retain, nonatomic) NSString *currentKitUUID;
@property (retain, nonatomic) NSString *platformString;
@property (retain, nonatomic) NSString *buildid;
@property (nonatomic) BOOL internal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)initialize;
+ (id)logCategory;

- (int)_clean;
- (void)updateWithCompletion:(id /* block */)a0;
- (id)logIdentifier;
- (int)_download;
- (id)_downloadURL;
- (void).cxx_destruct;
- (int)_install;
- (id)init;
- (int)_reboot;
- (void)_info;
- (void)dealloc;
- (void)_fetchManifestWithCompletion:(id /* block */)a0;
- (void)_handleServerResponse:(id)a0 withData:(id)a1 error:(id)a2;
- (int)_rebuild;
- (int)_uninstall;
- (void)_clearInstalledRootUUID;
- (int)_executeScript:(const char *)a0;
- (void)_scheduleUpdateCheck;

@end
