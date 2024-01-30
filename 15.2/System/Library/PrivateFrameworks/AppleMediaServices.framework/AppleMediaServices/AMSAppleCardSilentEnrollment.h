@class AMSBagKeySet, NSString;

@interface AMSAppleCardSilentEnrollment : NSObject <AMSBagConsumer>

@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;
@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;
+ (void)addRequiredBagKeysToAggregator:(id)a0;
+ (id)headersForAccount:(id)a0;
+ (id)gsTokenForAccount:(id)a0 error:(id *)a1;


@end
