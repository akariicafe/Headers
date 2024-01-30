@class NSObject, NSString, NSMutableArray, BSServiceConnectionListener;
@protocol CHSChronoEventServiceListenerDelegate, OS_dispatch_queue;

@interface CHSChronoEventServiceListener : NSObject <BSServiceConnectionListenerDelegate, CHSChronoEventServiceServerInterface> {
    BSServiceConnectionListener *_connectionListener;
    NSMutableArray *_connections;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
}

@property (weak, nonatomic) id<CHSChronoEventServiceListenerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_removeConnection:(id)a0;
- (void)_addConnection:(id)a0;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (oneway void)handleOpenEventWithURL:(id)a0;
- (oneway void)handleOpenEventWithUserActivityData:(id)a0;
- (id)initWithServiceDomain:(id)a0 delegate:(id)a1;
- (BOOL)_isConnectingProcessAuthorized:(id)a0 error:(out id *)a1;
- (void).cxx_destruct;
- (void)activate;

@end
