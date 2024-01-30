@class NSMutableArray, CRKClassKitCurrentUserProvider;

@interface CRKDynamicDataObserverClassKitFacade : CRKClassKitFacadeDecoratorBase

@property (readonly, nonatomic) long long expectedUserRole;
@property (readonly, nonatomic) CRKClassKitCurrentUserProvider *currentUserProvider;
@property (nonatomic) BOOL dataObserversAreRegistered;
@property (readonly, nonatomic) NSMutableArray *dataObservers;

+ (id)dynamicDataObserverFacadeWithClassKitFacade:(id)a0 expectedUserRole:(long long)a1;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)deregisterDataObserver:(id)a0;
- (void)registerDataObserver:(id)a0;
- (void)addDataObserver:(id)a0;
- (void)deregisterDataObservers;
- (id)initWithClassKitFacade:(id)a0 expectedUserRole:(long long)a1;
- (void)registerDataObservers;
- (void)removeDataObserver:(id)a0;
- (void)startObservingCurrentUser;
- (void)stopObservingCurrentUser;
- (void)updateCurrentUserState;

@end
