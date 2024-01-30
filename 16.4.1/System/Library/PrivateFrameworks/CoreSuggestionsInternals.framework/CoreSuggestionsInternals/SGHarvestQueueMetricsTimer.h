@class NSString;

@interface SGHarvestQueueMetricsTimer : NSObject {
    unsigned long long _cpuStart;
    unsigned long long _cpuEnd;
    unsigned long long _durationStart;
    unsigned long long _signpostId;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) double cpu;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) BOOL significantWork;

- (id)initWithName:(id)a0;
- (void)done:(BOOL)a0;
- (id)description;
- (void).cxx_destruct;
- (void)applyAdjustmentIfSane:(id)a0;

@end
