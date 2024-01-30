@interface IMDMessageSortOrderAssigner : NSObject

- (id)messageWithGUID:(id)a0;
- (id)copyOfMessagesWithReplyToGUID:(id)a0;
- (void)compareMessageToOtherMessagesWithSameReplyToGUIDAndAssignSortID:(id)a0 existingMessagesWithSameReplyToGUID:(id)a1;
- (void)assignSortIDToIncomingMessageWithNoExistingMessagesWithSameReplyToGUID:(id)a0 onChat:(id)a1;
- (void)assignSortIDToIncomingMessage:(id)a0 onChat:(id)a1;
- (void)persistMessage:(id)a0;
- (void)assignAndPersistSortIDForIncomingMessage:(id)a0 onChat:(id)a1;

@end
