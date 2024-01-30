@interface FCPurchaseLookupRecordSource : FCRecordSource

+ (id)defaultCachePolicy;

- (id)nonLocalizableKeys;
- (id)storeFilename;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (unsigned long long)lowThresholdDataSizeLimit;
- (int)pbRecordType;
- (unsigned long long)storeVersion;
- (unsigned long long)highThresholdDataSizeLimit;
- (id)recordType;

@end
