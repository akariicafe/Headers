@class CIImage;

@interface PFLivePhotoFrameProcessingRequest : NSObject

@property (retain, nonatomic) CIImage *image;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property (nonatomic) long long type;
@property (nonatomic) double renderScale;

- (void).cxx_destruct;

@end
