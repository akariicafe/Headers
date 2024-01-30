@class NSString;

@interface IMDCoreSpotlightMessageBalloonPluginIndexer : IMDCoreSpotlightBaseIndexer <IMDCoreSpotlightIndexer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)indexItem:(id)a0 withChat:(id)a1 isReindexing:(BOOL)a2 metadataToUpdate:(id)a3;
+ (id)_newSummaryTextForPayloadData:(id)a0 item:(id)a1;
+ (id)lpDescriptionCustomKey;
+ (id)_pluginPayloadAttachmentPathsForItem:(id)a0;
+ (BOOL)_richLinkPluginHasRichContentForItem:(id)a0 attachmentPaths:(id)a1;
+ (id)lpHasRichMediaCustomKey;
+ (id)lpPluginPathsCustomKey;


@end
