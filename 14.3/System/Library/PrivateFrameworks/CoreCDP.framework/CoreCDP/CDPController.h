@class CDPStateUIProviderProxy, CDPDaemonConnection, CDPContext;
@protocol CDPAuthProvider, CDPStateUIProvider;

@interface CDPController : NSObject

@property (retain, nonatomic) CDPDaemonConnection *daemonConn;
@property (retain, nonatomic) CDPStateUIProviderProxy *uiProviderProxy;
@property (readonly, nonatomic) CDPContext *context;
@property (retain, nonatomic) id<CDPStateUIProvider> uiProvider;
@property (retain, nonatomic) id<CDPAuthProvider> authProvider;

- (id)initWithContext:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithXpcEndpoint:(id)a0 context:(id)a1;
- (void)invalidate;

@end
