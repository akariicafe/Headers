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

- (void).cxx_destruct;
- (void)done:(BOOL)a0;
- (id)description;
- (id)initWithName:(id)a0;
- (void)applyAdjustmentIfSane:(id)a0;

@end
