@class NSString;

@interface IMDCoreSpotlightRecipientIndexer : IMDCoreSpotlightBaseIndexer <IMDCoreSpotlightIndexer>

@property (class, readonly, nonatomic) NSString *timingProfileKey;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)indexItem:(id)a0 withChat:(id)a1 isReindexing:(BOOL)a2 metadataToUpdate:(id)a3 timingProfiler:(id)a4;
+ (id)_contactForHandle:(struct _IMDHandleRecordStruct { } *)a0;
+ (id)_handleIDForHandle:(struct _IMDHandleRecordStruct { } *)a0;
+ (id)_selfCSPersonFromHandleID:(id)a0 messageService:(id)a1;
+ (id)suggestedContactNameCustomKey;
+ (id)suggestedContactPhotoCustomKey;
+ (id)groupPhotoPathCustomKey;


@end
