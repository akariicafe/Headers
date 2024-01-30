@class AAUIInviteMessageFlowController;

@interface AAUIMyPendingCustodianActionHandler : AAUIMyCustodianActionHandler {
    AAUIInviteMessageFlowController *_inviteFlowController;
}

- (void).cxx_destruct;
- (void)doPrimaryAction:(id)a0 specifier:(id)a1;
- (void)displayMessagesInvitationFlowWithViewController:(id)a0;

@end
