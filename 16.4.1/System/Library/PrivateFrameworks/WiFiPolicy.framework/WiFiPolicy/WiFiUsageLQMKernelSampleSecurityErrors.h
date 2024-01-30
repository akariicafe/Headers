@class NSDate;

@interface WiFiUsageLQMKernelSampleSecurityErrors : WiFiUsageLQMSample

@property (retain, nonatomic) NSDate *timestamp;
@property (nonatomic) unsigned long long rxUcastReplayError;
@property (nonatomic) unsigned long long rxucastDecryptError;
@property (nonatomic) unsigned long long rxmcastReplayError;
@property (nonatomic) unsigned long long rxmcastDecryptError;
@property (nonatomic) double duration;

+ (id)featureFromFieldName:(id)a0;
+ (id)sampleWithStruct:(struct rxSecurityInfo { unsigned int x0; int x1; int x2; int x3; int x4; } *)a0 andTimestamp:(id)a1;

- (void).cxx_destruct;
- (id)initWithStruct:(struct rxSecurityInfo { unsigned int x0; int x1; int x2; int x3; int x4; } *)a0 andTimestamp:(id)a1;

@end
