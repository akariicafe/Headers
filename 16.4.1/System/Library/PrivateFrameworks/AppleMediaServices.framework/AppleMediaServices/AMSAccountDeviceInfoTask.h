@class ACAccount, NSString, AMSProcessInfo, AMSBagKeySet, ACAccountStore, AMSURLSession, AMSURLRequestEncoder;
@protocol AMSBagProtocol;

@interface AMSAccountDeviceInfoTask : AMSTask <AMSBagConsumer>

@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;
@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;

@property (retain, nonatomic) AMSURLSession *session;
@property (retain, nonatomic) AMSURLRequestEncoder *requestEncoder;
@property (retain, nonatomic) NSString *serialNumber;
@property (retain, nonatomic) ACAccountStore *accountStore;
@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)perform;
- (void).cxx_destruct;
- (id)_deviceInfoRequest;
- (id)_requestWithURL:(id)a0;
- (void)_updateAccountWithInfo:(id)a0;
- (id)initWithAccount:(id)a0 accountStore:(id)a1 bag:(id)a2;
- (id)initWithAccount:(id)a0 accountStore:(id)a1 bag:(id)a2 requestEncoder:(id)a3 session:(id)a4 serialNumber:(id)a5;

@end
