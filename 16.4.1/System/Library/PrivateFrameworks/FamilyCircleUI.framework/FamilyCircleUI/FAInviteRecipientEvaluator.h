@interface FAInviteRecipientEvaluator : NSObject

- (id)parseRecipientAddresses:(id)a0;
- (id)recipientAlreadyInFamily:(id)a0 emailOnly:(BOOL)a1 recipients:(id)a2;
- (void)showAlreadyFamilyMember:(id)a0 presenter:(id)a1;
- (void)validateRecipients:(id)a0 inviteContext:(id)a1 presenter:(id)a2 completion:(id /* block */)a3;

@end
