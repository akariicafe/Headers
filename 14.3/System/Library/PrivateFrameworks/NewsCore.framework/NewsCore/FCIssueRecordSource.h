@interface FCIssueRecordSource : FCRecordSource

+ (BOOL)_useTaggedImages;
+ (id)_URLStringForCoverImageKey:(id)a0 inRecord:(id)a1;

- (id)recordIDPrefixes;
- (id)recordType;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (unsigned long long)lowThresholdDataSizeLimit;
- (int)pbRecordType;
- (id)alwaysLocalizedKeys;
- (unsigned long long)highThresholdDataSizeLimit;
- (id)nonLocalizableKeys;
- (unsigned long long)storeVersion;
- (id)localizableKeys;
- (id)storeFilename;

@end
