@class NSString, NSDictionary, AMSUIPaymentVerificationMetrics, ACAccount, UIViewController;
@protocol AMSBagProtocol;

@interface AMSUICardOnFilePVTFetchTask : AMSTask

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSDictionary *accountParameters;
@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) AMSUIPaymentVerificationMetrics *metrics;
@property (retain, nonatomic) ACAccount *originalAccount;
@property (retain, nonatomic) UIViewController *viewController;

+ (id)_promiseToFetchURLResponseForAccount:(id)a0 accountParameters:(id)a1 url:(id)a2 bag:(id)a3;
+ (id)_accountToUseFromGivenAccount:(id)a0 accountParameters:(id)a1 activeiTunesAccount:(id)a2;
+ (id)_encoderWithBag:(id)a0 account:(id)a1;
+ (BOOL)_isCardOnFileOnStack:(id)a0;
+ (id)_sessionWithBag:(id)a0 account:(id)a1 accountParameters:(id)a2;
+ (id)_tokenFromObject:(id)a0;
+ (id)_tokenResultFromTokenString:(id)a0;

- (void).cxx_destruct;
- (id)performTask;
- (id)_promiseToFetchCardOnStackBooleanURL:(id)a0;
- (id)_promiseToFetchCardOnStackTokenURL:(id)a0;
- (id)_promiseToLoadBooleanURL;
- (id)_promiseToLoadPVTURL;
- (id)_promiseToPromptAfterCancel;
- (id)_promiseToPromptBeforeBiometricAuth;
- (id)initWithAccount:(id)a0 accountParameters:(id)a1 bag:(id)a2 displayName:(id)a3 metrics:(id)a4 viewController:(id)a5;

@end
