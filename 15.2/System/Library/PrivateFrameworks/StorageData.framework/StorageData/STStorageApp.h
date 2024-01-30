@class NSDate, NSString, NSArray, FPProviderDomain, NSData, NSDictionary, LSApplicationRecord, PSUsageBundleApp, STSizeVector, MCMContainer;

@interface STStorageApp : NSObject {
    NSData *_lsid;
    BOOL _isDocumentApp;
    BOOL _isAppClip;
    long long _assetPurgeableSize;
    long long _coreMLDataSize;
}

@property (retain) STSizeVector *intSizesVar;
@property (retain) STSizeVector *extSizesVar;
@property (retain) STSizeVector *appSizesVar;
@property (retain) LSApplicationRecord *appRecord;
@property (retain) NSString *bundleIdentifier;
@property (retain) NSString *appIdentifier;
@property (retain) NSString *name;
@property (retain) NSString *vendorName;
@property (retain) NSString *versionString;
@property int appKind;
@property (retain) NSDate *lastUsedDate;
@property (readonly) STSizeVector *appSize;
@property (readonly) STSizeVector *appSizeIfComputed;
@property (readonly) NSArray *documents;
@property (retain) PSUsageBundleApp *usageBundle;
@property (retain) NSArray *mediaTypes;
@property (retain) FPProviderDomain *fpDomain;
@property (readonly) BOOL isApple;
@property (readonly) BOOL isSystemApp;
@property (readonly) BOOL isUserApp;
@property (readonly) BOOL isDeletable;
@property (readonly) BOOL isDemotable;
@property (readonly) BOOL isDeleted;
@property (readonly) BOOL isDemoted;
@property (readonly) BOOL isUsageApp;
@property (readonly) BOOL isDocumentApp;
@property (readonly) BOOL isAppClip;
@property (readonly) BOOL userVisible;
@property BOOL forceVisible;
@property BOOL forceHidden;
@property (retain) MCMContainer *appContainer;
@property (retain) NSArray *dataContainers;
@property (retain) NSArray *sharedContainers;
@property (retain) NSString *parentAppIdentifier;
@property (retain) NSArray *childApps;
@property (retain) STSizeVector *external;
@property (retain) STSizeVector *externalSizes;
@property (copy) id /* block */ externalDataSizeBlock;
@property (readonly) STSizeVector *internalSizes;
@property long long appContainerSize;
@property long long dataContainerSize;
@property long long dataPurgeableSize;
@property long long sharedContainerSize;
@property long long sharedPurgeableSize;
@property long long assetPurgeableSize;
@property long long coreMLDataSize;
@property long long externalSize;
@property long long externalPurgeableSize;
@property (readonly) NSDictionary *infoDict;
@property BOOL isPseudoApp;

+ (id)sizeOfPluginKitContainers;

- (long long)totalSize;
- (id)initWithBundleIdentifier:(id)a0;
- (id)appPath;
- (void).cxx_destruct;
- (id)initWithApplicationIdentifier:(id)a0;
- (id)appProxy;
- (long long)staticSize;
- (long long)dynamicSize;
- (id)dataPath;
- (void)refreshAppSizes;
- (void)refreshAppState;
- (void)addNumber:(long long)a0 toDict:(id)a1 forKey:(id)a2;
- (id)initWithAppRecord:(id)a0 usageBundle:(id)a1;
- (id)initWithAppRecord:(id)a0;
- (void)_postNotify:(id)a0;
- (void)postNotify:(id)a0;
- (void)notifyAppSizeChanged;
- (id)updateAppSizes;
- (long long)docsAndDataSize;
- (id)initWithBundleIdentifier:(id)a0 name:(id)a1 vendorName:(id)a2;
- (long long)sizeOfMLData;
- (long long)docAndDataSize;
- (long long)sharedDataSize;

@end
