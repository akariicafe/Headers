@class NSString, NSData, NSDate, NSObject, CSSearchableItem;
@protocol OS_os_log, EDBaseMessage;

@interface EDSearchableIndexItem : NSObject <EFLoggable, EDIndexableItem> {
    CSSearchableItem *_searchableItem;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) id<EDBaseMessage> message;
@property (retain, nonatomic) NSData *bodyData;
@property (nonatomic) BOOL isEncrypted;
@property (nonatomic) BOOL includeEncryptedBody;
@property (readonly, nonatomic) BOOL fetchBody;
@property (readonly, nonatomic) BOOL shouldExcludeFromIndex;
@property (nonatomic) BOOL hasCompleteData;
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
@property (readonly, nonatomic) BOOL alwaysMarkAsIndexed;
@property (readonly, nonatomic) BOOL requiresPreprocessing;

+ (id)accountIdentifierForMessage:(id)a0;
+ (id)domainIdentifierForMessage:(id)a0;
+ (id)itemWithIdentifier:(id)a0 message:(id)a1 bodyData:(id)a2 fetchBody:(BOOL)a3;
+ (id)itemWithMessage:(id)a0 bodyData:(id)a1 fetchBody:(BOOL)a2;
+ (void)mailboxIdentifiersForMessage:(id)a0 result:(id /* block */)a1;
+ (long long)indexingPriorityByIndexingType:(long long)a0;
+ (id)csIdentifierForMailbox:(id)a0;
+ (id)domainIdentifierForAccountID:(id)a0 mailboxPersistentID:(id)a1;
+ (id)peopleFromCommentedAddresses:(id)a0;

- (id)searchableItem;
- (id)initWithIdentifier:(id)a0;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (void)preprocess;
- (void)addAttachmentAttributesToAttributeSet:(id)a0;
- (id)fetchIndexableAttachments;
- (id)initWithMessage:(id)a0 bodyData:(id)a1 fetchBody:(BOOL)a2;
- (void)setNeedsAllAttributesIncludingDataDetectionResultsIndexingType;
- (void)setNeedsAllAttributesIndexingType;
- (void)_addStaticAttributesToAttributeSet:(id)a0;
- (void)addDataDetectionAttributesToAttributeSet:(id)a0;
- (void)addFlagsAttributesToAttributeSet:(id)a0;
- (void)addStaticAttributesToAttributeSet:(id)a0;
- (void)addUpdatableAttributesToAttributeSet:(id)a0;
- (id)addressesAttributeKey;
- (id)calendarEventsAttributeKey;
- (id)flightNumbersAttributeKey;
- (id)initWithIdentifier:(id)a0 message:(id)a1 bodyData:(id)a2 fetchBody:(BOOL)a3;
- (id)linksAttributeKey;
- (id)phoneNumbersAttributeKey;
- (id)trackingNumbersAttributeKey;

@end
