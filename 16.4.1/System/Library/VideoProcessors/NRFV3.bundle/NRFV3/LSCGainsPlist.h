@class NSMutableDictionary, FigMetalContext;

@interface LSCGainsPlist : NSObject {
    NSMutableDictionary *_lscGainsByPortType;
    FigMetalContext *_metal;
}

- (void).cxx_destruct;
- (int)fillLSCGainsTextureFrom:(struct { int x0; union { struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; float x10[0]; } x0; } x1; } *)a0 tex:(id)a1 maxValuesRGBA:(float *)a2;
- (id)getCroppedTextureForPortType:(id)a0 roiRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)getTextureForPortType:(id)a0;
- (id)getTextureMaxValueForPortType:(id)a0;
- (id)initWithDictionary:(id)a0 metal:(id)a1;

@end
