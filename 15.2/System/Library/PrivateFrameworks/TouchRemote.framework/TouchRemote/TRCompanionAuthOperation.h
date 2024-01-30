@class NSSet, ACAccount;

@interface TRCompanionAuthOperation : TROperation

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSSet *targetedServices;
@property (nonatomic) BOOL shouldUseAIDA;

- (void)execute;
- (void).cxx_destruct;
- (void)_handleResponse:(id)a0;

@end
