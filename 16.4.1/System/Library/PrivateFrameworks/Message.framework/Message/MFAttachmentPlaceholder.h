@class NSMutableDictionary;

@interface MFAttachmentPlaceholder : NSObject {
    NSMutableDictionary *_jsonDictionary;
}

+ (id)placeholder;
+ (id)_localStoreURLForFileData:(id)a0 contentID:(id)a1;
+ (id)_placeholderMagic;
+ (id)attachmentPlaceholderForData:(id)a0 fileName:(id)a1 type:(id)a2 contentID:(id)a3;
+ (id)attachmentPlaceholderForFileURL:(id)a0 fileName:(id)a1 fileSize:(long long)a2 type:(id)a3 contentID:(id)a4;
+ (void)cloneFileAtURL:(id)a0 toPlaceholderURL:(id)a1;
+ (id)dataForPlaceholder:(id)a0;
+ (BOOL)hasPlaceholderRepresentation:(id)a0;
+ (BOOL)isPlaceholderSerializedRepresentation:(id)a0;
+ (id)placeholderDirectory;
+ (id)placeholderFromSerializedRepresentation:(id)a0;
+ (id)placeholderRepresentations:(id)a0;
+ (void)removePlaceholder:(id)a0;
+ (void)removePlaceholderForFileURL:(id)a0;
+ (id)serializedPlaceholderForFileName:(id)a0 fileSize:(long long)a1 mimeType:(id)a2 contentID:(id)a3;
+ (BOOL)setFileProtectionForFileAt:(id)a0 error:(id *)a1;
+ (BOOL)writeData:(id)a0 forURL:(id)a1;

- (unsigned long long)fileSize;
- (void)setFileSize:(unsigned long long)a0;
- (void)setFileName:(id)a0;
- (id)fileURL;
- (void)setMimeType:(id)a0;
- (id)serializedRepresentation;
- (id)contentID;
- (id)fileName;
- (id)mimeType;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)setContentID:(id)a0;
- (void)setUseMailDrop:(BOOL)a0;
- (void)_setJSONDictionary:(id)a0;
- (id)fileURLString;
- (void)setFileURLString:(id)a0;
- (BOOL)useMailDrop;

@end
