@class AMSBagKeySet, NSString, ACAccount;
@protocol AMSBagProtocol;

@interface AMSAutomaticDownloadKindsFetchTask : AMSTask <AMSBagConsumer>

@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;
@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;

@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) id<AMSBagProtocol> bag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;
+ (void)addRequiredBagKeysToAggregator:(id)a0;

- (id)initWithAccount:(id)a0 bag:(id)a1;
- (void).cxx_destruct;
- (id)perform;

@end
