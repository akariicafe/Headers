@interface VCVideoFECStatsHolder : NSObject

@property unsigned long long totalFECDataByteCount;
@property unsigned long long totalFECParityByteCount;
@property unsigned int totalFECFrameCount;
@property unsigned int completeFECFrameCount;
@property unsigned int failedFECFrameCount;
@property unsigned int unfixableFECFrameCount;

- (void)merge:(id)a0;

@end
