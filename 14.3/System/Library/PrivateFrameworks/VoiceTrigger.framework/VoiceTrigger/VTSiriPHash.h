@interface VTSiriPHash : NSObject

@property short signalEstimate;
@property unsigned char signalFractional;

+ (id)sharedPhash;
+ (unsigned long long)sampleSizeForSignalEstimate;

- (id)init;
- (unsigned short)pHash:(float *)a0 length:(int)a1;

@end
