@class NSMutableDictionary;

@interface MFAttachmentPlaceholder : NSObject {
    NSMutableDictionary *_jsonDictionary;
}

+ (id)placeholder;
+ (BOOL)isPlaceholderSerializedRepresentation:(id)a0;
+ (id)placeholderFromSerializedRepresentation:(id)a0;
+ (id)dataForPlaceholder:(id)a0;
+ (id)_placeholderMagic;

- (void)setMimeType:(id)a0;
- (id)serializedRepresentation;
- (id)init;
- (void)dealloc;
- (id)contentID;
- (id)fileName;
- (void)setFileName:(id)a0;
- (id)fileURLString;
- (BOOL)useMailDrop;
- (void)_setJSONDictionary:(id)a0;
- (id)mimeType;
- (void)setFileURLString:(id)a0;
- (void)setUseMailDrop:(BOOL)a0;
- (id)fileURL;
- (id)description;
- (void)setContentID:(id)a0;
- (void)setFileSize:(unsigned long long)a0;
- (unsigned long long)fileSize;

@end
