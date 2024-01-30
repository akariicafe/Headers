@class AMSURLTaskInfo, NSString, NSDictionary, AMSDialogRequest;

@interface AMSFinanceDialogResponse : NSObject <AMSFinancePerformable>

@property (readonly, nonatomic) BOOL containsCommerceUIURL;
@property (readonly, copy, nonatomic) NSDictionary *dialogDictionary;
@property (nonatomic) long long kind;
@property (readonly, copy, nonatomic) NSDictionary *responseDictionary;
@property (copy, nonatomic) AMSURLTaskInfo *taskInfo;
@property (readonly, nonatomic) AMSDialogRequest *dialogRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldSendOverIDS:(id)a0 taskInfo:(id)a1;
+ (BOOL)_credentialSource:(unsigned long long)a0 satisfiesAuthenticationType:(unsigned long long)a1;
+ (id)_presentIDSDialog:(id)a0 taskInfo:(id)a1;
+ (long long)dialogKindForTaskInfo:(id)a0 withResponseDictionary:(id)a1;
+ (id)handleDialogResult:(id)a0 taskInfo:(id)a1;
+ (id)_serviceActionFromButton:(id)a0 taskInfo:(id)a1;
+ (id)_handleAskPermissionRequestWithURL:(id)a0 account:(id)a1;
+ (id)performFinanceDialog:(id)a0 taskInfo:(id)a1;
+ (id)_presentDialog:(id)a0 taskInfo:(id)a1;

- (void).cxx_destruct;
- (long long)_actionTypeFromButtonDictionary:(id)a0;
- (id)_createActionFromButtonDictionary:(id)a0 title:(id)a1;
- (id)_createDialogRequest;
- (id)_createRequestButtonsFromDialogDictionary:(id)a0;
- (id)_enrichedMetricsDictionaryWithFinanceDictionary:(id)a0;
- (BOOL)_isCommerceUIURL:(id)a0 actionType:(long long)a1 URLType:(long long)a2;
- (id)initWithResponseDictionary:(id)a0 kind:(long long)a1 taskInfo:(id)a2;
- (id)performWithTaskInfo:(id)a0;

@end
