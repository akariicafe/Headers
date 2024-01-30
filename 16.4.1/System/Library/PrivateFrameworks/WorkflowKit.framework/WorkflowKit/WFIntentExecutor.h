@class INIntent, NSString, NSProgress, INCExtensionConnection;
@protocol WFIntentExecutorDelegate, INCExtensionProxy;

@interface WFIntentExecutor : NSObject <INIntentResponseObserver, NSProgressReporting> {
    WFIntentExecutor *_strongSelf;
}

@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) id<INCExtensionProxy> getRideStatusUpdatingExtensionProxy;
@property (nonatomic) BOOL forceExecutionOnPhone;
@property (nonatomic) BOOL skipResolveAndConfirm;
@property (readonly, nonatomic) INIntent *intent;
@property (readonly, nonatomic) INCExtensionConnection *connection;
@property (weak, nonatomic) id<WFIntentExecutorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSProgress *progress;

- (void)configureConnection;
- (void)finish;
- (id)initWithIntent:(id)a0 donateInteraction:(BOOL)a1 groupIdentifier:(id)a2;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)cancel;
- (void)failWithError:(id)a0;
- (void)getDefaultValueForParameterNamed:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)intentResponseDidUpdate:(id)a0 withSerializedCacheItems:(id)a1;
- (void)autoreleaseSelf;
- (id)errorFromHandleResponse:(id)a0 intent:(id)a1;
- (void)startReceivingRideStatusUpdates;
- (void)confirmIntent:(id)a0 withExtensionProxy:(id)a1;
- (BOOL)continueInApp;
- (id)errorFromConfirmResponse:(id)a0 intent:(id)a1;
- (id)errorFromExtensionError:(id)a0;
- (id)errorFromResolutionResult:(id)a0 forSlot:(id)a1 onIntent:(id)a2;
- (id)extensionInputItemsWithIntent:(id)a0;
- (void)finishWithInteraction:(id)a0;
- (void)finishWithInteraction:(id)a0 error:(id)a1;
- (void)getDynamicOptionsForParameterNamed:(id)a0 searchTerm:(id)a1 completionHandler:(id /* block */)a2;
- (void)handleIntent:(id)a0 withExtensionProxy:(id)a1;
- (void)handleIntent:(id)a0 withExtensionProxy:(id)a1 completionHandler:(id /* block */)a2;
- (void)resolveIntent:(id)a0 withExtensionProxy:(id)a1;
- (void)resolveIntentResolutionResults:(id)a0 slotDescription:(id)a1 intent:(id)a2 completion:(id /* block */)a3;
- (void)retainSelf;
- (void)showConfirmationForInteraction:(id)a0 confirmationRequired:(BOOL)a1 authenticationRequired:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)startConnectionWithCompletionHandler:(id /* block */)a0;
- (void)stopReceivingRideStatusUpdates;
- (void)updateIntentWithItemToConfirm:(id)a0 forSlot:(id)a1 onIntent:(id)a2;

@end
