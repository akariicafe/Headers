@class ACAccount;
@protocol AMSBagProtocol;

@interface AMSSyncAccountFlagsTask : AMSTask

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) id<AMSBagProtocol> bag;

- (id)initWithAccount:(id)a0 bag:(id)a1;
- (void).cxx_destruct;
- (id)performSync;

@end
