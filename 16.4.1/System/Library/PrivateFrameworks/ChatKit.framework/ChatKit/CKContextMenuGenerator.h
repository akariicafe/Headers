@interface CKContextMenuGenerator : NSObject

+ (id)menuActionToInitiateFaceTimeAudioWithHandle:(id)a0 andContactsManager:(id)a1;
+ (id)menuActionToSendEmailToAddress:(id)a0;
+ (id)menuActionToInitiateFaceTimeVideoWithHandle:(id)a0 andContactsManager:(id)a1;
+ (id)_menuActionToInitiateFaceTimeAudioForConversation:(id)a0 andContactsManager:(id)a1;
+ (id)_menuActionToInitiateFaceTimeVideoForConversation:(id)a0 andContactsManager:(id)a1;
+ (id)_menuActionToInviteHandleToShareTheirScreen:(id)a0;
+ (id)_menuActionToSendEmailForConversation:(id)a0 andContactsManager:(id)a1;
+ (id)_menuActionToShareMyScreenWithHandle:(id)a0;
+ (BOOL)_shouldShowPrivateMessageOptionForHandle:(id)a0 conversation:(id)a1;
+ (id)menuActionToCreateContactForID:(id)a0 handler:(id /* block */)a1;
+ (id)menuActionToDisplayRecipientForHandle:(id)a0;
+ (id)menuActionToOpenContactCardForContact:(id)a0;
+ (id)menuActionToRemoveHandle:(id)a0 fromConversation:(id)a1;
+ (id)menuActionToSendPrivateMessageToHandleID:(id)a0;
+ (id)menuActionToShowIDAsLargeType:(id)a0 handler:(id /* block */)a1;
+ (id)menuActionsToInitiateRelayPhoneCallWithHandle:(id)a0;
+ (id)menuForNamedGroupConversation:(id)a0 andContactsManager:(id)a1;
+ (id)recipientSubmenuForHandle:(id)a0;
+ (id)relayPhoneCallActionTextForPhoneNumber:(id)a0;
+ (id)subMenuForScreenSharingOptionsWithHandle:(id)a0;
+ (id)submenuForIndividualParticipantWithHandle:(id)a0 forConversation:(id)a1 includeAddToContactsAction:(BOOL)a2 includeRemoveAction:(BOOL)a3;
+ (BOOL)supportsRelayPhoneCallsCalls;

@end
