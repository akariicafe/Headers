@interface RAWFilter : CIFilter

+ (id)filterWithName:(id)a0;
+ (id)filterWithDefaultsForClass:(Class)a0;
+ (id)filterWithDefaultsForName:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)takeAttributesFromDictionary:(id)a0;
- (void)takeAttributesFromDictionary:(id)a0 forKeys:(id)a1;
- (id)apply:(id)a0 image:(id)a1 arguments:(id)a2 inoutSpace:(struct CGColorSpace { } *)a3 isPremultiplied:(BOOL)a4;
- (id)apply:(id)a0 image:(id)a1 extent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 roiCallback:(id /* block */)a3 arguments:(id)a4 inoutSpace:(struct CGColorSpace { } *)a5;
- (id)apply:(id)a0 image:(id)a1 extent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 roiCallback:(id /* block */)a3 arguments:(id)a4 inoutSpace:(struct CGColorSpace { } *)a5 isAlphaOne:(BOOL)a6;
- (id)apply:(id)a0 image:(id)a1 arguments:(id)a2 inoutSpace:(struct CGColorSpace { } *)a3 isPremultiplied:(BOOL)a4 isAlphaOne:(BOOL)a5;
- (void)setPrimitiveNumberValue:(id)a0 inVariable:(id *)a1 forKey:(id)a2;
- (id)applyMatrixToImage:(id)a0 vectorR:(id)a1 vectorG:(id)a2 vectorB:(id)a3 vectorBias:(id)a4 inSpace:(struct CGColorSpace { } *)a5 outSpace:(struct CGColorSpace { } *)a6;

@end
