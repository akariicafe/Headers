@interface ICLegacyAttachmentUtilities : NSObject

+ (id)typeUTIFromFileURL:(id)a0 mimeType:(id)a1;
+ (void)importFileAtURL:(id)a0 toAttachment:(id)a1 attachmentPreviewGenerator:(id)a2;
+ (id)contentIDStringFromCIDURL:(id)a0;
+ (void)importLegacyAttachment:(id)a0 toNote:(id)a1 attachmentPreviewGenerator:(id)a2;
+ (id)attachmentWithContentID:(id)a0 context:(id)a1;

@end
