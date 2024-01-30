@class NSString, INObject;

@interface FMIPPlaySoundIntent : INIntent <FMIPIdentifiable>

@property (class, readonly, copy, nonatomic) NSString *identityTag;

@property (copy, nonatomic) INObject *deviceId;
@property (copy, nonatomic) INObject *deviceId;
@property (nonatomic) long long playSoundDeviceClass;

+ (long long)playSoundDeviceClassForDeviceType:(long long)a0;
+ (id)playSoundIntentWithDeviceId:(id)a0 deviceType:(long long)a1 deviceDisplayName:(id)a2;

- (id)rootAggregateKey;

@end
