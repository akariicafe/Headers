@class MXDisplayMetric, MXAppRunTimeMetric, MXCPUMetric, MXDiskIOMetric, MXAppResponsivenessMetric, MXLocationActivityMetric, MXGPUMetric, MXMemoryMetric, MXAppLaunchMetric, MXAnimationMetric, MXNetworkTransferMetric, MXAppExitMetric, NSArray, MXCellularConditionMetric;

@interface MXPowerlogData : MXSourceData

@property BOOL includesMultipleApplicationVersions;
@property (retain) MXCPUMetric *cpuMetrics;
@property (retain) MXGPUMetric *gpuMetrics;
@property (retain) MXCellularConditionMetric *cellularConditionMetrics;
@property (retain) MXAppRunTimeMetric *applicationTimeMetrics;
@property (retain) MXLocationActivityMetric *locationActivityMetrics;
@property (retain) MXNetworkTransferMetric *networkTransferMetrics;
@property (retain) MXAppLaunchMetric *applicationLaunchMetrics;
@property (retain) MXAppResponsivenessMetric *applicationResponsivenessMetrics;
@property (retain) MXDiskIOMetric *diskIOMetrics;
@property (retain) MXMemoryMetric *memoryMetrics;
@property (retain) MXDisplayMetric *displayMetrics;
@property (retain) MXAnimationMetric *animationMetrics;
@property (retain) MXAppExitMetric *applicationExitMetrics;
@property (retain) NSArray *signpostMetrics;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initPayloadDataWithMutipleAppVersions:(BOOL)a0 withTimeStampBegin:(id)a1 withTimeStampEnd:(id)a2 withMetrics:(id)a3;

@end
