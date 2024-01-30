@class NSData;

@interface HMDCloudLegacyHomeDataRecord : HMDCloudRecord

@property (retain, nonatomic) NSData *dataVersion2;

+ (id)legacyModelWithHomeDataV0:(id)a0 homeDataV2:(id)a1;

- (void)setData:(id)a0;
- (void)clearData;
- (id)recordType;
- (id)data;
- (id)extractObjectChange;
- (unsigned long long)objectEncoding;
- (BOOL)encodeObjectChange:(id)a0;

@end
