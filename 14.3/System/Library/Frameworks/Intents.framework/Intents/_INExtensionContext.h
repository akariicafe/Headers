@class NSString, INIntentDeliverer, NSObject;
@protocol OS_dispatch_queue, INIntentHandlerProvidingPrivate;

@interface _INExtensionContext : NSExtensionContext <INIntentDelivererDelegate, INIntentDelivererDataSource, _INExtensionContextVending> {
    BOOL _isPrivateExtension;
    id _handlerForIntent;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) id<INIntentHandlerProvidingPrivate> _extensionHandler;
@property (readonly, nonatomic) INIntentDeliverer *_intentDeliverer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void)_commonInit;
- (void).cxx_destruct;
- (oneway void)completeTransaction;
- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (oneway void)startSendingUpdatesForIntent:(id)a0 toObserver:(id)a1;
- (oneway void)stopSendingUpdatesForIntent:(id)a0;
- (oneway void)handleIntent:(id)a0 completion:(id /* block */)a1;
- (oneway void)confirmationResponseForIntent:(id)a0 completion:(id /* block */)a1;
- (oneway void)handleIntent:(id)a0 completionHandler:(id /* block */)a1;
- (oneway void)handleIntent:(id)a0 withCompletion:(id /* block */)a1;
- (oneway void)cancelTransactionDueToTimeout;
- (oneway void)getIntentParameterOptions:(id)a0 forIntent:(id)a1 completionBlock:(id /* block */)a2;
- (oneway void)getIntentParameterOptions:(id)a0 forIntent:(id)a1 searchTerm:(id)a2 completionBlock:(id /* block */)a3;
- (oneway void)confirmIntent:(id)a0 withCompletion:(id /* block */)a1;
- (oneway void)getIntentParameterDefaultValue:(id)a0 forIntent:(id)a1 completionBlock:(id /* block */)a2;
- (oneway void)resolveIntentSlot:(id)a0 forIntent:(id)a1 completionBlock:(id /* block */)a2;
- (oneway void)resolveIntentSlots:(id)a0 forIntent:(id)a1 completionBlock:(id /* block */)a2;
- (oneway void)beginTransactionWithIntentIdentifier:(id)a0 completion:(id /* block */)a1;
- (oneway void)completeTransactionWithIntentIdentifier:(id)a0 completion:(id /* block */)a1;
- (oneway void)cancelTransactionDueToTimeoutWithIntentIdentifier:(id)a0 completion:(id /* block */)a1;
- (struct { unsigned int x0[8]; })auditTokenForIntentDeliverer:(id)a0;
- (void)_validateExtension;
- (void)intentDeliverer:(id)a0 deliverIntent:(id)a1 withBlock:(id /* block */)a2;
- (id)initWithInputItems:(id)a0 privateIntentHandlerProvider:(id)a1;
- (id)initWithInputItems:(id)a0 extension:(id)a1;
- (void)_beginTransactionWithIntentIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_completeTransactionWithIntentIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_cancelTransactionDueToTimeoutWithIntentIdentifier:(id)a0 completion:(id /* block */)a1;

@end
