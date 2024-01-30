@class NSXPCListener, NSMapTable, NSString, TKToken;

@interface TKTokenConnection : NSObject <NSXPCListenerDelegate>

@property (readonly, nonatomic) TKToken *token;
@property (readonly, nonatomic) NSXPCListener *listener;
@property (readonly, nonatomic) NSMapTable *sessions;
@property (retain, nonatomic) id initialKeepAlive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithToken:(id)a0;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;

@end
