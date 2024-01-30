@class NSString, NSArray, AMSBagKeySet, ACAccount, AMSAutomaticDownloadKindsSetTask, UIViewController;
@protocol AMSBagProtocol;

@interface AMSUIAutomaticDownloadKindsSetTask : AMSTask <AMSBagConsumer, AMSRequestPresentationDelegate>

@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;
@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;

@property (retain, nonatomic) AMSAutomaticDownloadKindsSetTask *task;
@property (retain, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) id<AMSBagProtocol> bag;
@property (readonly, nonatomic) NSArray *enabledMediaKinds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (id)perform;
- (void).cxx_destruct;
- (void)handleAuthenticateRequest:(id)a0 completion:(id /* block */)a1;
- (void)handleDialogRequest:(id)a0 completion:(id /* block */)a1;
- (id)initWithEnabledMediaKinds:(id)a0 account:(id)a1 bag:(id)a2 viewController:(id)a3;

@end
