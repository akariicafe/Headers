@class UIViewController, NSString, NSDictionary, AMSBagKeySet, ACAccount, AMSAgeVerificationTask;
@protocol AMSBagProtocol;

@interface AMSUIAgeVerificationTask : AMSTask <AMSBagConsumer, AMSRequestPresentationDelegate>

@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;
@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;

@property (retain, nonatomic) AMSAgeVerificationTask *task;
@property (retain, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) NSDictionary *options;
@property (retain, nonatomic) NSString *pincode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (void)handleAuthenticateRequest:(id)a0 completion:(id /* block */)a1;
- (void)handleDialogRequest:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)performTask;
- (id)isVerificationNeeded;
- (id)_performTaskForAccount:(id)a0 withBag:(id)a1 viewController:(id)a2;
- (id)initWithAccount:(id)a0 bag:(id)a1 options:(id)a2 viewController:(id)a3;

@end
