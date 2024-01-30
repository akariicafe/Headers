@class ATService, NSString, NSXPCListener;

@interface ATServiceProxyListener : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_listener;
}

@property (weak, nonatomic) ATService *service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)stop;
- (id)initWithService:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)start;

@end
