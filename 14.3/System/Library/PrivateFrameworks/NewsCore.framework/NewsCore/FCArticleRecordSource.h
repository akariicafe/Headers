@class NSArray;

@interface FCArticleRecordSource : FCRecordSource {
    NSArray *_nonLocalizableKeys;
    NSArray *_localizableKeys;
    NSArray *_alwaysLocalizedKeys;
}

@property (readonly, nonatomic) NSArray *engagementRecordKeys;
@property (readonly, nonatomic) NSArray *conversionRecordKeys;

+ (BOOL)useTaggedImages;
+ (BOOL)supportsDeletions;
+ (id)changeTagFromCKRecord:(id)a0;
+ (id)identifierFromCKRecord:(id)a0;
+ (id)modificationDateFromCKRecord:(id)a0;
+ (id)canaryRecordName;

- (void).cxx_destruct;
- (id)localizableExperimentalizableKeys;
- (id)recordIDPrefixes;
- (id)saveArticleRecords:(id)a0;
- (id)recordType;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (id)saveFeedItemAndArticleRecords:(id)a0;
- (unsigned long long)lowThresholdDataSizeLimit;
- (int)pbRecordType;
- (id)alwaysLocalizedKeys;
- (unsigned long long)highThresholdDataSizeLimit;
- (id)urlStringForThumbnailKey:(id)a0 inRecord:(id)a1;
- (id)engagementDataFromCKRecord:(id)a0;
- (id)nonLocalizableKeys;
- (unsigned long long)storeVersion;
- (id)localizableKeys;
- (id)initWithContentDatabase:(id)a0 contentDirectory:(id)a1 desiredArticleRecordFieldOptions:(unsigned long long)a2 experimentalizableFieldsPostfix:(id)a3 engagementCohortsExpField:(id)a4 conversionCohortsExpField:(id)a5 activeTreatmentID:(id)a6;
- (id)initWithContentDatabase:(id)a0 contentDirectory:(id)a1 experimentalizableFieldsPostfix:(id)a2 activeTreatmentID:(id)a3;
- (id)storeFilename;
- (id)experimentalizableKeys;
- (id)conversionDataFromCKRecord:(id)a0;

@end
