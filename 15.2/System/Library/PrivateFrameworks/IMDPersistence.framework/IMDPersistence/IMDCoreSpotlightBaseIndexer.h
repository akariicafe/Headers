@class NSString;

@interface IMDCoreSpotlightBaseIndexer : NSObject <IMDCoreSpotlightIndexer>

@property (class, readonly, nonatomic) NSString *timingProfileKey;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)cancelIndexingForItem:(id)a0;
+ (void)indexItem:(id)a0 withChat:(id)a1 isReindexing:(BOOL)a2 metadataToUpdate:(id)a3 timingProfiler:(id)a4;
+ (id)auxiliaryItemsForPrimaryAttributes:(id)a0 withItem:(id)a1 chat:(id)a2 isReindexing:(BOOL)a3 timingProfiler:(id)a4;
+ (id)indexTypeCustomKey;
+ (id)isFromMeCustomKey;
+ (id)isBusinessChatCustomKey;
+ (id)messageServiceCustomKey;
+ (id)chatUniqueIdentifierKey;
+ (void)startTimingWithProfiler:(id)a0;
+ (void)stopTimingWithProfiler:(id)a0;


@end
