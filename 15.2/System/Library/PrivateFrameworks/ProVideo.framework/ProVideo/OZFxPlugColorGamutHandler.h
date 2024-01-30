@class NSString;

@interface OZFxPlugColorGamutHandler : NSObject <PROAPIObject, FxColorGamutAPI> {
    void *sharedBase;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)colorPrimaries;
- (id)initWithPlugin:(void *)a0;
- (id)colorMatrixFromDesiredRGBToYCbCrAtTime:(union { double x0; struct *x1; })a0;
- (id)colorMatrixFromYCbCrToDesiredRGBAtTime:(union { double x0; struct *x1; })a0;
- (id)pcFloat33MatrixToFxMatrix44:(const float *)a0;
- (BOOL)conformsToProtocol:(id)a0 version:(unsigned int)a1;
- (id)colorMatrixFromDesiredRGBToYCbCr;
- (id)colorMatrixFromYCbCrToDesiredRGB;

@end
