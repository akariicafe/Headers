@class NSString;

@interface ASDCellularIdentity : NSObject

@property (getter=isRoaming) BOOL roaming;
@property (readonly) NSString *defaultsKey;
@property (readonly) NSString *simIdentity;

+ (id)_digestMD5:(id)a0;
+ (id)identityForSubscription:(id)a0 usingClient:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)initWithSIMIdentity:(id)a0 roaming:(BOOL)a1;
- (id)description;

@end
