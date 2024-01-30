@class RBSProcessMonitor, INWatchdogTimer, NSString, INIntentForwardingAction, NSObject, RBSAssertion;
@protocol OS_dispatch_queue, INIntentBackgroundHandlingAssertion;

@interface INAppIntentDeliverer : NSObject <RBSAssertionObserving>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) RBSAssertion *processAssertion;
@property (readonly, nonatomic) RBSProcessMonitor *processMonitor;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) INWatchdogTimer *requestTimer;
@property (retain, nonatomic) id<INIntentBackgroundHandlingAssertion> auxiliaryAssertion;
@property (readonly, nonatomic) INIntentForwardingAction *intentForwardingAction;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)assertion:(id)a0 didInvalidateWithError:(id)a1;
- (id)initWithBundleIdentifier:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 intentForwardingAction:(id)a1;
- (void)deliverIntentForwardingActionWithResponseHandler:(id /* block */)a0;
- (void)deliverIntent:(id)a0 reply:(id /* block */)a1;
- (void)invalidateIntentDelivery;
- (void)_deliverIntentForwardingActionWithResponseHandler:(id /* block */)a0;
- (void)completeWithIntentForwardingActionResponse:(id)a0;

@end
