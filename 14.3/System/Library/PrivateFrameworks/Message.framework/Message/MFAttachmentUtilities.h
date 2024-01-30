@interface MFAttachmentUtilities : NSObject

+ (id)temporaryDirectory;
+ (id)writeData:(id)a0 toTemporaryFileURLWithFileName:(id)a1;
+ (id)securityScopeForFileURL:(id)a0;
+ (id)makeAttachmentPlaceholder:(id)a0 fileSize:(long long)a1 mimeType:(id)a2 contentID:(id)a3;
+ (id)_temporaryDirectoryUniqueURL;
+ (id)temporaryFileURLWithExtension:(id)a0;
+ (id)mimeTypeForFileName:(id)a0;
+ (BOOL)shouldCreatePlaceholderAttachmentForAttachmentWithSize:(long long)a0;

@end
