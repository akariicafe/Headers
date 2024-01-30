@class NSString, NSObject;
@protocol OS_os_log;

@interface MFSearchableIndexItem_iOS : EDSearchableIndexItem <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)suggestionsSearchableItemWithMessage:(id)a0;
+ (id)searchableIndexItemWithIdentifier:(id)a0 message:(id)a1 type:(long long)a2;
+ (id)searchableIndexItemsFromMessages:(id)a0 type:(long long)a1;

- (void)preprocess;
- (BOOL)shouldExcludeFromIndex;
- (void)setNeedsAllAttributesIndexingType;
- (BOOL)_shouldAutoDownloadAttachment:(id)a0;
- (void)addAttachmentAttributesToAttributeSet:(id)a0;
- (id)fetchIndexableAttachments;

@end
