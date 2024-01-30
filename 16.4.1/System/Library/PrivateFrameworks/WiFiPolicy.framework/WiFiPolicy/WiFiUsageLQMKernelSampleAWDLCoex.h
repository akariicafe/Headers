@class NSDate;

@interface WiFiUsageLQMKernelSampleAWDLCoex : WiFiUsageLQMSample

@property (retain, nonatomic) NSDate *timestamp;
@property (nonatomic) unsigned long long awdlActiveDurationPerc;
@property (nonatomic) double duration;

+ (id)sampleWithStruct:(struct awdlInfo { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 andTimestamp:(id)a1;

- (void).cxx_destruct;
- (id)initWithStruct:(struct awdlInfo { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 andTimestamp:(id)a1;

@end
