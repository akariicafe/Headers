@class NSString, TTSAssetQuality, TTSAssetType, TTSAssetTechnology, NSArray, NSDictionary, NSBundle, NSNumber, TTSAssetSource;

@interface TTSAsset : NSObject

@property (class, readonly, nonatomic) NSString *NewAssetNotification;

@property (nonatomic, readonly) BOOL locallyAvailable;
@property (nonatomic, readonly) BOOL downloading;
@property (nonatomic, readonly) BOOL purgeable;
@property (nonatomic, readonly) NSString *description;
@property (readonly, nonatomic) TTSAssetType *assetType;
@property (readonly, nonatomic) TTSAssetSource *assetSource;
@property (readonly, nonatomic) TTSAssetTechnology *technology;
@property (readonly, nonatomic) TTSAssetQuality *quality;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long versionNumber;
@property (readonly, nonatomic) NSString *versionDescription;
@property (readonly, nonatomic) NSArray *supportedLanguages;
@property (readonly, nonatomic) NSString *primaryLanguage;
@property (readonly, nonatomic) long long gender;
@property (readonly, nonatomic) NSNumber *age;
@property (readonly, nonatomic) NSNumber *diskSize;
@property (readonly, nonatomic) NSDictionary *attributes;
@property (readonly, nonatomic) BOOL locallyAvailable;
@property (readonly, nonatomic) BOOL downloading;
@property (readonly, nonatomic) BOOL purgeable;
@property (readonly, nonatomic) NSBundle *bundle;

+ (id)bestAssetOfTypes:(id)a0 matching:(id)a1;
+ (id)listAssetsOfTypes:(id)a0 matching:(id)a1;
+ (void)_postNewAssetNotification;
+ (BOOL)_hasTrialEntitlements;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })_gryphonVoiceCompatibility;
+ (void)waitForCatalogUpdates;
+ (BOOL)setServer:(id)a0 forType:(id)a1;
+ (BOOL)setServer:(id)a0 forType:(id)a1 source:(id)a2;
+ (id)getServerForType:(id)a0;
+ (id)getServerForType:(id)a0 source:(id)a1;
+ (id)describeServer:(id)a0 forType:(id)a1;
+ (id)describeServer:(id)a0 source:(id)a1;
+ (BOOL)handleProxyEvent:(id)a0 reply:(id)a1 connection:(id)a2;

- (void)purge;
- (void).cxx_destruct;
- (id)init;
- (void)cancelDownloadingThen:(id /* block */)a0;
- (void)downloadWithReservation:(id)a0 useBattery:(BOOL)a1 progress:(id /* block */)a2 then:(id /* block */)a3;
- (id)relatedAssetsWithOnlyAvailable:(BOOL)a0;
- (BOOL)isOlder:(id)a0;
- (BOOL)isNewer:(id)a0;
- (id)legacyAssetWithBundle:(id)a0;

@end
