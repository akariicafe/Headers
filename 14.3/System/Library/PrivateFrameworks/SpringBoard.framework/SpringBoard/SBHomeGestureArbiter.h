@class NSArray, NSString, SBHomeGestureParticipant, NSMutableArray;
@protocol BSInvalidatable;

@interface SBHomeGestureArbiter : NSObject <BSDescriptionProviding, SBHardwareButtonServiceObserver>

@property (retain, nonatomic) id<BSInvalidatable> stateCaptureHandle;
@property (retain, nonatomic) NSMutableArray *participants;
@property (retain, nonatomic, getter=_owningParticipants, setter=_setOwningParticipants:) NSArray *owningParticipants;
@property (retain, nonatomic) SBHomeGestureParticipant *hardwareButtonServiceParticipant;
@property (retain, nonatomic) id<BSInvalidatable> hardwareButtonObserverAssertion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)participantWithIdentifier:(long long)a0 delegate:(id)a1;
- (void)buttonService:(id)a0 buttonKind:(long long)a1 eventsConsumedDidChange:(unsigned long long)a2;
- (void)_updateHardwareButtonServiceParticipant;
- (void)_unregisterParticipant:(id)a0;
- (void)_registerParticipant:(id)a0;
- (void)_updateOwningParticipants;

@end
