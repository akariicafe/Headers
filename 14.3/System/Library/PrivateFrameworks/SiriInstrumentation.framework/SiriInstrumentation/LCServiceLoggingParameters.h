@class NSData, NSString;

@interface LCServiceLoggingParameters : PBCodable

@property (nonatomic) int qos;
@property (nonatomic) BOOL hasQos;
@property (nonatomic) int messageSizeQuotaInBytes;
@property (nonatomic) BOOL hasMessageSizeQuotaInBytes;
@property (nonatomic) int totalDiskSizeQuotaInBytes;
@property (nonatomic) BOOL hasTotalDiskSizeQuotaInBytes;
@property (nonatomic) BOOL optOutOfCompression;
@property (nonatomic) BOOL hasOptOutOfCompression;
@property (nonatomic) float uploadSamplingRate;
@property (nonatomic) BOOL hasUploadSamplingRate;
@property (nonatomic) float realtimeSamplingRate;
@property (nonatomic) BOOL hasRealtimeSamplingRate;
@property (copy, nonatomic) NSData *entropy;
@property (nonatomic) BOOL hasEntropy;
@property (nonatomic) BOOL overrideIntoSamplePopulation;
@property (nonatomic) BOOL hasOverrideIntoSamplePopulation;
@property (copy, nonatomic) NSString *uploadEndpointURL;
@property (nonatomic) BOOL hasUploadEndpointURL;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
