@class CNDetection, NSArray, PTCinematographyFrame;

@interface CNScriptFrame : NSObject <NSCopying>

@property (retain) PTCinematographyFrame *internalFrame;
@property (retain) PTCinematographyFrame *internalFrame;
@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } time;
@property (readonly) float focusDisparity;
@property (readonly) CNDetection *focusDetection;
@property (readonly) NSArray *allDetections;

+ (id)_copyFrameFromInternal:(id)a0;
+ (id)_copyFramesFromInternal:(id)a0;
+ (id)_copyInternalFromFrames:(id)a0;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)detectionForID:(long long)a0;
- (id)_initCopyingInternalFrame:(id)a0;
- (id)_initTakingInternalFrame:(id)a0;
- (id)_initWithTimedData:(id)a0;
- (id)bestDetectionForGroupID:(long long)a0;
- (id)initWithTimedMetadataGroup:(id)a0;

@end
