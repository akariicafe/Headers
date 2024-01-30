@interface DIPGestaltHlpr : NSObject

+ (id)getSharedInstance;

- (long long)sikaVersion;
- (id)copyAnswer:(struct __CFString { } *)a0;
- (BOOL)hasPKASupport;

@end
