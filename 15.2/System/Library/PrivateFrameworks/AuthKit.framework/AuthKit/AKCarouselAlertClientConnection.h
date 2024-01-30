@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface AKCarouselAlertClientConnection : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;

+ (id)sharedConnection;

- (void)unsafe_invalidate;
- (void).cxx_destruct;
- (void)presentAlertWithDictionary:(id)a0 completion:(id /* block */)a1;
- (void)dismissAlert:(id)a0;
- (id)init;
- (id)connection;
- (void)dealloc;

@end
