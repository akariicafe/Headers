@interface ICLegacyContentUtilities : NSObject

+ (id)contentStringFromWebArchive:(id)a0;
+ (id)createAttachmentFromWebResource:(id)a0 inContext:(id)a1;
+ (id)newNoteBasedOnModernNote:(id)a0 inFolder:(id)a1 context:(id)a2;
+ (id)createAttachmentWithContentID:(id)a0 mimeType:(id)a1 data:(id)a2 filename:(id)a3 inContext:(id)a4;
+ (id)generateContentID;
+ (id)suggestedFilenameForURL:(id)a0 mimeType:(id)a1;

@end
