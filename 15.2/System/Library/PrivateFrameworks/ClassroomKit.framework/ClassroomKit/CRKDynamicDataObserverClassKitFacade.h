@class NSMutableArray, CRKClassKitCurrentUserProvider;

@interface CRKDynamicDataObserverClassKitFacade : CRKClassKitFacadeDecoratorBase

@property (readonly, nonatomic) long long expectedUserRole;
@property (readonly, nonatomic) CRKClassKitCurrentUserProvider *currentUserProvider;
@property (nonatomic) BOOL dataObserversAreRegistered;
@property (readonly, nonatomic) NSMutableArray *dataObservers;

+ (id)dynamicDataObserverFacadeWithClassKitFacade:(id)a0 expectedUserRole:(long long)a1;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)registerDataObserver:(id)a0;
- (void)deregisterDataObserver:(id)a0;
- (void)deregisterDataObservers;
- (void)registerDataObservers;
- (void)stopObservingCurrentUser;
- (void)startObservingCurrentUser;
- (id)initWithClassKitFacade:(id)a0 expectedUserRole:(long long)a1;
- (void)updateCurrentUserState;
- (void)addDataObserver:(id)a0;
- (void)removeDataObserver:(id)a0;

@end
