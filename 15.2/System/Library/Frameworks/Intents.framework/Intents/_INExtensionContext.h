@class NSString, NSObject;
@protocol OS_dispatch_queue, INIntentHandlerProvidingPrivate, INIntentDelivering;

@interface _INExtensionContext : NSExtensionContext <INIntentDeliveringDelegate, _INExtensionContextVending> {
    BOOL _isPrivateExtension;
    id _handlerForIntent;
    NSObject<OS_dispatch_queue> *_queue;
    id<INIntentDelivering> _intentDeliverer;
}

@property (readonly, nonatomic) id<INIntentHandlerProvidingPrivate> _extensionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (oneway void)completeTransaction;
- (void).cxx_destruct;
- (void)_commonInit;
- (oneway void)startSendingUpdatesForIntent:(id)a0 toObserver:(id)a1;
- (oneway void)stopSendingUpdatesForIntent:(id)a0;
- (oneway void)confirmationResponseForIntent:(id)a0 completion:(id /* block */)a1;
- (oneway void)handleIntent:(id)a0 completion:(id /* block */)a1;
- (oneway void)handleIntent:(id)a0 completionHandler:(id /* block */)a1;
- (oneway void)cancelTransactionDueToTimeout;
- (oneway void)getIntentParameterOptions:(id)a0 forIntent:(id)a1 completionBlock:(id /* block */)a2;
- (oneway void)getIntentParameterOptions:(id)a0 forIntent:(id)a1 searchTerm:(id)a2 completionBlock:(id /* block */)a3;
- (oneway void)confirmIntent:(id)a0 withCompletion:(id /* block */)a1;
- (oneway void)getIntentParameterDefaultValue:(id)a0 forIntent:(id)a1 completionBlock:(id /* block */)a2;
- (oneway void)resolveIntentSlot:(id)a0 forIntent:(id)a1 completionBlock:(id /* block */)a2;
- (oneway void)resolveIntentSlots:(id)a0 forIntent:(id)a1 completionBlock:(id /* block */)a2;
- (oneway void)handleIntent:(id)a0 withCompletion:(id /* block */)a1;
- (oneway void)beginTransactionWithIntentIdentifier:(id)a0 completion:(id /* block */)a1;
- (oneway void)completeTransactionWithIntentIdentifier:(id)a0 completion:(id /* block */)a1;
- (oneway void)cancelTransactionDueToTimeoutWithIntentIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)initWithInputItems:(id)a0 extension:(id)a1;
- (void)intentDeliverer:(id)a0 deliverIntent:(id)a1 withBlock:(id /* block */)a2;
- (id)initWithInputItems:(id)a0 privateIntentHandlerProvider:(id)a1;
- (id)_intentDelivererForIntent:(id)a0;
- (void)_validateExtension;
- (void)_beginTransactionWithIntentIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_completeTransactionWithIntentIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_cancelTransactionDueToTimeoutWithIntentIdentifier:(id)a0 completion:(id /* block */)a1;

@end
