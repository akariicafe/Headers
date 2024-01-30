@class NSArray, NSTimer, NSString;

@interface SBZStackAuditor : NSObject <SBHomeGestureArbiterObserver, SBFZStackResolverObserver, BSDescriptionProviding>

@property (retain, nonatomic) NSArray *latestHomeGestureParticipantRecords;
@property (retain, nonatomic) NSArray *latestZStackParticipantRecords;
@property (weak, nonatomic) NSTimer *participantUpdateRecheckTimer;
@property (readonly, nonatomic) BOOL shouldAuditHomeAffordanceSuppression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_shouldShowAlertForErrors;
- (id)initWithHomeGestureArbiter:(id)a0 zStackResolver:(id)a1;
- (void)homeGestureArbiterDidUpdateParticipants:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_recheckParticipantsComparingToOriginalError:(id)a0;
- (id)_checkParticipantUpdateRecords;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)zStackResolverDidUpdateParticipants:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)_startAuditingPassForParticipantUpdates;

@end
