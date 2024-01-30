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

+ (BOOL)useTaggedImages;
+ (id)identifierFromCKRecord:(id)a0;
+ (BOOL)supportsDeletions;
+ (id)canaryRecordName;
+ (id)changeTagFromCKRecord:(id)a0;
+ (id)modificationDateFromCKRecord:(id)a0;

- (id)nonLocalizableKeys;
- (id)storeFilename;
- (id)recordIDPrefixes;
- (id)alwaysLocalizedKeys;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (id)localizableKeys;
- (unsigned long long)lowThresholdDataSizeLimit;
- (int)pbRecordType;
- (unsigned long long)storeVersion;
- (id)articleTopicsFromCKRecord:(id)a0 engagement:(id)a1 conversionStats:(id)a2 tagMetadata:(id)a3;
- (id)engagementFromCKRecord:(id)a0;
- (id)conversionStatsFromCKRecord:(id)a0;
- (id)initWithContentDatabase:(id)a0 contentDirectory:(id)a1 desiredArticleRecordFieldOptions:(unsigned long long)a2 experimentalizableFieldsPostfix:(id)a3 engagementCohortsExpField:(id)a4 conversionCohortsExpField:(id)a5 activeTreatmentID:(id)a6;
- (id)saveArticleRecords:(id)a0;
- (unsigned long long)highThresholdDataSizeLimit;
- (void).cxx_destruct;
- (id)saveFeedItemAndArticleRecords:(id)a0;
- (id)initWithContentDatabase:(id)a0 contentDirectory:(id)a1 experimentalizableFieldsPostfix:(id)a2 activeTreatmentID:(id)a3;
- (id)topicFlagsFromCKRecord:(id)a0;
- (id)recordType;
- (void)updateEngagementCohortsExpField:(id)a0 conversionCohortsExpField:(id)a1;
- (id)localizableExperimentalizableKeys;
- (void)_setEngagementCohortsExpField:(id)a0 conversionCohortsExpField:(id)a1;
- (id)urlStringForThumbnailKey:(id)a0 inRecord:(id)a1;
- (id)articleTagMetadataFromCKRecord:(id)a0;
- (id)experimentalizableKeys;

@end
