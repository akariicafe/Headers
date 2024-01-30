@class EFFuture, Protocol;
@protocol EFScheduler;

@interface EMRepository : NSObject

@property (retain, nonatomic) id<EFScheduler> observerScheduler;
@property (readonly) Protocol *interfaceProtocol;
@property (readonly) EFFuture *interfaceFuture;

- (id)initInternal;
- (id)performQuery:(id)a0 withObserver:(id)a1;
- (void).cxx_destruct;
- (id)trampoliningObserverForObserver:(id)a0;
- (void)prepareRepositoryObjects:(id)a0;

@end
