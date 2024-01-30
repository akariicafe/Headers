@interface HMDCloudLegacyMetadataRecord : HMDCloudRecord

+ (id)legacyModelWithMetadata:(id)a0;

- (void)clearData;
- (id)data;
- (id)recordType;
- (void)setData:(id)a0;
- (id)extractObjectChange;
- (unsigned long long)objectEncoding;
- (BOOL)encodeObjectChange:(id)a0;

@end
