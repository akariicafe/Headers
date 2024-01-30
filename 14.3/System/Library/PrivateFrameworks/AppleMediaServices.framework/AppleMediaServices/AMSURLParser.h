@class AMSBagKeySet, NSString;
@protocol AMSBagProtocol;

@interface AMSURLParser : NSObject <AMSBagConsumer_Project, AMSBagConsumer>

@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;
@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;

@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addRequiredBagKeysToAggregator:(id)a0;
+ (id)createBagForSubProfile;

- (id)bagContract;
- (id)initWithBagContract:(id)a0;
- (void).cxx_destruct;
- (id)isCommerceUIURL:(id)a0;
- (id)_commerceUIArrayForKey:(id)a0;
- (BOOL)_matchURL:(id)a0 toPatterns:(id)a1;
- (id)_defaultWebAllowedForURL:(id)a0;
- (id)_dynamicUIAllowedForURL:(id)a0;
- (id)_legacyWebAllowedForURL:(id)a0;
- (void)_waitForPromises:(id)a0 block:(id /* block */)a1;
- (id)typeForCommerceUIURL:(id)a0;
- (id)initWithBag:(id)a0;
- (id)typeForURL:(id)a0;

@end
