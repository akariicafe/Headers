@class NSString;

@interface IMDCoreSpotlightMessageAttachmentIndexer : IMDCoreSpotlightBaseIndexer <IMDCoreSpotlightIndexer>

@property (class, readonly, nonatomic) NSString *timingProfileKey;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)indexItem:(id)a0 withChat:(id)a1 isReindexing:(BOOL)a2 metadataToUpdate:(id)a3 timingProfiler:(id)a4;
+ (id)auxiliaryItemsForPrimaryAttributes:(id)a0 withItem:(id)a1 chat:(id)a2 isReindexing:(BOOL)a3 timingProfiler:(id)a4;
+ (BOOL)messageSupportsIndexingForItem:(id)a0;
+ (id)copyAttachmentsForMessageID:(long long)a0;
+ (id)attachmentRecordsFromAttachments:(id)a0;
+ (id)copyPathFromAttachment:(struct _IMDAttachmentRecordStruct { } *)a0;
+ (id)copyGUIDFromAttachment:(struct _IMDAttachmentRecordStruct { } *)a0;
+ (id)videoComplementPathForResourceURL:(id)a0;
+ (id)livePhotoComplementKey;
+ (id)attachmentIndexTypeForPath:(id)a0 filename:(id)a1 attachmentRecord:(struct _IMDAttachmentRecordStruct { } *)a2;
+ (id)attachmentIsSyndicatableMediaKey;
+ (id)momentShareURLKey;
+ (id)assetUUIDKey;
+ (BOOL)_attachmentIsSticker:(struct _IMDAttachmentRecordStruct { } *)a0;
+ (id)_possibleVideoComplementExtensions;
+ (unsigned long long)partKeyForAttachmentFromItem:(id)a0 withGUID:(id)a1;


@end
