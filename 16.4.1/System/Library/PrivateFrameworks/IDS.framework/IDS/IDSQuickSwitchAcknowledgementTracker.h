@class NSMutableSet;

@interface IDSQuickSwitchAcknowledgementTracker : NSObject {
    NSMutableSet *_delegateIdentifiers;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _delegateIdentifiersMutex;
}

@property (readonly, nonatomic) BOOL isAwaitingAcknowledgement;

- (void)stopAwaitingAcknowledgementFromAllServiceDelegates;
- (void)stopAwaitingAcknowledgementFromServiceDelegateWithIdentifier:(id)a0;
- (void)dealloc;
- (id)awaitAcknowledgementFromServiceDelegate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)identifierForServiceDelegate:(id)a0;
- (void)_accessDelegateIdentifiersInCriticalSectionWithBlock:(id /* block */)a0;

@end
