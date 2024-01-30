@class MOEffectiveBool, MOEffectiveArray, MOEffectiveOptionalApplication;

@interface MOEffectiveAllowedClientSettings : NSObject

@property (readonly) MOEffectiveOptionalApplication *allowedClient;
@property (readonly) MOEffectiveBool *denyMDMEnrollment;
@property (readonly) MOEffectiveArray *tokenKeys;

@end
