@class NSError, NSArray, AMSFinancePaymentSheetResponse, NSURL, AMSURLTaskInfo, NSDictionary, ACAccount, AMSFinanceDialogResponse, AMSFinanceAuthenticateResponse;

@interface AMSFinanceResponse : NSObject

@property (retain, nonatomic) AMSFinanceAuthenticateResponse *cachedAuthenticateResponse;
@property (retain, nonatomic) AMSFinanceDialogResponse *cachedDialogResponse;
@property (retain, nonatomic) AMSFinancePaymentSheetResponse *cachedPaymentSheetResponse;
@property (readonly, nonatomic) long long dialogKind;
@property (retain, nonatomic) NSDictionary *responseDictionary;
@property (retain, nonatomic) AMSURLTaskInfo *taskInfo;
@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) NSArray *actions;
@property (readonly, nonatomic) NSArray *pingURLs;
@property (readonly, nonatomic) NSError *serverError;
@property (readonly, nonatomic) BOOL supportedProtocolVersion;
@property (readonly, nonatomic) NSURL *versionMismatchURL;

+ (id)valueForProtocolKey:(id)a0 inResponse:(id)a1;

- (id)_performerForDialog;
- (id)_performerForCreditDisplay;
- (id)_performerForActionDictionary;
- (id)_performerForPaymentSheetWithDelegateAuthentication:(BOOL)a0;
- (void).cxx_destruct;
- (id)_performerForAuthenticate;
- (id)initWithTaskInfo:(id)a0 decodedObject:(id)a1;
- (id)_valueForProtocolKey:(id)a0;

@end
