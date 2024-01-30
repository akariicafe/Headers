@interface HMDCloudLegacyMetadataRecord : HMDCloudRecord

+ (id)legacyModelWithMetadata:(id)a0;

- (void)setData:(id)a0;
- (void)clearData;
- (id)recordType;
- (id)data;
- (id)extractObjectChange;
- (unsigned long long)objectEncoding;
- (BOOL)encodeObjectChange:(id)a0;

@end
