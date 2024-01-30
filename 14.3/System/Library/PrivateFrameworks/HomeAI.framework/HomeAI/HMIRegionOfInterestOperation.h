@class NSError, HMICameraVideoFrame;

@interface HMIRegionOfInterestOperation : NSOperation

@property (readonly) struct __CVBuffer { } *pixelBuffer;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (readonly, weak) HMICameraVideoFrame *frame;
@property (readonly) struct CGSize { double width; double height; } size;
@property (readonly) NSError *error;

- (void).cxx_destruct;
- (void)dealloc;
- (void)main;
- (id)initWithFrame:(id)a0 size:(struct CGSize { double x0; double x1; })a1;

@end
