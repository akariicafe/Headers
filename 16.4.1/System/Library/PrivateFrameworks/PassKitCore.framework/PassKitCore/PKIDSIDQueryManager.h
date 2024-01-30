@class NSObject;
@protocol OS_dispatch_queue;

@interface PKIDSIDQueryManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)checkDeviceSupportForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 capability:(id)a3 completion:(id /* block */)a4;
- (void)checkIDSStatusForDestination:(id)a0 service:(id)a1 listenerID:(id)a2 completion:(id /* block */)a3;
- (void)reachableDestinationsForDestination:(id)a0 service:(id)a1 completion:(id /* block */)a2;

@end
