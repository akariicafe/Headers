@class NSMutableDictionary;

@interface MFAttachmentPlaceholder : NSObject {
    NSMutableDictionary *_jsonDictionary;
}

+ (id)placeholder;
+ (BOOL)isPlaceholderSerializedRepresentation:(id)a0;
+ (id)placeholderFromSerializedRepresentation:(id)a0;
+ (id)dataForPlaceholder:(id)a0;
+ (id)_placeholderMagic;

- (id)serializedRepresentation;
- (unsigned long long)fileSize;
- (void)setFileName:(id)a0;
- (void)setFileSize:(unsigned long long)a0;
- (id)fileURL;
- (id)fileName;
- (id)contentID;
- (void)setMimeType:(id)a0;
- (id)mimeType;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)setContentID:(id)a0;
- (id)fileURLString;
- (BOOL)useMailDrop;
- (void)_setJSONDictionary:(id)a0;
- (void)setFileURLString:(id)a0;
- (void)setUseMailDrop:(BOOL)a0;

@end
