@interface FCForYouConfigRecordSource : FCRecordSource

- (id)recordIDPrefixes;
- (id)recordType;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (unsigned long long)lowThresholdDataSizeLimit;
- (int)pbRecordType;
- (unsigned long long)highThresholdDataSizeLimit;
- (id)nonLocalizableKeys;
- (unsigned long long)storeVersion;
- (id)storeFilename;

@end
