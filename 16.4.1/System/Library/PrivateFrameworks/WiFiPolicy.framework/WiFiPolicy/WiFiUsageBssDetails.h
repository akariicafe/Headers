@class NSString;

@interface WiFiUsageBssDetails : NSObject <NSCopying>

@property (copy, nonatomic) NSString *bssid;
@property (nonatomic) double locationLatitude;
@property (nonatomic) double locationLongitude;
@property (nonatomic) long long phyMode;
@property (nonatomic) long long apMode;
@property (nonatomic) int band;
@property (nonatomic) long long channel;
@property (nonatomic) long long channelWidth;
@property (nonatomic) unsigned long long channelFlags;
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

+ (id)bssWithIdentifier:(id)a0 apProfile:(id)a1 apMode:(long long)a2 phyMode:(long long)a3 channel:(long long)a4 channelFlags:(unsigned long long)a5 channelWidth:(long long)a6 rssi:(long long)a7 latitude:(double)a8 longitude:(double)a9 isEdgeBss:(BOOL)a10;
+ (int)bandFromFlags:(unsigned long long)a0;
+ (unsigned long long)channelWidthFromFlags:(unsigned long long)a0;
+ (id)bssWithIdentifier:(id)a0 channel:(long long)a1 channelFlags:(unsigned long long)a2 rssi:(long long)a3;
+ (int)bandFromChannel:(unsigned long long)a0;

- (id)eventDictionary:(BOOL)a0;
- (id)redactedDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
