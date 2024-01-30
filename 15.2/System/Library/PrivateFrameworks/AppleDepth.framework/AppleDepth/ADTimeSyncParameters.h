@interface ADTimeSyncParameters : NSObject

@property unsigned int maxPrimaryStreamFramesInQueue;
@property unsigned int maxSecondaryStreamFramesInQueue;
@property float maxStreamsDiffMs;

@end
