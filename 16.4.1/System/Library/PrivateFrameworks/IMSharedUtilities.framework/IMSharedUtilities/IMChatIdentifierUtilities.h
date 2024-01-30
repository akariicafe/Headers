@interface IMChatIdentifierUtilities : NSObject

+ (id)_handleBasedPersonCentricIDWithParticipantIDs:(id)a0 chatStyle:(unsigned char)a1;
+ (id)_randomUnverifiedChatIdentifierForGroupChat;
+ (id)generateUnusedChatIdentifierForGroupChatWithServiceName:(id)a0 chatWithChatIdentifierExists:(id /* block */)a1;
+ (id)personCentricIDForChatWithGUID:(id)a0 chatIdentifier:(id)a1 chatStyle:(unsigned char)a2 groupID:(id)a3 displayName:(id)a4 participantIDs:(id)a5;

@end
