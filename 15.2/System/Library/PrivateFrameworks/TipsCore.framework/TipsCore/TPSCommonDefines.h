@class TPSTipStatusController, NSString, NSMutableDictionary, NSMutableArray, NSDate, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface TPSCommonDefines : NSObject {
    NSMutableArray *_cloudDevices;
    NSString *_userLanguage;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) NSMutableDictionary *collectionStatusMap;
@property (nonatomic) int maxVersion;
@property (nonatomic) BOOL supportsUIApplication;
@property (readonly, nonatomic) BOOL tipsAccessAllowed;
@property (readonly, nonatomic, getter=isPhoneUI) BOOL phoneUI;
@property (readonly, nonatomic, getter=isPadUI) BOOL padUI;
@property (readonly, nonatomic) long long daysSinceLastMajorVersionUpdate;
@property (retain, nonatomic) NSString *majorVersion;
@property (retain, nonatomic) NSDate *lastMajorVersionUpdateDate;
@property (retain, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *userLanguage;
@property (readonly, nonatomic) NSUserDefaults *appGroupDefaults;
@property (retain, nonatomic) NSMutableDictionary *appBundleIDMap;
@property (readonly, nonatomic) long long assetRatioType;
@property (retain, nonatomic) TPSTipStatusController *tipStatusController;

+ (id)sharedInstance;
+ (id)deviceFamily;
+ (id)osBuild;
+ (BOOL)isInternalDevice;
+ (id)appGroupIdentifier;
+ (id)clientBundleIdentifier;
+ (BOOL)isInternalBuild;
+ (id)notificationBundleIdentifier;
+ (BOOL)hardwareChanged;
+ (BOOL)callerIsTipsdWithSource:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (long long)userType;
- (id)lastMajorVersionUpdateDate;
- (long long)daysSinceLastMajorVersionUpdate;
- (id)appBundleIDForInstalledAppWithIdentifier:(id)a0;
- (id)reloadAppGroupDefaults;
- (void)activatedCollections:(id)a0;
- (id)collectionStatusForCollectionIdentifier:(id)a0;
- (void)syncCollectionStatusMap;
- (void)viewedCollection:(id)a0;
- (void)reloadModelInformation;
- (BOOL)hasLocaleChanged;
- (void)clearDataCache;
- (void)updateCollectionStatus:(unsigned long long)a0 collections:(id)a1;
- (id)dateForCollectionIdentifier:(id)a0 dateType:(unsigned long long)a1;
- (id)userLanguage;
- (void)setUserLanguage:(id)a0;
- (id)collectionIdentifierToUseForCollectionIdentifiers:(id)a0;
- (void)notifiedCollection:(id)a0;
- (void)featuredCollection:(id)a0;
- (void)activatedCollection:(id)a0;
- (void)resetCollectionStatusMap;
- (id)activateDateForCollectionIdentifier:(id)a0;
- (void)setLastMajorVersionUpdateDate:(id)a0;

@end
