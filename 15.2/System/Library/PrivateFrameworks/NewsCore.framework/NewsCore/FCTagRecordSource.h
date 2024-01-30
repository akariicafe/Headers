@class NSArray;

@interface FCTagRecordSource : FCRecordSource {
    NSArray *_nonLocalizableKeys;
}

@property (nonatomic) unsigned long long desiredFieldOptions;

+ (id)defaultCachePolicy;

- (id)nonLocalizableKeys;
- (id)storeFilename;
- (id)recordIDPrefixes;
- (id)alwaysLocalizedKeys;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (id)localizableKeys;
- (unsigned long long)lowThresholdDataSizeLimit;
- (int)pbRecordType;
- (unsigned long long)storeVersion;
- (unsigned long long)highThresholdDataSizeLimit;
- (void).cxx_destruct;
- (id)initWithContentDatabase:(id)a0 contentDirectory:(id)a1 experimentalizableFieldsPostfix:(id)a2 activeTreatmentID:(id)a3;
- (id)initWithContentDatabase:(id)a0 contentDirectory:(id)a1 desiredTagRecordFieldOptions:(unsigned long long)a2;
- (id)localizableLanguageSpecificKeys;
- (id)recordType;
- (id)saveTagRecords:(id)a0;
- (id)experimentalizableKeys;

@end
