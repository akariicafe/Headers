@class NSString, NSExtension, PKIssuerProvisioningExtensionConsumerContext;
@protocol NSCopying;

@interface PKIssuerProvisioningExtensionConsumerCoordinator : NSObject <PKInvalidatable> {
    id<NSCopying> _requestIdentifier;
    PKIssuerProvisioningExtensionConsumerContext *_context;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _invalidated;
}

@property (readonly, nonatomic) NSExtension *extension;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)beginWithExtension:(id)a0 completion:(id /* block */)a1;

- (id)_initWithExtension:(id)a0;
- (void)_performWhenConnected:(id /* block */)a0;
- (void)statusWithCompletion:(id /* block */)a0;
- (void)passEntriesWithCompletion:(id /* block */)a0;
- (void)remotePassEntriesWithCompletion:(id /* block */)a0;
- (void)generateRequestWithEntryIdentifier:(id)a0 configuration:(id)a1 certificateChain:(id)a2 nonce:(id)a3 nonceSignature:(id)a4 completionHandler:(id /* block */)a5;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)dealloc;

@end
