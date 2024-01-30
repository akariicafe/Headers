@class EDSearchableIndexAttachmentItemMetadatum, NSString, CSSearchableItem, NSData, NSDate, EFPromise, NSObject;
@protocol OS_os_log;

@interface EDSearchableIndexAttachmentItem : NSObject <EFLoggable, EDIndexableItem> {
    CSSearchableItem *_searchableItem;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) EFPromise *attributeSetForFilePromise;
@property (copy, nonatomic) NSString *attachmentPersistentID;
@property (copy, nonatomic) NSString *messagePersistentID;
@property (retain, nonatomic) EDSearchableIndexAttachmentItemMetadatum *metadatum;
@property (nonatomic) BOOL requiresPreprocessing;
@property (nonatomic) double searchableItemProcessingDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *domainIdentifier;
@property (nonatomic) long long indexingType;
@property (readonly, nonatomic) NSDate *dateReceived;
@property (readonly, nonatomic) unsigned long long itemInstantiationTime;
@property (readonly, nonatomic) unsigned long long estimatedSizeInBytes;
@property (retain, nonatomic) NSData *underlyingData;
@property (readonly, nonatomic) BOOL hasCompleteData;
@property (readonly, nonatomic) BOOL alwaysMarkAsIndexed;
@property (readonly, nonatomic) BOOL shouldExcludeFromIndex;

+ (id)attachmentPersistentIDFromItemIdentifier:(id)a0;
+ (id)identifierForAttachmentPersistentID:(id)a0;

- (id)searchableItem;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (void)preprocess;
- (id)fetchIndexableAttachments;
- (void)setNeedsAllAttributesIncludingDataDetectionResultsIndexingType;
- (void)setNeedsAllAttributesIndexingType;
- (id)initWithAttachmentPersistentID:(id)a0 messagePersistentID:(id)a1 metadatum:(id)a2;

@end
