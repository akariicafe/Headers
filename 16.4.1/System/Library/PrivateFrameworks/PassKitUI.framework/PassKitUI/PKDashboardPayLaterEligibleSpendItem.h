@class NSString, PKAccount;

@interface PKDashboardPayLaterEligibleSpendItem : NSObject <PKDashboardItem>

@property (readonly, nonatomic) PKAccount *payLaterAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void).cxx_destruct;
- (id)initWithPayLaterAccount:(id)a0;

@end
