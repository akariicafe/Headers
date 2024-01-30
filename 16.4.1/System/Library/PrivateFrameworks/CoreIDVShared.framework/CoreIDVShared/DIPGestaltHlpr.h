@interface DIPGestaltHlpr : NSObject <DIPGestaltHlprProtocol>

+ (id)getSharedInstance;

- (BOOL)isIPad;
- (id)copyAnswer:(struct __CFString { } *)a0;
- (BOOL)hasPKASupport;
- (BOOL)isFaceIDDevice;
- (long long)sikaVersion;

@end
