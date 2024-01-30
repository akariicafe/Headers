@class FCJSONRecordSourceSchema, NSISO8601DateFormatter;

@interface FCJSONRecordSource : FCRecordSource <FCJSONRecordSourceType>

@property (copy, nonatomic) FCJSONRecordSourceSchema *schema;
@property (copy, nonatomic) NSISO8601DateFormatter *dateFormatter;

- (void).cxx_destruct;
- (id)keyValueRepresentationOfRecord:(id)a0;
- (id)recordIDPrefixes;
- (id)recordType;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (unsigned long long)lowThresholdDataSizeLimit;
- (int)pbRecordType;
- (id)alwaysLocalizedKeys;
- (unsigned long long)highThresholdDataSizeLimit;
- (id)nonLocalizableKeys;
- (void)fetchRecordsWithIDs:(id)a0 cachePolicy:(id)a1 completion:(id /* block */)a2;
- (unsigned long long)storeVersion;
- (id)initWithSchema:(id)a0 contentDatabase:(id)a1 contentDirectory:(id)a2 experimentationSuffix:(id)a3 activeTreatmentID:(id)a4;
- (void)fetchRecordsWithIDs:(id)a0 completion:(id /* block */)a1;
- (id)localizableKeys;
- (id)storeFilename;

@end
