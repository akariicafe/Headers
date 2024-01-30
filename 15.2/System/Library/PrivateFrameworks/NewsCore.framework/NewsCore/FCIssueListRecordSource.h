@interface FCIssueListRecordSource : FCRecordSource

- (id)nonLocalizableKeys;
- (id)storeFilename;
- (id)recordIDPrefixes;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (unsigned long long)lowThresholdDataSizeLimit;
- (int)pbRecordType;
- (unsigned long long)storeVersion;
- (unsigned long long)highThresholdDataSizeLimit;
- (id)recordType;

@end
