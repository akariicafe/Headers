@class MOEffectiveData, MOEffectiveArray;

@interface MOEffectiveManagedSettingsSettings : NSObject

@property (readonly) MOEffectiveArray *allowedClients;
@property (readonly) MOEffectiveData *tokenEncodingKey;
@property (readonly) MOEffectiveArray *tokenDecodingKeys;

@end
