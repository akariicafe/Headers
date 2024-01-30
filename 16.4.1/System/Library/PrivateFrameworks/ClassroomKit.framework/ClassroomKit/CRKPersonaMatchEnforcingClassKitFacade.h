@class CRKClassKitCurrentUserProvider;

@interface CRKPersonaMatchEnforcingClassKitFacade : CRKClassKitFacadeDecoratorBase

@property (readonly, nonatomic) CRKClassKitCurrentUserProvider *currentUserProvider;
@property (nonatomic) long long modifiedAccountState;

+ (id)keyPathsForValuesAffectingAccountState;

- (void)stopObserving;
- (void)startObserving;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (long long)accountState;
- (void).cxx_destruct;
- (id)initWithClassKitFacade:(id)a0;
- (BOOL)isPersonaEligible;
- (long long)nextAccountState;
- (void)updateAccountState;

@end
