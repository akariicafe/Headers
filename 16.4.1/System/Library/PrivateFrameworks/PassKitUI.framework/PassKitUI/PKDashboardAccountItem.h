@class NSString, PKAccount;

@interface PKDashboardAccountItem : NSObject <PKDashboardItem>

@property (readonly, nonatomic) PKAccount *account;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (id)initWithAccount:(id)a0;
- (void).cxx_destruct;

@end
