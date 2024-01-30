@interface IMDDatabaseLegacyXPCBridge : NSObject

- (id)_chatRecordsCopiedFromXPCArray:(id)a0;
- (id)_xpcArrayWithAttachmentRecords:(id)a0;
- (id)_attachmentRecordsCopiedFromXPCArray:(id)a0;
- (id)_codableDictionaryCopiedFromXPCDictionary:(id)a0 objectClass:(Class)a1;
- (id)_codableObjectsCopiedFromXPCArray:(id)a0 objectClass:(Class)a1;
- (id)_messageRecordsCopiedFromXPCArray:(id)a0;
- (id)_xpcArrayWithChatRecords:(id)a0;
- (id)_xpcArrayWithCodableObjects:(id)a0;
- (id)_xpcArrayWithMessageRecords:(id)a0;
- (id)_xpcDictionaryWithCodableObjects:(id)a0;

@end
