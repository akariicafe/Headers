@class NSString, NEExtensionProviderContext, NWPathEvaluator, NWPath;

@interface NEProvider : NSObject <NSExtensionRequestHandling>

@property (retain) NWPathEvaluator *defaultPathEvaluator;
@property (retain) NWPath *defaultPath;
@property (retain) NEExtensionProviderContext *context;
@property (retain) NSString *appName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isRunningInProvider;
+ (BOOL)isNEProviderBundle:(id)a0 forExtensionPoint:(id)a1;
+ (void)startSystemExtensionMode;

- (void)wake;
- (void).cxx_destruct;
- (id)init;
- (void)setdefaultPathObserver:(id)a0;
- (void)observerHelperHandler:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)sleepWithCompletionHandler:(id /* block */)a0;
- (id)initAllowUnentitled:(BOOL)a0;
- (void)beginRequestWithExtensionContext:(id)a0;
- (id)createTCPConnectionToEndpoint:(id)a0 enableTFO:(BOOL)a1 initialData:(id)a2 enableMultipath:(BOOL)a3 enableTLS:(BOOL)a4 TLSParameters:(id)a5 delegate:(id)a6 URL:(id)a7;
- (id)createTCPConnectionToEndpoint:(id)a0 enableTLS:(BOOL)a1 TLSParameters:(id)a2 delegate:(id)a3;
- (id)createTCPConnectionToEndpoint:(id)a0 enableTFO:(BOOL)a1 initialData:(id)a2 enableMultipath:(BOOL)a3 enableTLS:(BOOL)a4 TLSParameters:(id)a5 delegate:(id)a6;
- (id)createUDPSessionToEndpoint:(id)a0 fromEndpoint:(id)a1;
- (void)displayMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;

@end
