@class NPKButtonListener, NPKQuickPaymentSessionLocalAuthenticationCoordinator, NSDictionary, NSObject, PKPass;
@protocol OS_dispatch_queue, NPKQuickPaymentSessionSourceDelegate;

@interface NPKQuickPaymentSessionSource : NSObject {
    id<NPKQuickPaymentSessionSourceDelegate> _delegate;
    NPKButtonListener *_buttonListener;
    NSObject<OS_dispatch_queue> *_sessionSourceQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BOOL _delegateHandlingButtonEvents;
    BOOL _deferAuthorization;
    BOOL _requireFirstInQueue;
    unsigned long long _preconditionState;
    PKPass *_initialPass;
    NSDictionary *_vasPasses;
    NPKQuickPaymentSessionLocalAuthenticationCoordinator *_localAuthenticationCoordinator;
}

- (void)_performDelegateCallback:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setInitialPass:(id)a0;
- (void)_handlePMUButtonEvent;
- (id)initWithDelegate:(id)a0 buttonListener:(id)a1 callbackQueue:(id)a2;
- (void)setDeferAuthorization:(BOOL)a0;
- (void)setDelegateHandlingButtonEvents:(BOOL)a0;
- (void)setLocalAuthenticationCoordinator:(id)a0;
- (void)setPreconditionState:(unsigned long long)a0;
- (void)setRequireFirstInQueue:(BOOL)a0;
- (void)setVasPasses:(id)a0;

@end
