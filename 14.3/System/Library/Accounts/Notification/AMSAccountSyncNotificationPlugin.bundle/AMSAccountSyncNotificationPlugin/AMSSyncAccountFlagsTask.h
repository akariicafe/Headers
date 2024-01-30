@class ACAccount;
@protocol AMSBagProtocol;

@interface AMSSyncAccountFlagsTask : AMSTask

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) id<AMSBagProtocol> bag;

- (void).cxx_destruct;
- (id)performSync;
- (id)initWithAccount:(id)a0 bag:(id)a1;

@end
