@class NSString;

@interface WiFiUsageBssDetails : NSObject <NSCopying>

@property (copy, nonatomic) NSString *bssid;
@property (nonatomic) double locationLatitude;
@property (nonatomic) double locationLongitude;
@property (nonatomic) long long phyMode;
@property (nonatomic) long long apMode;
@property (nonatomic) long long channel;
@property (nonatomic) long long channelWidth;
@property (nonatomic) long long rssi;
@property (nonatomic) BOOL isEdgeBss;
@property (copy, nonatomic) NSString *apProfile;
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

+ (id)bssWithIdentifier:(id)a0 apProfile:(id)a1 apMode:(long long)a2 phyMode:(long long)a3 channel:(long long)a4 channelWidth:(long long)a5 rssi:(long long)a6 latitude:(double)a7 longitude:(double)a8 isEdgeBss:(BOOL)a9;
+ (id)bssWithIdentifier:(id)a0 channel:(long long)a1 rssi:(long long)a2;

- (id)eventDictionary:(BOOL)a0 isInternalInstall:(BOOL)a1;
- (long long)channelBand;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
