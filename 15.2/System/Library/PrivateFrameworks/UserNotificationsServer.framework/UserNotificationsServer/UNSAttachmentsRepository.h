@class NSURL, UNSBundleLibrarian, UNSKeyedDictionaryRepository;

@interface UNSAttachmentsRepository : NSObject {
    UNSKeyedDictionaryRepository *_referencesRepository;
    NSURL *_directoryURL;
    UNSBundleLibrarian *_librarian;
}

+ (id)_sha1HashOfFileAtURL:(id)a0;

- (id)allBundleIdentifiers;
- (id)bundleIdentifiersClaimingAttachments;
- (BOOL)isRepositoryURL:(id)a0;
- (id)_claimedRepositoryURLsForBundleIdentifier:(id)a0;
- (void)_removeAllReferencesForBundleIdentifier:(id)a0;
- (id)_fileURLForDigestString:(id)a0 extension:(id)a1 bundleIdentifier:(id)a2;
- (unsigned long long)_removeReferencesToRepositoryURL:(id)a0 forNotificationIdentifier:(id)a1 bundleIdentifier:(id)a2;
- (void)deleteAllFilesForBundleIdentifier:(id)a0;
- (void)performMigration;
- (void)ensureIntegrityUsingNotificationIdentifiersForBundleIdentifiers:(id)a0;
- (id)referencesForBundleIdentifier:(id)a0;
- (void)removeReferenceToRepositoryURL:(id)a0 forNotificationIdentifier:(id)a1 bundleIdentifier:(id)a2;
- (BOOL)isValidRepositoryURL:(id)a0 forBundleIdentifier:(id)a1;
- (void)_transformAttachmentsForBundleIdentifier:(id)a0 usingTransformBlock:(id /* block */)a1;
- (void)_performAttachmentReferencesMigration;
- (void).cxx_destruct;
- (id)initWithDirectory:(id)a0 librarian:(id)a1;
- (void)_removeRepositoryURL:(id)a0;
- (unsigned long long)_transformNotificationIdentifiersForRepositoryURL:(id)a0 bundleIdentifier:(id)a1 usingTransformBlock:(id /* block */)a2;
- (void)_performAttachmentReferencesMigrationForBundleIdentifier:(id)a0;
- (unsigned long long)_addReferencesToRepositoryURL:(id)a0 forNotificationIdentifier:(id)a1 bundleIdentifier:(id)a2;
- (id)_attachmentDirectoryForBundleIdentifier:(id)a0;
- (void)_performAttachmentRepositoryKeyMigration;
- (id)moveFileIntoRepositoryFromFileURL:(id)a0 forNotificationIdentifier:(id)a1 bundleIdentifier:(id)a2;
- (void)_performAttachmentFilesMigration;

@end
