@interface RBXMLRecorder_DisplayList : RBDisplayList {
    struct Tree { struct refcounted_ptr<RB::XMLRecorder::Element> { struct Element *_p; } _root; struct stack<RB::XMLRecorder::Element *, std::__1::deque<RB::XMLRecorder::Element *, std::__1::allocator<RB::XMLRecorder::Element *> > > { struct deque<RB::XMLRecorder::Element *, std::__1::allocator<RB::XMLRecorder::Element *> > { struct __split_buffer<RB::XMLRecorder::Element **, std::__1::allocator<RB::XMLRecorder::Element **> > { struct Element ***__first_; struct Element ***__begin_; struct Element ***__end_; struct __compressed_pair<RB::XMLRecorder::Element ***, std::__1::allocator<RB::XMLRecorder::Element **> > { struct Element ***__value_; } __end_cap_; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::__1::allocator<RB::XMLRecorder::Element *> > { unsigned long long __value_; } __size_; } c; } _stack; } _tree;
}

- (void)addProjectionStyleWithArray:(float[9])a0;
- (void)addShadowStyleWithRadius:(double)a0 offset:(struct CGSize { double x0; double x1; })a1 color:(struct { float x0; float x1; float x2; float x3; })a2 mode:(int)a3;
- (void)drawDisplayList:(id)a0;
- (void)drawLayerWithAlpha:(float)a0 blendMode:(int)a1;
- (void)clipLayerWithAlpha:(float)a0 mode:(int)a1;
- (void)drawShape:(id)a0 fill:(id)a1 alpha:(float)a2 blendMode:(int)a3;
- (void)concat:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)clipShape:(id)a0 mode:(int)a1;
- (void)setCTM:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)translateByX:(double)a0 Y:(double)a1;
- (void)restore;
- (void).cxx_destruct;
- (void)save;
- (void)rotateBy:(double)a0;
- (id).cxx_construct;
- (void)beginLayerWithColorSpace:(int)a0 flags:(unsigned int)a1;
- (void)addBlurFilterWithRadius:(double)a0 colorSpace:(int)a1 flags:(unsigned int)a2;
- (void)addColorMatrixFilterWithArray:(float[20])a0 colorSpace:(int)a1;
- (void)addColorMultiplyFilterWithColor:(struct { float x0; float x1; float x2; float x3; })a0 colorSpace:(int)a1;
- (void)addHueRotationFilterWithAngle:(double)a0 colorSpace:(int)a1;
- (void)addSaturationFilterWithAmount:(float)a0 colorSpace:(int)a1;
- (void)addBrightnessFilterWithAmount:(float)a0 colorSpace:(int)a1;
- (void)addContrastFilterWithAmount:(float)a0 colorSpace:(int)a1;
- (void)addLuminanceToAlphaFilterWithColorSpace:(int)a0;
- (void)addColorInvertFilterWithColorSpace:(int)a0;
- (void)addGrayscaleFilterWithAmount:(float)a0 colorSpace:(int)a1;
- (void)addColorMonochromeFilterWithAmount:(float)a0 color:(struct { float x0; float x1; float x2; float x3; })a1 bias:(float)a2 colorSpace:(int)a3;
- (void)scaleByX:(double)a0 Y:(double)a1;
- (id)xmlDescription;

@end
