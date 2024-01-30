@class NSString, NSMutableArray;
@protocol BSInvalidatable;

@interface SBFZStackResolver : NSObject <BSDescriptionProviding>

@property (retain, nonatomic) id<BSInvalidatable> stateCaptureHandle;
@property (retain, nonatomic) NSMutableArray *participants;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateResolutionsForAddedParticipant:(id)a0 removedParticipant:(id)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)_resolveHomeGestureOwnershipOfSortedParticipants:(id)a0 changedParticipantHandler:(id /* block */)a1;
- (void)_resolveSystemApertureSuppressionOfSortedParticipants:(id)a0 changedParticipantHandler:(id /* block */)a1;
- (void)_resolveHomeAffordanceDrawingSuppressionOfSortedParticipants:(id)a0 changedParticipantHandler:(id /* block */)a1;
- (void)_registerParticipant:(id)a0;
- (id)_updateResolutions;
- (void)dealloc;
- (void)_setNeedsUpdateFromParticipant:(id)a0;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)acquireParticipantWithIdentifier:(long long)a0 delegate:(id)a1;
- (void)_unregisterParticipant:(id)a0;
- (void).cxx_destruct;
- (void)_resolveActivationStateOfSortedParticipants:(id)a0 changedParticipantHandler:(id /* block */)a1;
- (id)_registeredParticipants;

@end
