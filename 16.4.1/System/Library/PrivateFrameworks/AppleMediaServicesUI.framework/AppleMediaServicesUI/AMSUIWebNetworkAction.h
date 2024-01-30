@class NSString, NSDictionary, NSURL, ACAccount;

@interface AMSUIWebNetworkAction : AMSUIWebAction

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSString *body;
@property (retain, nonatomic) NSString *gsTokenIdentifier;
@property (retain, nonatomic) NSDictionary *headers;
@property (nonatomic) BOOL includeAuthKitTokens;
@property (nonatomic) BOOL includeiCloudTokens;
@property (retain, nonatomic) NSString *method;
@property (nonatomic) BOOL requiresCellularAccess;
@property (retain, nonatomic) NSString *signatureData;
@property (retain, nonatomic) NSURL *URL;
@property (nonatomic) BOOL usePrimaryKeychain;

- (void).cxx_destruct;
- (id)_createSession;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
