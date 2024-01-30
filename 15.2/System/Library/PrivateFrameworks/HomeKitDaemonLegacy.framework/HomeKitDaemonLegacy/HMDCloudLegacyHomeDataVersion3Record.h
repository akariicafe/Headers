@interface HMDCloudLegacyHomeDataVersion3Record : HMDCloudRecord

+ (id)legacyModelWithHomeDataV3:(id)a0;

- (void)setData:(id)a0;
- (void)clearData;
- (id)recordType;
- (id)data;
- (id)extractObjectChange;
- (unsigned long long)objectEncoding;
- (BOOL)encodeObjectChange:(id)a0;

@end
