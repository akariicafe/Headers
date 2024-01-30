@class AMSURLTaskInfo, NSString, NSURL, ACAccount;

@interface AMSFinanceActionResponse : NSObject <AMSFinancePerformable>

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSString *creditString;
@property (nonatomic) long long kind;
@property (retain, nonatomic) AMSURLTaskInfo *taskInfo;
@property (retain, nonatomic) NSURL *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionWithActionDictionary:(id)a0 taskInfo:(id)a1;
+ (id)actionWithUpdatedCreditString:(id)a0 account:(id)a1 taskInfo:(id)a2;

- (void).cxx_destruct;
- (id)initWithTaskInfo:(id)a0;
- (id)_performCreditDisplayUpdate;
- (id)_performOpenAppURL;
- (id)_performGotoURL;
- (id)_performOpenStandardURL;
- (id)performWithTaskInfo:(id)a0;

@end
