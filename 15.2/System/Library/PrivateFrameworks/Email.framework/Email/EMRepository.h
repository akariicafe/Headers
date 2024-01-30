@class EFFuture, Protocol;
@protocol EFScheduler;

@interface EMRepository : NSObject

@property (readonly) Protocol *interfaceProtocol;
@property (readonly) EFFuture *interfaceFuture;
@property (retain, nonatomic) id<EFScheduler> observerScheduler;

- (id)initInternal;
- (void).cxx_destruct;
- (void)refreshQueryWithObserver:(id)a0;
- (id)performQuery:(id)a0 withObserver:(id)a1;
- (id)trampoliningObserverForObserver:(id)a0;
- (void)prepareRepositoryObjects:(id)a0;

@end
