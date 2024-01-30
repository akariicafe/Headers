@class NSString, NSArray, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface ATDeviceSettings : NSObject {
    NSUserDefaults *_userDefaults;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_bundleIdentifier;
}

@property (readonly, nonatomic) BOOL isDeviceLinkClient;
@property (readonly, copy, nonatomic) NSString *libraryIdentifier;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, copy, nonatomic) NSString *serviceDomain;
@property (readonly, copy, nonatomic) NSString *serviceType;
@property (readonly, copy, nonatomic) NSString *interfaceName;
@property (readonly, copy, nonatomic) NSArray *dataClassesNeedingSync;
@property (readonly, nonatomic) double pairingSyncCompletionTime;
@property (nonatomic) double lastAuthenticationDialogResponseTime;
@property (readonly, nonatomic) BOOL fairPlayEnabled;
@property (readonly, nonatomic) BOOL grappaEnabled;
@property (readonly, nonatomic) BOOL restoreBatchingEnabled;
@property (readonly, nonatomic) unsigned long long restoreBatchSize;
@property (readonly, nonatomic) BOOL useNewDownloadService;
@property (readonly, nonatomic) BOOL watchProxyDownloadsDisabled;

+ (id)sharedInstance;

- (void)synchronize;
- (BOOL)hasCompletedDataMigration;
- (void)setCurrentInstallDisposition:(id)a0;
- (void)setPreExistingStoreIdentifiers:(id)a0;
- (void)removePendingSyncSettingForDataClass:(id)a0;
- (void)removeEndpointInfoForLibrary:(id)a0;
- (void)updateLastSyncTimeForLibrary:(id)a0 dataClass:(id)a1;
- (void)setHasCompletedDataMigration:(BOOL)a0;
- (void)setSyncPending:(BOOL)a0 forDataClass:(id)a1;
- (id)_endpointInfoForLibrary:(id)a0;
- (BOOL)isSyncPendingForDataClass:(id)a0;
- (id)syncStateForLibrary:(id)a0 dataClass:(id)a1;
- (id)getCurrentInstallDisposition;
- (void)setEndpointInfo:(id)a0;
- (id)getPreExistingStoreIdentifiers;
- (void)_setEndpointInfo:(id)a0 forLibrary:(id)a1;
- (void)setSyncState:(id)a0 forLibrary:(id)a1 dataClass:(id)a2;
- (id)hostInfoForLibrary:(id)a0;
- (void)setVersion:(unsigned long long)a0 forDataclass:(id)a1;
- (id)init;
- (unsigned long long)versionForDataclass:(id)a0;
- (int)activeRestoreType;
- (void)setHostInfo:(id)a0 forLibrary:(id)a1;
- (void)setPairingSyncCompletionTime:(double)a0;
- (void)setActiveRestoreType:(int)a0;
- (id)endpointInfo;
- (void).cxx_destruct;
- (id)lastSyncTimeForLibrary:(id)a0 dataClass:(id)a1;

@end
