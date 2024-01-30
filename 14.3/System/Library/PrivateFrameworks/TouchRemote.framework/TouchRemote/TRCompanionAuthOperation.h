@class NSSet, ACAccount;

@interface TRCompanionAuthOperation : TROperation

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSSet *targetedServices;

- (void).cxx_destruct;
- (void)execute;
- (void)_handleResponse:(id)a0;

@end
