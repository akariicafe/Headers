@class NSString, ACAccount;

@interface AMSUIWebFetchMetricsIdentifierAction : AMSUIWebAction

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSString *bagNamespace;
@property (retain, nonatomic) NSString *bagProfile;
@property (retain, nonatomic) NSString *bagProfileVersion;
@property (nonatomic) BOOL crossDeviceSync;
@property (nonatomic) BOOL generateEventFields;
@property (retain, nonatomic) NSString *identifierKey;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
