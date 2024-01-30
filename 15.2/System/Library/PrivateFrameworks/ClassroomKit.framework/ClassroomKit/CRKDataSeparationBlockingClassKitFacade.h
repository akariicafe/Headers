@class CRKClassKitCurrentUserProvider;

@interface CRKDataSeparationBlockingClassKitFacade : CRKClassKitFacadeDecoratorBase

@property (readonly, nonatomic) CRKClassKitCurrentUserProvider *currentUserProvider;
@property (nonatomic) long long modifiedAccountState;

+ (id)keyPathsForValuesAffectingAccountState;
+ (id)observedKeyPathsOnCurrentUserProvider;

- (void)stopObserving;
- (void)startObserving;
- (long long)accountState;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)updateAccountState;
- (id)initWithClassKitFacade:(id)a0;
- (long long)nextAccountState;

@end
