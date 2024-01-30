@class NSString, ACAccount;

@interface AMSAccountsChangedResult : NSObject <AMSHashable>

@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) NSString *hashedDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;

@end
