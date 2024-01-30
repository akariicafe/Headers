@class NSMutableDictionary;

@interface MFAttachmentPlaceholder : NSObject {
    NSMutableDictionary *_jsonDictionary;
}

+ (id)placeholder;
+ (id)_placeholderMagic;
+ (id)dataForPlaceholder:(id)a0;
+ (BOOL)isPlaceholderSerializedRepresentation:(id)a0;
+ (id)placeholderFromSerializedRepresentation:(id)a0;

- (unsigned long long)fileSize;
- (void)setFileSize:(unsigned long long)a0;
- (void)setFileName:(id)a0;
- (id)fileURL;
- (void)setMimeType:(id)a0;
- (id)serializedRepresentation;
- (id)contentID;
- (void)dealloc;
- (id)fileName;
- (id)mimeType;
- (id)init;
- (id)description;
- (void)setContentID:(id)a0;
- (void)setUseMailDrop:(BOOL)a0;
- (void)_setJSONDictionary:(id)a0;
- (id)fileURLString;
- (void)setFileURLString:(id)a0;
- (BOOL)useMailDrop;

@end
