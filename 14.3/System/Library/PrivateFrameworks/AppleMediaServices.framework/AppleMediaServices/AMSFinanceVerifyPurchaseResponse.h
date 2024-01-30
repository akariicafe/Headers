@class AMSURLTaskInfo, NSString, NSDictionary, AMSDialogRequest;

@interface AMSFinanceVerifyPurchaseResponse : NSObject <AMSFinancePerformable>

@property (retain, nonatomic) AMSDialogRequest *dialogRequest;
@property (retain, nonatomic) NSDictionary *responseDictionary;
@property (retain, nonatomic) AMSURLTaskInfo *taskInfo;
@property (nonatomic) long long verifyType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isVerifyPurchasePayload:(id)a0;
+ (long long)_verifyTypeFromPayload:(id)a0;
+ (id)_dialogRequestForCVVFromPayload:(id)a0 verifyType:(long long)a1;
+ (id)_dialogRequestForCarrierFromPayload:(id)a0 verifyType:(long long)a1;

- (void).cxx_destruct;
- (id)performWithTaskInfo:(id)a0;
- (id)initWithPayload:(id)a0 taskInfo:(id)a1;
- (id)_runCarrierNewCodeWithError:(id *)a0;
- (id)_handleCVVDialogResult:(id)a0 shouldReattempt:(BOOL *)a1;
- (id)_runCVVRequestForCode:(id)a0 error:(id *)a1;
- (id)_handleCarrierDialogResult:(id)a0 shouldReattempt:(BOOL *)a1;
- (id)_runCarrierVerifyCode:(id)a0 error:(id *)a1;

@end
