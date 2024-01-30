@class MOEffectiveBool, MOEffectiveString;

@interface MOEffectiveSafariSettings : NSObject

@property (readonly) MOEffectiveString *cookiePolicy;
@property (readonly) MOEffectiveBool *denyAutoFill;

@end
