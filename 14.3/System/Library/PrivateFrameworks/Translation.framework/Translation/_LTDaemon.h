@class NSXPCListener, NSString, _LTTranslationServer, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface _LTDaemon : NSObject <NSXPCListenerDelegate, _LTClientConnectionDelegate> {
    NSXPCListener *_translationListener;
    NSObject<OS_dispatch_queue> *_listenerQueue;
    NSMutableArray *_connections;
    _LTTranslationServer *_server;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)run;
- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_setupMemoryWarningListener;
- (void)clientConnectionClosed:(id)a0;

@end
