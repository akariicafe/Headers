@interface FCIssueRecordSource : FCRecordSource

+ (BOOL)_useTaggedImages;
+ (id)_URLStringForCoverImageKey:(id)a0 inRecord:(id)a1;

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
- (id)recordType;

@end
