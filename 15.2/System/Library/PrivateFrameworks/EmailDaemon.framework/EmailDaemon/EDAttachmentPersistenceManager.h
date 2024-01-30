@class NSString, EDMessagePersistence, NSURL, EDAttachmentPersistence, NSObject;
@protocol OS_os_log;

@interface EDAttachmentPersistenceManager : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) EDAttachmentPersistence *attachmentPersistence;
@property (retain, nonatomic) EDMessagePersistence *messagePersistence;
@property (retain, nonatomic) NSURL *tempDirectoryForArchiveAttachments;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)attachmentDirectoryURLWithBasePath:(id)a0;

- (void).cxx_destruct;
- (void)persistenceIsDeletingMessages:(id)a0 generationWindow:(id)a1;
- (id)attachmentURLForGlobalMessageID:(long long)a0 mimePartNumber:(id)a1 basePath:(id)a2;
- (id)attachmentURLForGlobalMessageID:(long long)a0 remoteURL:(id)a1 basePath:(id)a2;
- (void)persistenceWillDeleteMessages:(id)a0;
- (id)attachmentURLForMessageAttachmentID:(long long)a0 basePath:(id)a1;
- (BOOL)persistAttachment:(id)a0 attachmentMetadata:(id)a1 basePath:(id)a2 error:(id *)a3;
- (BOOL)persistAttachmentMetadata:(id)a0;
- (BOOL)persistAttachmentWithURL:(id)a0 attachmentMetadata:(id)a1 basePath:(id)a2 error:(id *)a3;
- (id)initWithDatabase:(id)a0 messagePersistence:(id)a1;
- (id)_updateFileWrapperNameToStaticFileName:(id)a0;
- (BOOL)_writeAttachment:(id)a0 toDirectory:(id)a1 outError:(id *)a2;
- (BOOL)_moveAttachmentAtURL:(id)a0 toURL:(id)a1 outError:(id *)a2;
- (BOOL)_persistAttachmentWithWrapper:(id)a0 orURL:(id)a1 attachmentMetadata:(id)a2 basePath:(id)a3 error:(id *)a4;
- (BOOL)_writeFileWrapper:(id)a0 toURL:(id)a1 outError:(id *)a2;
- (BOOL)_persistAndUpdateAttachmentPersistenceTableFromFileWrapper:(id)a0 orURL:(id)a1 attachmentMetadata:(id)a2 basePath:(id)a3 shouldUpdateAttachmentID:(BOOL)a4;
- (id)_tempDirectoryForArchiveAttachmentsWithParentDirectory:(id)a0;
- (id)_accountIdentifiersByAttachmentIDs:(id)a0;
- (BOOL)removeDatabaseAttachments:(id)a0;
- (BOOL)removeFilesystemAttachmentsByAccountIdentifier:(id)a0;
- (void)willDeleteAttachmentsForMessages:(id)a0;
- (void)isDeletingMessages:(id)a0;
- (id)attachmentDirectoryURLForMessageID:(long long)a0 basePath:(id)a1;

@end
