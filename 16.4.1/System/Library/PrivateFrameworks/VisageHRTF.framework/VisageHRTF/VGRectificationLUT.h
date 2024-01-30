@class NSData;

@interface VGRectificationLUT : NSObject {
    NSData *_lookupTable;
    struct CGPoint { double x; double y; } _opticalCenter;
}

- (void).cxx_destruct;
- (id)initWithLookupTable:(id)a0 withDistortionOpticalCenter:(struct CGPoint { double x0; double x1; })a1;
- (void)undistortImage:(struct __CVBuffer { } *)a0 toRectilinearImage:(struct __CVBuffer { } *)a1;

@end
