@class NSString;

@interface IMDCoreSpotlightMessageAttachmentIndexer : IMDCoreSpotlightBaseIndexer <IMDCoreSpotlightIndexer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)indexItem:(id)a0 withChat:(id)a1 isReindexing:(BOOL)a2 metadataToUpdate:(id)a3;
+ (id)auxiliaryItemsForPrimaryAttributes:(id)a0 withItem:(id)a1 chat:(id)a2 isReindexing:(BOOL)a3;
+ (id)copyAttachmentsForMessageID:(long long)a0;
+ (id)attachmentRecordsFromAttachments:(id)a0;
+ (id)copyPathFromAttachment:(struct _IMDAttachmentRecordStruct { } *)a0;
+ (id)attachmentIndexTypeForPath:(id)a0 filename:(id)a1 attachmentRecord:(struct _IMDAttachmentRecordStruct { } *)a2;
+ (id)copyGUIDFromAttachment:(struct _IMDAttachmentRecordStruct { } *)a0;
+ (unsigned long long)partKeyForAttachmentFromItem:(id)a0 withGUID:(id)a1;
+ (BOOL)_attachmentIsSticker:(struct _IMDAttachmentRecordStruct { } *)a0;


@end
