@class Protocol, NSXPCInterface, EMRemoteConnection, EFFuture;
@protocol EFScheduler;

@interface EMRepository : NSObject

@property (class, readonly) NSXPCInterface *remoteInterface;

@property (readonly) EMRemoteConnection *connection;
@property (readonly) Protocol *interfaceProtocol;
@property (readonly) EFFuture *interfaceFuture;
@property (retain, nonatomic) id<EFScheduler> observerScheduler;

- (id)initForTesting;
- (id)initWithRemoteConnection:(id)a0;
- (void).cxx_destruct;
- (id)performQuery:(id)a0 withObserver:(id)a1;
- (void)prepareRepositoryObjects:(id)a0;
- (void)refreshQueryWithObserver:(id)a0;
- (id)trampoliningObserverForObserver:(id)a0;

@end
