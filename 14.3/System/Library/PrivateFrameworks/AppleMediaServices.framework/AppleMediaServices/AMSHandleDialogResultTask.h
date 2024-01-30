@class NSError, NSString, AMSDialogResult, ACAccount, AMSProcessInfo, AMSDialogRequest;
@protocol AMSBagProtocol;

@interface AMSHandleDialogResultTask : AMSTask

@property (copy, nonatomic) ACAccount *account;
@property (readonly, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (copy, nonatomic) NSString *proxyBundleId;
@property (readonly, nonatomic) AMSDialogRequest *request;
@property (readonly, nonatomic) AMSDialogResult *result;
@property (readonly, copy, nonatomic) NSError *error;

- (id)perform;
- (void).cxx_destruct;
- (id)_handleAskPermissionRequestWithURL:(id)a0 account:(id)a1;
- (id)initWithRequest:(id)a0 result:(id)a1 error:(id)a2 bag:(id)a3;
- (id)initWithResult:(id)a0 bag:(id)a1;

@end
