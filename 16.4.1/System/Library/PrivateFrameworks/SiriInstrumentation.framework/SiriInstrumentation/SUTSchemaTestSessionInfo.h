@class NSString, NSArray, NSData;

@interface SUTSchemaTestSessionInfo : SISchemaInstrumentationMessage {
    struct { unsigned char isSimulator : 1; } _has;
}

@property (copy, nonatomic) NSString *systemBuild;
@property (nonatomic) BOOL hasSystemBuild;
@property (copy, nonatomic) NSString *cpuArchitecture;
@property (nonatomic) BOOL hasCpuArchitecture;
@property (copy, nonatomic) NSString *hardwareModel;
@property (nonatomic) BOOL hasHardwareModel;
@property (copy, nonatomic) NSString *modelNumber;
@property (nonatomic) BOOL hasModelNumber;
@property (copy, nonatomic) NSString *productType;
@property (nonatomic) BOOL hasProductType;
@property (copy, nonatomic) NSString *productVersion;
@property (nonatomic) BOOL hasProductVersion;
@property (nonatomic) BOOL isSimulator;
@property (nonatomic) BOOL hasIsSimulator;
@property (copy, nonatomic) NSString *bundleId;
@property (nonatomic) BOOL hasBundleId;
@property (copy, nonatomic) NSString *deviceName;
@property (nonatomic) BOOL hasDeviceName;
@property (copy, nonatomic) NSArray *testSessionInfoItems;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)addTestSessionInfoItem:(id)a0;
- (void)clearTestSessionInfoItem;
- (void)deleteBundleId;
- (void)deleteCpuArchitecture;
- (void)deleteDeviceName;
- (void)deleteHardwareModel;
- (void)deleteIsSimulator;
- (void)deleteModelNumber;
- (void)deleteProductType;
- (void)deleteProductVersion;
- (void)deleteSystemBuild;
- (void)deleteTestSessionInfoItem;
- (id)testSessionInfoItemAtIndex:(unsigned long long)a0;
- (unsigned long long)testSessionInfoItemCount;

@end
