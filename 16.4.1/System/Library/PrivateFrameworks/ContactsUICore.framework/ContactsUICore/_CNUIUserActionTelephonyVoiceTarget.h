@interface _CNUIUserActionTelephonyVoiceTarget : CNUIUserActionTarget

- (id)init;
- (id)actionsForContact:(id)a0 discoveringEnvironment:(id)a1;
- (id)ttyActionsFutureForPhoneNumbers:(id)a0 contact:(id)a1 discoveringEnvironment:(id)a2;
- (id)TTYCallActionWithDestinationID:(id)a0 contactProperty:(id)a1 discoveringEnvironment:(id)a2;
- (id)TTYRelayCallActionWithDestinationID:(id)a0 contactProperty:(id)a1 discoveringEnvironment:(id)a2;
- (id)actionsForPhoneNumbers:(id)a0 contact:(id)a1 discoveringEnvironment:(id)a2;
- (id)phoneCallActionWithDestinationID:(id)a0 contactProperty:(id)a1 discoveringEnvironment:(id)a2;
- (id)ttyActionsForPhoneNumbers:(id)a0 contact:(id)a1 discoveringEnvironment:(id)a2;

@end
