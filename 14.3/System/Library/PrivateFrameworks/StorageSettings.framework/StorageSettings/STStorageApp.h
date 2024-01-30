@class PSUsageBundleApp, NSString, LSApplicationRecord, NSArray, LSApplicationProxy, FPProviderDomain, NSDate;

@interface STStorageApp : NSObject {
    long long _purgeableSize;
    BOOL _isDeleting;
    BOOL _isDemoting;
    NSString *_appPath;
    NSString *_dataPath;
    NSString *_vendorName;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _recLock;
}

@property BOOL isApple;
@property (retain) NSString *appIdentifier;
@property (retain) NSString *bundleIdentifier;
@property (retain) NSString *name;
@property (retain, nonatomic) LSApplicationRecord *appRecord;
@property (readonly, nonatomic) LSApplicationProxy *appProxy;
@property (retain) FPProviderDomain *fpDomain;
@property (readonly) NSString *bundleVersion;
@property (readonly) NSString *vendorName;
@property (readonly) NSString *versionString;
@property (readonly) NSArray *documents;
@property (readonly) long long purgeableSize;
@property (readonly) long long staticSize;
@property (readonly) long long dynamicSize;
@property (readonly) long long dataSize;
@property (readonly) long long totalSize;
@property (readonly) BOOL isDeletable;
@property (readonly) BOOL isDemotable;
@property (readonly) BOOL isDemoted;
@property (readonly) BOOL isDeleted;
@property (readonly) BOOL isUsageApp;
@property (readonly) BOOL isAppClip;
@property BOOL isUserApp;
@property BOOL isSystemApp;
@property BOOL isInternalApp;
@property BOOL isDocumentApp;
@property BOOL specialSizePending;
@property (readonly) NSDate *lastUsedDate;
@property (readonly) NSDate *installDate;
@property (retain) PSUsageBundleApp *usageBundleApp;
@property (retain, nonatomic) NSArray *mediaTypes;
@property long long externalDataSize;
@property long long sharedDataSize;
@property long long specialSize;
@property long long coreMLDataSize;
@property BOOL isPseudoApp;

+ (void)notifyAppsUpdated;
+ (void)_notifyAppsUpdated:(id)a0;
+ (void)setLaunchDatesNeedUpdating;

- (void).cxx_destruct;
- (id)initWithApplicationIdentifier:(id)a0;
- (void)loadInfo;
- (id)initWithApplicationRecord:(id)a0;
- (void)updateSpecialSize;
- (void)refreshAppState;

@end
