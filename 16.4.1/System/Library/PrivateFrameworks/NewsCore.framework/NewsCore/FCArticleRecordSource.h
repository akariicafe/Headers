@class NSString, NSArray, NFUnfairLock;

@interface FCArticleRecordSource : FCRecordSource

@property (retain, nonatomic) NFUnfairLock *experimentalFieldsLock;
@property (nonatomic) unsigned long long desiredArticleRecordFieldOptions;
@property (retain, nonatomic) NSString *engagementCohortsExpField;
@property (retain, nonatomic) NSString *conversionCohortsExpField;
@property (retain, nonatomic) NSArray *engagementRecordKeys;
@property (retain, nonatomic) NSArray *conversionRecordKeys;
@property (retain, nonatomic) NSArray *topicFlagsRecordKeys;
@property (retain, nonatomic) NSArray *articleTagMetadataRecordKeys;
@property (retain, nonatomic) NSArray *embeddingRecordKeys;

+ (id)changeTagFromCKRecord:(id)a0;
+ (id)identifierFromCKRecord:(id)a0;
+ (BOOL)supportsDeletions;
+ (id)modificationDateFromCKRecord:(id)a0;
+ (BOOL)useTaggedImages;
+ (id)canaryRecordName;

- (unsigned long long)storeVersion;
- (int)pbRecordType;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (id)storeFilename;
- (id)nonLocalizableKeys;
- (unsigned long long)lowThresholdDataSizeLimit;
- (unsigned long long)highThresholdDataSizeLimit;
- (id)conversionStatsFromCKRecord:(id)a0;
- (id)experimentalizableKeys;
- (id)topicFlagsFromCKRecord:(id)a0;
- (id)recordIDPrefixes;
- (id)urlStringForThumbnailKey:(id)a0 inRecord:(id)a1;
- (void)updateEngagementCohortsExpField:(id)a0 conversionCohortsExpField:(id)a1;
- (id)alwaysLocalizedKeys;
- (id)saveArticleRecords:(id)a0;
- (id)initWithContentDatabase:(id)a0 contentDirectory:(id)a1 appActivityMonitor:(id)a2 backgroundTaskable:(id)a3 experimentalizableFieldsPostfix:(id)a4 activeTreatmentID:(id)a5;
- (id)localizableKeys;
- (id)initWithContentDatabase:(id)a0 contentDirectory:(id)a1 appActivityMonitor:(id)a2 backgroundTaskable:(id)a3 desiredArticleRecordFieldOptions:(unsigned long long)a4 experimentalizableFieldsPostfix:(id)a5 engagementCohortsExpField:(id)a6 conversionCohortsExpField:(id)a7 activeTreatmentID:(id)a8;
- (id)articleTopicsFromCKRecord:(id)a0 engagement:(id)a1 conversionStats:(id)a2 tagMetadata:(id)a3;
- (id)localizableExperimentalizableKeys;
- (void)_setEngagementCohortsExpField:(id)a0 conversionCohortsExpField:(id)a1;
- (id)engagementFromCKRecord:(id)a0;
- (id)articleTagMetadataFromCKRecord:(id)a0;
- (void).cxx_destruct;
- (id)recordType;
- (id)saveFeedItemAndArticleRecords:(id)a0;

@end
