@class NSXPCListener, NSString, CARSessionRequestHandlerProxy;
@protocol CARSessionRequestHandling;

@interface CARSessionRequestAgent : NSObject <NSXPCListenerDelegate>

@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) CARSessionRequestHandlerProxy *handlerProxy;
@property (readonly, weak, nonatomic) id<CARSessionRequestHandling> requestHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithRequestHandler:(id)a0;
- (BOOL)wantsCarPlayControlAdvertisingForUSB;
- (BOOL)wantsCarPlayControlAdvertisingForWiFiUUID:(id)a0;

@end
