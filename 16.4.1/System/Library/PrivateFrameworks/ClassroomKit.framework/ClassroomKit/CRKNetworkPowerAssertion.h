@class NSString;

@interface CRKNetworkPowerAssertion : NSObject {
    unsigned int mPowerAssertion;
}

@property (nonatomic) unsigned long long count;
@property (readonly, copy, nonatomic) NSString *name;

+ (id)sharedInstance;
+ (void)decrement;
+ (void)increment;

- (void)decrement;
- (id)init;
- (void)increment;
- (void).cxx_destruct;

@end
