@class NSString;

@interface IMDCoreSpotlightMessageSubjectIndexer : IMDCoreSpotlightBaseIndexer <IMDCoreSpotlightIndexer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)indexItem:(id)a0 withChat:(id)a1 isReindexing:(BOOL)a2 metadataToUpdate:(id)a3;


@end
