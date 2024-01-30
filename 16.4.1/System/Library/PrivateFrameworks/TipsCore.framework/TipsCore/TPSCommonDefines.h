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
@property (readonly, nonatomic, getter=isMacUI) BOOL macUI;
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
+ (id)clientBundleIdentifier;
+ (int)maxRequestVersion;
+ (id)osBuild;
+ (BOOL)isInternalDevice;
+ (id)notificationBundleIdentifier;
+ (id)productVersion;
+ (BOOL)isInternalBuild;
+ (id)deviceName;
+ (id)deviceClass;
+ (BOOL)isSeniorUser;
+ (id)appGroupIdentifier;
+ (BOOL)hardwareChanged;
+ (id)tipsCoreFrameworkBundle;
+ (BOOL)callerIsTipsdWithSource:(id)a0;
+ (BOOL)isGreenTeaDevice;
+ (id)_tipStatusArchivalURL;
+ (id)deviceFamily;

- (long long)userType;
- (id)archivedTipStatuses;
- (void)clearDataCache;
- (void)setLastMajorVersionUpdateDate:(id)a0;
- (long long)daysSinceLastMajorVersionUpdate;
- (void)setUserLanguage:(id)a0;
- (id)collectionIdentifierToUseForCollectionIdentifiers:(id)a0;
- (void)updateCollectionStatus:(unsigned long long)a0 collections:(id)a1;
- (BOOL)hasLocaleChanged;
- (id)appBundleIDForInstalledAppWithIdentifier:(id)a0;
- (void)viewedCollection:(id)a0;
- (void)notifiedCollection:(id)a0;
- (id)lastMajorVersionUpdateDate;
- (id)collectionStatusForCollectionIdentifier:(id)a0;
- (void)activatedCollection:(id)a0;
- (void)resetCollectionStatusMap;
- (void)deleteTipStatusArchivalDirectory;
- (id)init;
- (void)activatedCollections:(id)a0;
- (void)syncCollectionStatusMap;
- (id)userLanguage;
- (void)featuredCollection:(id)a0;
- (id)dateForCollectionIdentifier:(id)a0 dateType:(unsigned long long)a1;
- (id)activateDateForCollectionIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)reloadModelInformation;
- (id)reloadAppGroupDefaults;

@end
