@class NSString, NSMutableDictionary, PKEntitlementWhitelist, NSObject, NSMutableArray;
@protocol PDAssertionCoordinatorDelegate, OS_dispatch_queue;

@interface PDAssertionCoordinator : PDXPCService <PDAssertionRequestDelegate, PDAssertionCoordinatorExportedInterface> {
    NSMutableDictionary *_assertionsByType;
    NSObject<OS_dispatch_queue> *_coordinatorSerialQueue;
    PKEntitlementWhitelist *_whitelist;
    long long _suppressionPermissionState;
    NSMutableArray *_pendingAssertionRequests;
}

@property (weak, nonatomic) id<PDAssertionCoordinatorDelegate> delegate;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) BOOL isForegroundApplication;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)suppressionApplicationRegistry;

- (void)invalidateAssertionsForBackgroundApplicationState;
- (void)_addRequestForAssertion:(id)a0 handler:(id /* block */)a1;
- (void)assertionOfType:(unsigned long long)a0 withIdentifier:(id)a1 shouldInvalidateWhenBackgrounded:(BOOL)a2;
- (void)invalidateAssertionOfType:(unsigned long long)a0 withIdentifier:(id)a1 handler:(id /* block */)a2;
- (void)assertionRequestDidTimeout:(id)a0;
- (id)assertionsOfType:(unsigned long long)a0;
- (void)assertionOfType:(unsigned long long)a0 withIdentifier:(id)a1 isValid:(id /* block */)a2;
- (void)_acquireContactlessInterfaceSuppressionAssertion:(id)a0 handler:(id /* block */)a1;
- (BOOL)hasAssertionsOfType:(unsigned long long)a0;
- (void)_cancelPendingAssertionRequest:(id)a0;
- (void)_showAlertForContactlessInterfaceSuppression;
- (id)initWithConnection:(id)a0;
- (void)cancelPendingAssertionRequests;
- (void)invalidateAllAssertions;
- (void)processPendingAssertionRequests;
- (void)acquireAssertionOfType:(unsigned long long)a0 withIdentifier:(id)a1 reason:(id)a2 handler:(id /* block */)a3;
- (void).cxx_destruct;
- (void)_processPendingAssertionRequests;
- (void)_acquireAssertion:(id)a0 handler:(id /* block */)a1;

@end
