@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, DKExtensionAttributes;

@interface DKExtensionAdapter : NSObject <DKRequestDelegate>

@property (retain, nonatomic) NSMutableDictionary *requestLookup;
@property (retain, nonatomic) NSMutableDictionary *extensionToRequestIdentifierLookup;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *adapterQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *adapterConnectQueue;
@property (readonly, nonatomic) id<DKExtensionAttributes> extensionAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extensionAdapterWithExtensionAttributes:(id)a0;

- (void).cxx_destruct;
- (void)cancelAll;
- (void)_attachHandlersToExtension:(id)a0;
- (void)_didCancelExtensionRequest:(id)a0 error:(id)a1;
- (void)_didCompleteExtensionRequest:(id)a0;
- (void)_didInterruptExtensionRequest:(id)a0;
- (id)_requestForExtensionRequestIdentifier:(id)a0;
- (void)beginRequest:(id)a0 payload:(id)a1 completion:(id /* block */)a2;
- (id)initWithExtensionAttributes:(id)a0;
- (void)request:(id)a0 didCompleteWithPayload:(id)a1 error:(id)a2;

@end
