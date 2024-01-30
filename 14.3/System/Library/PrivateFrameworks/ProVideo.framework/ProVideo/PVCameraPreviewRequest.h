@class NSDictionary, NSMutableArray, NSArray;

@interface PVCameraPreviewRequest : NSObject

@property (nonatomic) struct opaqueCMSampleBuffer { } *sampleBuffer;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property (nonatomic) BOOL mirrored;
@property (retain, nonatomic) NSMutableArray *effects;
@property (copy, nonatomic) NSDictionary *effectProperties;
@property (copy, nonatomic) NSArray *metadataObjects;

- (void).cxx_destruct;
- (oneway void)dealloc;

@end
