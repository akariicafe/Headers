@class NSString;

@interface CRKNetworkPowerAssertion : NSObject {
    unsigned int mPowerAssertion;
}

@property (nonatomic) unsigned long long count;
@property (readonly, copy, nonatomic) NSString *name;

+ (id)sharedInstance;
+ (void)decrement;
+ (void)increment;

- (id)init;
- (void).cxx_destruct;
- (void)decrement;
- (void)increment;

@end
