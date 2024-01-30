@class NSString, NEProvider, NSXPCConnection, NEConfiguration, NSObject;
@protocol OS_os_transaction, NEExtensionProviderHostProtocol;

@interface NEExtensionProviderContext : NSExtensionContext <NEExtensionProviderProtocol, NEExtensionProviderHostProtocol> {
    id<NEExtensionProviderHostProtocol> _hostContext;
    NSString *_description;
}

@property (copy) id /* block */ stopCompletionHandler;
@property (readonly) NSXPCConnection *hostConnection;
@property (nonatomic) BOOL isDisposed;
@property (readonly, nonatomic) NEProvider *provider;
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (retain) NEConfiguration *configuration;
@property (readonly, nonatomic) NSString *extensionPoint;
@property (nonatomic) BOOL started;
@property (readonly, nonatomic) Class requiredProviderSuperClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void)dispose;
- (void)wake;
- (id)initWithConnection:(id)a0;
- (void)createWithCompletionHandler:(id /* block */)a0;
- (void)setConfiguration:(id)a0 extensionIdentifier:(id)a1;
- (void)stopWithReason:(int)a0;
- (void)validateWithCompletionHandler:(id /* block */)a0;
- (void)startedWithError:(id)a0;
- (void)displayMessage:(id)a0 message:(id)a1 completionHandler:(id /* block */)a2;
- (long long)neStopReasonToProviderStopReason:(int)a0;
- (id)_principalObject;
- (void)completeSession;
- (id)initWithProvider:(id)a0;
- (void)startWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)cancelWithError:(id)a0;
- (void)dropProvider;
- (void)sleepWithCompletionHandler:(id /* block */)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)hostContext;
- (void)dealloc;
- (void)setDescription:(id)a0;

@end
