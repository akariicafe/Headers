@class NSArray, NSDate;

@interface ENExposureWindow : NSObject <CUXPCCodable>

@property (nonatomic) unsigned char calibrationConfidence;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic) unsigned int diagnosisReportType;
@property (nonatomic) unsigned int infectiousness;
@property (copy, nonatomic) NSArray *scanInstances;
@property (nonatomic) unsigned int variantOfConcernType;

- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)description;
- (void)encodeWithXPCObject:(id)a0;
- (void).cxx_destruct;

@end
