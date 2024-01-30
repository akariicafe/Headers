@interface IMChatIdentifierUtilities : NSObject

+ (id)_randomUnverifiedChatIdentifierForGroupChat;
+ (id)generateUnusedChatIdentifierForGroupChatWithServiceName:(id)a0 chatWithChatIdentifierExists:(id /* block */)a1;

@end
