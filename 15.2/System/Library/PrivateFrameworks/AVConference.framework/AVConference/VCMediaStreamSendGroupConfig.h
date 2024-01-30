@class VCSessionUplinkBandwidthAllocator;

@interface VCMediaStreamSendGroupConfig : VCMediaStreamGroupConfig

@property (retain, nonatomic) VCSessionUplinkBandwidthAllocator *uplinkBandwidthAllocator;
@property (nonatomic) BOOL shouldSynchronizeWithSourceRTPTimestamps;

- (void)dealloc;

@end
