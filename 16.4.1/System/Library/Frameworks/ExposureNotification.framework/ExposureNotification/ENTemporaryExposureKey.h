@class NSData;

@interface ENTemporaryExposureKey : NSObject <CUXPCCodable>

@property (nonatomic) long long daysSinceOnsetOfSymptoms;
@property (nonatomic) unsigned int diagnosisReportType;
@property (nonatomic) BOOL vaccinated;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (nonatomic) BOOL revised;
@property (nonatomic) unsigned int variantOfConcernType;
@property (nonatomic) unsigned int originalVariantOfConcernType;
@property (copy, nonatomic) NSData *keyData;
@property (nonatomic) unsigned int rollingPeriod;
@property (nonatomic) unsigned int rollingStartNumber;
@property (nonatomic) unsigned char transmissionRiskLevel;

- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)deriveRollingProximityIdentifiersWithBuffer:(struct { unsigned char x0[16]; } *)a0 count:(unsigned long long)a1;
- (void)getAEMBytes:(void *)a0 input:(const void *)a1 length:(unsigned long long)a2 RPI:(const struct { unsigned char x0[16]; } *)a3;

@end
