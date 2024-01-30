@class MOEffectiveBool, MOEffectiveString;

@interface MOEffectiveUserSettings : NSObject

@property (readonly) MOEffectiveBool *denySharing;
@property (readonly) MOEffectiveBool *denyUnrestrictedSharing;
@property (readonly) MOEffectiveString *sharingPolicy;

@end
