@class NSMutableArray, NSString, NSMutableDictionary, TPSTipStatusController, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface TPSCommonDefines : NSObject <IDSServiceDelegate> {
    NSMutableArray *_cloudDevices;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) NSMutableDictionary *collectionStatusMap;
@property (readonly, nonatomic) BOOL tipsAccessAllowed;
@property (nonatomic) BOOL supportsUIApplication;
@property (readonly, nonatomic, getter=isPhoneUI) BOOL phoneUI;
@property (readonly, nonatomic, getter=isPadUI) BOOL padUI;
@property (nonatomic) int maxVersion;
@property (retain, nonatomic) NSString *majorVersion;
@property (retain, nonatomic) NSString *model;
@property (readonly, nonatomic) NSUserDefaults *appGroupDefaults;
@property (retain, nonatomic) NSMutableDictionary *appBundleIDMap;
@property (readonly, nonatomic) long long assetRatioType;
@property (retain, nonatomic) TPSTipStatusController *tipStatusController;
@property (copy, nonatomic) NSString *language;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)osBuild;
+ (id)sharedInstance;
+ (id)appGroupIdentifier;
+ (BOOL)hardwareChanged;
+ (BOOL)isInternalDevice;

- (id)init;
- (void)reloadModelInformation;
- (BOOL)hasLocaleChanged;
- (void)clearDataCache;
- (id)collectionStatusForCollectionIdentifier:(id)a0;
- (void)syncCollectionStatusMap;
- (void)updateCollectionStatus:(unsigned long long)a0 collections:(id)a1;
- (id)dateForCollectionIdentifier:(id)a0 dateType:(unsigned long long)a1;
- (BOOL)appValidWithIdentifier:(id)a0;
- (id)reloadAppGroupDefaults;
- (void)notifiedCollection:(id)a0;
- (void)featuredCollection:(id)a0;
- (id)collectionIdentifierToUseForCollectionIdentifiers:(id)a0;
- (void)viewedCollection:(id)a0;
- (void)activatedCollection:(id)a0;
- (void)activatedCollections:(id)a0;
- (void)resetCollectionStatusMap;
- (id)activateDateForCollectionIdentifier:(id)a0;
- (id)appBundleIDForInstalledAppWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (long long)userType;

@end
