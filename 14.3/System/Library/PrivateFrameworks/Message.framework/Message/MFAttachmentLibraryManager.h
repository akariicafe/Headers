@interface MFAttachmentLibraryManager : MFAttachmentComposeManager

- (id)_dataProviderForAttachmentURL:(id)a0 error:(id *)a1;
- (void)removeProviderForBaseURL:(id)a0;
- (void)_messageAttachmentStorageLocationsDidChangeNotification:(id)a0;
- (id)initWithPrimaryLibrary:(id)a0;
- (id)attachmentsForMessage:(id)a0 withSchemes:(id)a1;

@end
