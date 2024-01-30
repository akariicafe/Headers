@class NSString, NSXPCConnection, NSXPCInterface, NSDictionary, NSObject;
@protocol OS_dispatch_queue, TUCallProviderManagerDataSourceDelegate, TUCallProviderManagerXPCServer;

@interface TUCallProviderManagerXPCClient : NSObject <TUCallProviderManagerXPCClient, TUCallProviderManagerDataSource>

@property (class, retain, nonatomic) id<TUCallProviderManagerXPCServer> asynchronousServer;
@property (class, retain, nonatomic) id<TUCallProviderManagerXPCServer> synchronousServer;
@property (class, readonly, nonatomic) NSXPCInterface *callProviderManagerClientXPCInterface;
@property (class, readonly, nonatomic) NSXPCInterface *callProviderManagerServerXPCInterface;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic) int token;
@property (nonatomic) BOOL requestedInitialState;
@property (copy, nonatomic) NSDictionary *providersByIdentifier;
@property (copy, nonatomic) NSDictionary *localProvidersByIdentifier;
@property (copy, nonatomic) NSDictionary *pairedHostDeviceProvidersByIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL currentProcessCanAccessInitialState;
@property (weak, nonatomic) id<TUCallProviderManagerDataSourceDelegate> delegate;

+ (id)callProviderManagerAllowedClasses;

- (id)synchronousServerWithErrorHandler:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_updateProvidersByIdentifier:(id)a0 localProvidersByIdentifier:(id)a1 pairedHostDeviceProvidersByIdentifier:(id)a2;
- (void)dealloc;
- (id)server;
- (void)launchAppForDialRequest:(id)a0 completion:(id /* block */)a1;
- (void)_requestInitialState;
- (id)serverWithErrorHandler:(id /* block */)a0;
- (void)donateUserIntentForProviderWithIdentifier:(id)a0;
- (void)blockUntilInitialStateReceived;
- (oneway void)updateProvidersByIdentifier:(id)a0 localProvidersByIdentifier:(id)a1 pairedHostDeviceProvidersByIdentifier:(id)a2;
- (BOOL)openURL:(id)a0 isSensitive:(BOOL)a1 error:(id *)a2;
- (void)invalidate;

@end
