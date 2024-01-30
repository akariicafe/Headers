@class QLGracePeriodTimer, NSMutableArray, NSExtensionContext, NSXPCConnection, NSMutableSet, NSExtension, NSObject;
@protocol OS_dispatch_queue;

@interface QLExtension : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionHandlersQueue;
@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) NSExtensionContext *context;
@property (retain, nonatomic) id requestIdentifier;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSMutableSet *observers;
@property (retain, nonatomic) QLGracePeriodTimer *gracePeriodTimer;
@property (retain, nonatomic) NSMutableArray *extensionRequestHandlers;
@property (nonatomic) BOOL isRequestingExtension;
@property long long extensionScore;
@property unsigned long long externalResourcesPermission;

- (id)initWithExtension:(id)a0;
- (void)unregisterClient:(id)a0;
- (void)_invalidate;
- (void)registerClient:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)extensionContextWithCompletionHandler:(id /* block */)a0;
- (void)invalidateAndCancelExtensionRequest;
- (void)_invalidateAndCancelExtensionRequest;
- (void)_callExtensionRequestHandlers;
- (void)_setupConnectionIfNeededWithCompletionHandler:(id /* block */)a0;

@end
