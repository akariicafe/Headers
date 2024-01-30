@class NSString, INObject;

@interface FMIPLocateIntent : INIntent <FMIPIdentifiable>

@property (class, readonly, copy, nonatomic) NSString *identityTag;

@property (copy, nonatomic) INObject *deviceId;
@property (copy, nonatomic) INObject *deviceId;
@property (nonatomic) long long locateDeviceClass;

+ (long long)locateDeviceClassForDeviceType:(long long)a0;
+ (id)locateIntentWithDeviceId:(id)a0 deviceType:(long long)a1 deviceDisplayName:(id)a2;

- (id)rootAggregateKey;

@end
