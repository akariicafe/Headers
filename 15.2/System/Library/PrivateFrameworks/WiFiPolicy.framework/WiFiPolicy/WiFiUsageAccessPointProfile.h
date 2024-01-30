@class NSString;

@interface WiFiUsageAccessPointProfile : NSObject

@property (retain, nonatomic) NSString *bssid;
@property (retain, nonatomic) NSString *apProfile;

+ (void)initialize;
+ (id)_toMobileAssetsProfile:(id)a0;
+ (id)profileFromBeaconData:(id)a0 andParsedIE:(id)a1;
+ (void)_submitProfileFor:(id)a0 AndEraseWithLog:(id)a1;
+ (void)updateWithWPS:(id)a0;
+ (void)_applyMask:(id)a0 FromStart:(unsigned long long)a1 WithLen:(unsigned long long)a2 WithMask:(id)a3 AppendTo:(id)a4;
+ (BOOL)_isProfileValidForStorage:(id)a0;
+ (void)updateConfig;
+ (BOOL)_isProfileValidForUse:(id)a0;
+ (void)_saveToUserDefaults:(id)a0 withKey:(id)a1 andValue:(id)a2;
+ (id)_getBinTimeInterval:(double)a0 As:(unsigned long long)a1;
+ (void)_cleanUpStaleProfiles;
+ (void)_extractFieldsFor:(id)a0 From:(id)a1 Into:(id)a2;
+ (id)_getDefaults;
+ (id)_config;
+ (id)prefixForCA;
+ (BOOL)_compareBytes:(id)a0 FromStart:(unsigned long long)a1 WithLen:(unsigned long long)a2 With:(id)a3;
+ (void)_defaults;
+ (id)beacons;
+ (id)_cachedProfile:(id)a0;
+ (id)_loadFromUserDefaults:(id)a0 withKey:(id)a1;
+ (void)_endPrevAssoc;
+ (void)updateWithAssocTime:(double)a0 forBssid:(id)a1;
+ (id)profileForBSSID:(id)a0;

- (void).cxx_destruct;

@end
