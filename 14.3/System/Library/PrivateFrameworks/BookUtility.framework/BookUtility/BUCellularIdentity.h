@class NSString;

@interface BUCellularIdentity : NSObject

@property (nonatomic, getter=isRoaming) BOOL roaming;
@property (readonly, nonatomic) NSString *defaultsKey;
@property (readonly, nonatomic) NSString *simIdentity;

+ (id)_digestMD5:(id)a0;
+ (id)identityForSubscription:(id)a0 usingClient:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)initWithSIMIdentity:(id)a0 roaming:(BOOL)a1;
- (id)description;

@end
