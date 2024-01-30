@class NSString, NSUUID, NSDictionary, NSDate;

@interface UABestAppSuggestion : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *userActivityTypeIdentifier;
@property (copy) NSUUID *uniqueIdentifier;
@property (copy) NSString *activityType;
@property (readonly) unsigned long long type;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *dynamicIdentifier;
@property (readonly, copy) NSDate *lastUpdateTime;
@property (readonly, copy) NSDate *lastActiveTime;
@property (readonly, copy) NSDate *when;
@property (readonly, copy) NSDictionary *options;
@property (readonly) double confidence;
@property (readonly, copy) NSString *originatingDeviceIdentifier;
@property (readonly, copy) NSString *originatingDeviceName;
@property (readonly, copy) NSString *originatingDeviceType;
@property (readonly) BOOL isActive;

- (id)initWithBundleIdentifier:(id)a0 uuid:(id)a1 activityType:(id)a2 dynamicIdentifier:(id)a3 lastUpdateTime:(id)a4 lastActiveTime:(id)a5 type:(unsigned long long)a6 deviceName:(id)a7 deviceIdentifier:(id)a8 deviceType:(id)a9 options:(id)a10 isActive:(BOOL)a11;
- (void).cxx_destruct;
- (id)when;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)userActivityTypeIdentifier;
- (void)encodeWithCoder:(id)a0;

@end
