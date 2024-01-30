@class NSString;

@interface OZFxPlugColorGamutHandler : NSObject <PROAPIObject, FxColorGamutAPI> {
    void *sharedBase;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPlugin:(void *)a0;
- (unsigned long long)colorPrimaries;
- (id)colorMatrixFromDesiredRGBToYCbCr;
- (id)colorMatrixFromDesiredRGBToYCbCrAtTime:(union { double x0; struct *x1; })a0;
- (id)colorMatrixFromYCbCrToDesiredRGB;
- (id)colorMatrixFromYCbCrToDesiredRGBAtTime:(union { double x0; struct *x1; })a0;
- (BOOL)conformsToProtocol:(id)a0 version:(unsigned int)a1;
- (id)pcFloat33MatrixToFxMatrix44:(const float *)a0;

@end
