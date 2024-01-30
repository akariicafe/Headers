@class NSString, NSMutableArray;
@protocol SBFZStackResolverObserver, BSInvalidatable;

@interface SBFZStackResolver : NSObject <BSDescriptionProviding>

@property (retain, nonatomic) id<BSInvalidatable> stateCaptureHandle;
@property (retain, nonatomic) NSMutableArray *participants;
@property (weak, nonatomic) id<SBFZStackResolverObserver> observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_unregisterParticipant:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_registerParticipant:(id)a0;
- (void)_setNeedsUpdateFromParticipant:(id)a0;
- (void)_resolveHomeAffordanceDrawingSuppressionOfSortedParticipants:(id)a0 changedParticipantHandler:(id /* block */)a1;
- (id)succinctDescription;
- (id)acquireParticipantWithIdentifier:(long long)a0 delegate:(id)a1;
- (void)_resolveActivationStateOfSortedParticipants:(id)a0 changedParticipantHandler:(id /* block */)a1;
- (void)_resolveHomeGestureOwnershipOfSortedParticipants:(id)a0 changedParticipantHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)dealloc;
- (id)_registeredParticipants;
- (void)_updateResolutionsSkippingDelegateCallbackForParticipant:(id)a0;

@end
