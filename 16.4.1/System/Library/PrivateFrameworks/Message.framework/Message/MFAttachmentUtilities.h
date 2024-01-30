@interface MFAttachmentUtilities : NSObject

+ (id)temporaryDirectory;
+ (id)_temporaryDirectoryUniqueURL;
+ (id)makeAttachmentPlaceholder:(id)a0 fileSize:(long long)a1 mimeType:(id)a2 contentID:(id)a3;
+ (id)mimeTypeForFileName:(id)a0;
+ (id)securityScopeForFileURL:(id)a0;
+ (BOOL)shouldCreatePlaceholderAttachmentForAttachmentWithSize:(long long)a0;
+ (id)temporaryFileURLWithExtension:(id)a0;
+ (id)writeData:(id)a0 toTemporaryFileURLWithFileName:(id)a1;

@end
