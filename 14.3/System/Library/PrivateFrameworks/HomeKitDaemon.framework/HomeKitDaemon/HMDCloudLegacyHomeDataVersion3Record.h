@interface HMDCloudLegacyHomeDataVersion3Record : HMDCloudRecord

+ (id)legacyModelWithHomeDataV3:(id)a0;

- (void)clearData;
- (id)data;
- (id)recordType;
- (void)setData:(id)a0;
- (id)extractObjectChange;
- (unsigned long long)objectEncoding;
- (BOOL)encodeObjectChange:(id)a0;

@end
