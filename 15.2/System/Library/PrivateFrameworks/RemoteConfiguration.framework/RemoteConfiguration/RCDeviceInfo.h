@class NSArray, NSString;

@interface RCDeviceInfo : NSObject <RCSerializable>

@property (readonly, copy, nonatomic) NSArray *preferredLanguages;
@property (readonly, copy, nonatomic) NSString *deviceType;
@property (readonly, nonatomic) long long utcOffset;
@property (readonly, nonatomic) long long dstOffset;
@property (readonly, copy, nonatomic) NSString *appVersion;
@property (readonly, copy, nonatomic) NSString *osVersion;
@property (readonly, copy, nonatomic) NSString *countryCode;
@property (readonly, copy, nonatomic) NSString *formatVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultDeviceInfo;
+ (id)defaultDeviceInfoWithAppVersion:(id)a0;
+ (id)defaultDeviceInfoWithAppVersion:(id)a0 formatVersion:(id)a1;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPreferredLanguages:(id)a0 deviceType:(id)a1 utcOffset:(long long)a2 dstOffset:(long long)a3 appVersion:(id)a4 osVersion:(id)a5 countryCode:(id)a6 formatVersion:(id)a7;
- (id)initWithPreferredLanguages:(id)a0 deviceType:(id)a1 utcOffset:(long long)a2 dstOffset:(long long)a3 appVersion:(id)a4 osVersion:(id)a5;
- (id)dictionaryRepresentation;
- (id)initWithPreferredLanguages:(id)a0 deviceType:(id)a1 utcOffset:(long long)a2 dstOffset:(long long)a3 appVersion:(id)a4 osVersion:(id)a5 countryCode:(id)a6;

@end
