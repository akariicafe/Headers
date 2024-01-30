@class NSDate;

@interface WiFiUsageLQMKernelSampleCCA : WiFiUsageLQMSample

@property (retain, nonatomic) NSDate *timestamp;
@property (nonatomic) double duration;
@property (readonly, nonatomic) unsigned long long selfCca;
@property (readonly, nonatomic) unsigned long long otherCca;
@property (readonly, nonatomic) unsigned long long interference;
@property (readonly, nonatomic) unsigned long long selfCcaSleepPerc;
@property (readonly, nonatomic) unsigned long long otherCcaSleepPerc;
@property (readonly, nonatomic) unsigned long long interferenceSleepPerc;
@property (readonly, nonatomic) unsigned long long selfCcaWakePerc;
@property (readonly, nonatomic) unsigned long long otherCcaWakePerc;
@property (readonly, nonatomic) unsigned long long interferenceWakePerc;

+ (id)sampleWithStruct:(struct ccaStats { unsigned int x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11; unsigned short x12; } *)a0 andTimestamp:(id)a1;

- (void).cxx_destruct;
- (id)initWithStruct:(struct ccaStats { unsigned int x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11; unsigned short x12; } *)a0 andTimestamp:(id)a1;

@end
