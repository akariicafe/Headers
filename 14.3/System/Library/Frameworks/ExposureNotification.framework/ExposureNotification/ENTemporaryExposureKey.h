@class NSData;

@interface ENTemporaryExposureKey : NSObject <CUXPCCodable>

@property (nonatomic) long long daysSinceOnsetOfSymptoms;
@property (nonatomic) unsigned int diagnosisReportType;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (copy, nonatomic) NSData *keyData;
@property (nonatomic) unsigned int rollingPeriod;
@property (nonatomic) unsigned int rollingStartNumber;
@property (nonatomic) unsigned char transmissionRiskLevel;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)deriveRollingProximityIdentifiersWithBuffer:(struct { unsigned char x0[16]; } *)a0 count:(unsigned long long)a1;
- (void)getAEMBytes:(void *)a0 input:(const void *)a1 length:(unsigned long long)a2 RPI:(const struct { unsigned char x0[16]; } *)a3;

@end
