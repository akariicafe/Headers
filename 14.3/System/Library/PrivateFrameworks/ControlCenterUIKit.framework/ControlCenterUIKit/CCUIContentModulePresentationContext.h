@interface CCUIContentModulePresentationContext : NSObject <NSCopying>

@property (readonly, nonatomic) long long environment;

+ (id)defaultControlCenterPresentationContext;
+ (id)defaultAlertPresentationContext;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEnvironment:(long long)a0;
- (unsigned long long)hash;

@end
