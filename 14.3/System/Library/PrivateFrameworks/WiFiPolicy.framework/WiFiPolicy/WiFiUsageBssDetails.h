@class NSString;

@interface WiFiUsageBssDetails : NSObject <NSCopying>

@property (copy, nonatomic) NSString *bssid;
@property (nonatomic) long long apProfile;
@property (nonatomic) double locationLatitude;
@property (nonatomic) double locationLongitude;
@property (nonatomic) long long phyMode;
@property (nonatomic) long long apMode;
@property (nonatomic) long long channel;
@property (nonatomic) long long channelWidth;
@property (nonatomic) long long rssi;
@property (nonatomic) BOOL isEdgeBss;
@property (nonatomic) BOOL hasAppleIE;
@property (nonatomic) BOOL hasInterworkingIE;
@property (nonatomic) BOOL hasWpsIE;
@property (nonatomic) BOOL hasDomainName;
@property (nonatomic) BOOL hasNaiRealms;
@property (nonatomic) BOOL hasRoamingOis;
@property (nonatomic) unsigned long long networkAccessCode;
@property (nonatomic) unsigned long long venueGroup;
@property (nonatomic) unsigned long long venueCode;
@property (copy, nonatomic) NSString *manufacturerName;
@property (copy, nonatomic) NSString *modelName;
@property (copy, nonatomic) NSString *modelNumber;
@property (copy, nonatomic) NSString *deviceVersion;

+ (id)bssWithIdentifier:(id)a0 apProfile:(long long)a1 apMode:(long long)a2 phyMode:(long long)a3 channel:(long long)a4 channelWidth:(long long)a5 latitude:(double)a6 longitude:(double)a7 isEdgeBss:(BOOL)a8;
+ (id)bssWithIdentifier:(id)a0 channel:(long long)a1 rssi:(long long)a2;

- (unsigned long long)oui;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)eventDictionary:(BOOL)a0 isInternalInstall:(BOOL)a1;
- (long long)channelBand;

@end
