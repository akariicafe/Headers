@interface BCCloudDataNullPrivacyDelegate : NSObject <BCCloudDataPrivacyDelegate>

+ (id)nullPrivacyDelegate;

- (BOOL)establishedSalt;
- (id)recordNameFromRecordType:(id)a0 identifier:(id)a1;

@end
