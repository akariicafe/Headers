@class NSData, NSString;

@interface LCServiceLoggingParameters : SISchemaInstrumentationMessage {
    struct { unsigned char qos : 1; unsigned char messageSizeQuotaInBytes : 1; unsigned char totalDiskSizeQuotaInBytes : 1; unsigned char optOutOfCompression : 1; unsigned char uploadSamplingRate : 1; unsigned char realtimeSamplingRate : 1; unsigned char overrideIntoSamplePopulation : 1; } _has;
}

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

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)deleteTotalDiskSizeQuotaInBytes;
- (void)deleteEntropy;
- (void)deleteMessageSizeQuotaInBytes;
- (void)deleteOptOutOfCompression;
- (void)deleteOverrideIntoSamplePopulation;
- (void)deleteQos;
- (void)deleteRealtimeSamplingRate;
- (void)deleteUploadEndpointURL;
- (void)deleteUploadSamplingRate;

@end
