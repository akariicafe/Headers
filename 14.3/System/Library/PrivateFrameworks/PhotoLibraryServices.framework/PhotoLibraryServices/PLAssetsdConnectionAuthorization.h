@class NSObject, NSString, NSSet, BKSApplicationStateMonitor, NSDate, NSNumber, PLSandboxedURL;
@protocol OS_dispatch_queue;

@interface PLAssetsdConnectionAuthorization : NSObject <PLClientAuthorization> {
    struct { unsigned int val[8]; } _auditToken;
    NSSet *_photoKitEntitlements;
    NSNumber *_photosAccessAllowed;
    NSNumber *_photosAddAccessAllowed;
    BOOL _libraryUpgradeAuthorized;
    BOOL _directDatabaseAccessAuthorized;
    BOOL _directDatabaseWriteAuthorized;
    PLSandboxedURL *_clientMainBundleSandboxedURL;
    NSDate *_connectionStartDate;
    BKSApplicationStateMonitor *_applicationStateMonitor;
    NSObject<OS_dispatch_queue> *_duetUpdateQueue;
}

@property (readonly, nonatomic) NSString *trustedCallerBundleID;
@property (readonly, nonatomic) NSString *fetchFilterIdentifier;
@property (readonly, nonatomic) NSString *trustedCallerDisplayName;
@property (readonly, nonatomic) NSString *trustedCallerPhotoLibraryUsageDescription;
@property (readonly, nonatomic) int clientProcessIdentifier;
@property (readonly, nonatomic) BOOL photoKitEntitled;
@property (readonly, nonatomic) struct { unsigned int x0[8]; } clientAuditToken;
@property (readonly, nonatomic) BOOL directDatabaseAccessAuthorized;
@property (readonly, nonatomic) BOOL directDatabaseWriteAuthorized;
@property (readonly, nonatomic) BOOL cloudInternalEntitled;
@property (readonly, nonatomic) BOOL analyticsCacheReadEntitled;
@property (readonly, nonatomic) BOOL analyticsCacheWriteEntitled;
@property (readonly, nonatomic) BOOL limitedLibraryMode;
@property (readonly, nonatomic, getter=isClientLimitedLibraryCapable) BOOL clientLimitedLibraryCapable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setClientLimitedLibraryCapable:(BOOL)a0;
- (BOOL)isClientInFullLibraryMode;
- (BOOL)_shouldTrackEventForBundle:(id)a0;
- (void).cxx_destruct;
- (BOOL)isClientAuthorizedForTCCServicePhotos;
- (void)_handleDuetReportIsForground:(BOOL)a0;
- (BOOL)isClientInRestrictedMode;
- (id)initWithConnection:(id)a0;
- (BOOL)isClientInLimitedLibraryMode;
- (BOOL)isPhotosClient;
- (void)setupFromConnection:(id)a0;
- (BOOL)isClientAuthorizedForLibraryUpgrade;
- (void)_trackCAConnectionEvent;
- (void)setClientMainBundleSandboxedURL:(id)a0;
- (BOOL)isClientAuthorizedForTCCServicePhotosAdd;
- (void)handleInvalidation;
- (BOOL)photoKitEntitledFor:(id)a0;
- (void)_trackDKEventIfNecessary;

@end
