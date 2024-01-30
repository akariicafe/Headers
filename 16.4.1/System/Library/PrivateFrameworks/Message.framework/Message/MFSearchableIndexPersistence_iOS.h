@class NSString, NSObject;
@protocol OS_os_log;

@interface MFSearchableIndexPersistence_iOS : EDSearchableIndexPersistence <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)allMailboxIdentifiersForMessage:(id)a0 result:(id /* block */)a1;
- (id)statistics;
- (id)_verificationDataFromMessage:(id)a0 messageIDTransactionIDDictionary:(id)a1;
- (id)messagesWhere:(id)a0 sortedBy:(id)a1 limit:(long long)a2;
- (void)attachmentItemMetadataForAttachmentID:(id)a0 attachmentPersistentID:(id)a1 messagePersistentID:(id)a2 name:(id)a3 mailboxID:(long long)a4 result:(id /* block */)a5;
- (id)additionalFilterClause;
- (void)attachmentItemMetadataForAttachmentID:(id)a0 messagePersistentID:(id)a1 name:(id)a2 mailboxID:(long long)a3 result:(id /* block */)a4;
- (id)searchableIndexItemsFromMessages:(id)a0 type:(long long)a1;
- (id)verificationDataSamplesFromMessageIDTransactionIDDictionary:(id)a0;

@end
