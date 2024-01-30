@class NSString;

@interface IMDCoreSpotlightMessageAttachmentIndexer : IMDCoreSpotlightBaseIndexer <IMDCoreSpotlightIndexer>

@property (class, readonly, nonatomic) NSString *timingProfileKey;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)messageSupportsIndexingForItem:(id)a0;
+ (BOOL)_attachmentIsSticker:(id)a0;
+ (id)_possibleVideoComplementExtensions;
+ (id)assetUUIDKey;
+ (id)attachmentIndexTypeForPath:(id)a0 filename:(id)a1 isSticker:(BOOL)a2 isCommSafetySensitive:(BOOL)a3;
+ (id)attachmentIsSyndicatableMediaKey;
+ (id)attachmentRecordsFromAttachments:(id)a0;
+ (id)auxiliaryItemsForPrimaryAttributes:(id)a0 withItem:(id)a1 chat:(id)a2 isReindexing:(BOOL)a3 timingProfiler:(id)a4;
+ (void)indexItem:(id)a0 withChat:(id)a1 isReindexing:(BOOL)a2 metadataToUpdate:(id)a3 timingProfiler:(id)a4;
+ (id)livePhotoComplementKey;
+ (id)momentShareURLKey;
+ (unsigned long long)partKeyForAttachmentFromItem:(id)a0 withGUID:(id)a1;
+ (id)videoComplementPathForResourceURL:(id)a0;


@end
