@class _MXExtension, NSUUID, _MXSerialQueue, NSExtension, UIViewController;
@protocol _MXExtensionURLHandling;

@interface _MXExtensionService : NSObject {
    _MXSerialQueue *_serialQueue;
    BOOL _didSendConnectionTerminationNotifcation;
}

@property (readonly, nonatomic) NSUUID *serviceIdentifier;
@property (retain, nonatomic) NSUUID *connectionIdentifier;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) UIViewController *remoteViewController;
@property (retain, nonatomic) NSExtension *realExtension;
@property (weak, nonatomic) id<_MXExtensionURLHandling> URLHandlingDelegate;
@property (readonly, nonatomic) _MXExtension *extensionProxy;

+ (id)extensionCompletionQueue;

- (void)cancel;
- (id)extension;
- (id)context;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (int)processIdentifier;
- (id)description;
- (id)_errorForIntent:(id)a0;
- (id)_errorForIntentVendorContext:(id)a0;
- (id)intentResponseObserverProxy;
- (id)_handleOrConfirmIntent:(id)a0 expectResponseClass:(Class)a1 isHandle:(BOOL)a2 withCompletion:(id /* block */)a3;
- (id)_errorForIntentResponse:(id)a0 withExpectResponseClass:(Class)a1;
- (id)confirmIntent:(id)a0 expectResponseClass:(Class)a1 withCompletion:(id /* block */)a2;
- (void)_completeOrCancelTransaction:(BOOL)a0 withIntentIdentifier:(id)a1 completion:(id /* block */)a2;
- (id)handleIntent:(id)a0 expectResponseClass:(Class)a1 withCompletion:(id /* block */)a2;
- (void)setIntentResponseObserverProxy:(id)a0;
- (void)handleIntent:(id)a0 expectResponseClass:(Class)a1 completion:(id /* block */)a2;
- (id)vendorContextWithErrorHandler:(id /* block */)a0;
- (void)connectExtensionWithRemoteViewControllerNeeded:(BOOL)a0 Handler:(id /* block */)a1;
- (void)_connectExtensionWithRemoteViewControllerNeeded:(BOOL)a0 Handler:(id /* block */)a1;
- (id)handleRequest:(id)a0 requestDispatcher:(id)a1 completion:(id /* block */)a2;
- (void)connectExtensionWithHandler:(id /* block */)a0;
- (id)startSendingUpdatesForRequest:(id)a0 requestDispatcher:(id)a1 toObserver:(id)a2;
- (void)stopSendingUpdatesForRequest:(id)a0 requestDispatcher:(id)a1;
- (void)disconnectExtension;
- (id)initWithExtensionProxy:(id)a0;
- (void)connectUIExtensionWithHandler:(id /* block */)a0;
- (id)startSendingUpdatesForIntent:(id)a0 toObserver:(id)a1;
- (void)stopSendingUpdatesForIntent:(id)a0;
- (id)resolveIntentSlot:(id)a0 forIntent:(id)a1 completionBlock:(id /* block */)a2;
- (void)completeTransactionWithIntentIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)cancelTransactionDueToTimeoutWithIntentIdentifier:(id)a0 completion:(id /* block */)a1;

@end
