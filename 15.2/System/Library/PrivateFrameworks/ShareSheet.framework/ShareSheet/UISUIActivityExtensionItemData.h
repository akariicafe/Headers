@class NSArray, NSMutableDictionary, NSDictionary;

@interface UISUIActivityExtensionItemData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct __CFDictionary { } *itemProviderOrExtensionItemWithMetadataToUUID;
@property (readonly, nonatomic) NSMutableDictionary *attachmentNamesByItemUUID;
@property (readonly, nonatomic) NSMutableDictionary *subjectsByItemUUID;
@property (readonly, nonatomic) NSMutableDictionary *previewImagesByItemUUID;
@property (readonly, nonatomic) NSMutableDictionary *previewImageDataByItemUUID;
@property (readonly, nonatomic) NSMutableDictionary *dataTypesByItemUUID;
@property (retain, nonatomic) NSArray *extensionItems;
@property (retain, nonatomic) NSDictionary *openURLAnnotationsByURL;

+ (id)_extensionItemsByPreparingToSendExtensionItems:(id)a0 toDestinationExtension:(id)a1;
+ (id)_onBackgroundQueue_extensionItemsByPreparingToSendExtensionItems:(id)a0 toDestinationExtension:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)allDataTypes;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)prepareForSendingToExtension:(id)a0;
- (void)addAttachmentName:(id)a0 forItem:(id)a1;
- (id)attachmentNameForItem:(id)a0;
- (void)addSubject:(id)a0 forItem:(id)a1;
- (id)subjectForItem:(id)a0;
- (void)addPreviewImage:(id)a0 forItem:(id)a1;
- (id)previewImageForItem:(id)a0;
- (void)addPreviewImageData:(id)a0 forItem:(id)a1;
- (id)previewImageDataForItem:(id)a0;
- (void)addDataType:(id)a0 forItem:(id)a1;
- (id)dataTypeForItem:(id)a0;
- (void)_loadItemProviderOrExtensionItemWithMetadataToUUIDFromTemporaryUUIDMappingAttachedToExtensionItems:(id)a0;
- (void)_removeTemporaryUUIDMappingAttachmentFromExtensionItems:(id)a0;
- (void)dealloc;
- (void)_appendTemporaryUUIDMappingAttachmentToExtensionItem:(id)a0;
- (id)_getItemUUIDForItem:(id)a0 createIfNeeded:(BOOL)a1;
- (void)_setItemUUID:(id)a0 forItem:(id)a1;
- (void)_changeUUIDMappingFromExtensionItems:(id)a0 toClonedExtensionItems:(id)a1;
- (id)_uuidMappingDataForTemporaryAttachmentToExtensionItem:(id)a0 attachments:(id)a1;
- (void)prepareForSendingAsCompletionToHostWithAuditToken:(struct { unsigned int x0[8]; })a0;

@end
