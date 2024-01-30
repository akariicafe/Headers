@class NSXPCListener, NSString, SYNotesActivationObserver, NSObject;
@protocol OS_dispatch_queue;

@interface SYNotesActivationService : NSObject <NSXPCListenerDelegate, SYNotesActivationServiceProtocol>

@property (retain, nonatomic, setter=_setListener:) NSXPCListener *_listener;
@property (retain, nonatomic, setter=_setServiceQueue:) NSObject<OS_dispatch_queue> *_serviceQueue;
@property (retain, nonatomic, setter=_setNotesActivationObserver:) SYNotesActivationObserver *_notesActivationObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)init;
- (void)beginListeningToConnections;
- (void).cxx_destruct;
- (oneway void)activateNotesWithContext:(id)a0 completion:(id /* block */)a1;

@end
