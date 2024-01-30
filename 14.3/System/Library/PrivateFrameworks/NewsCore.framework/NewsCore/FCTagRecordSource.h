@class NSArray;

@interface FCTagRecordSource : FCRecordSource {
    NSArray *_nonLocalizableKeys;
}

@property (nonatomic) unsigned long long desiredFieldOptions;

+ (id)defaultCachePolicy;

- (void).cxx_destruct;
- (id)recordIDPrefixes;
- (id)saveTagRecords:(id)a0;
- (id)initWithContentDatabase:(id)a0 contentDirectory:(id)a1 desiredTagRecordFieldOptions:(unsigned long long)a2;
- (id)recordType;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (unsigned long long)lowThresholdDataSizeLimit;
- (int)pbRecordType;
- (id)alwaysLocalizedKeys;
- (id)localizableLanguageSpecificKeys;
- (unsigned long long)highThresholdDataSizeLimit;
- (id)nonLocalizableKeys;
- (unsigned long long)storeVersion;
- (id)localizableKeys;
- (id)initWithContentDatabase:(id)a0 contentDirectory:(id)a1 experimentalizableFieldsPostfix:(id)a2 activeTreatmentID:(id)a3;
- (id)storeFilename;
- (id)experimentalizableKeys;

@end
