@interface PKInkParser : NSObject

+ (id)dictionaryForInk:(id)a0 name:(id)a1;
+ (struct CGImage { } *)imageRefForTextureName:(id)a0;
+ (id)inkBehaviorsWithIdentifer:(id)a0 version:(unsigned long long)a1;
+ (id)inkRenderingDescriptorWithDictionary:(id)a0;
+ (id)inkBehaviorVariantWithDictionary:(id)a0 renderingDescriptor:(id)a1 variant:(id)a2;
+ (id)plistDictionaryForInk:(id)a0;
+ (void)validateRenderingDescriptorDictionary:(id)a0;
+ (struct unique_ptr<PKFunction, std::__1::default_delete<PKFunction> > { struct __compressed_pair<PKFunction *, std::__1::default_delete<PKFunction> > { struct PKFunction *x0; } x0; })loadFunction:(id)a0;
+ (void)validateBehaviorVariantDictionary:(id)a0;
+ (struct vector<PKOutputFunction, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction *x0; struct PKOutputFunction *x1; struct __compressed_pair<PKOutputFunction *, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction *x0; } x2; })loadOutput:(id)a0 forBehavior:(id)a1;
+ (void)verifyParameters:(id)a0;
+ (void)validateFunctionDictionary:(id)a0;
+ (void)validatePiecewiseBezierFunction:(struct PKFunctionPiecewiseBezier { void /* function */ **x0; struct vector<double, std::__1::allocator<double> > { double *x0; double *x1; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x0; } x2; } x1; struct vector<double, std::__1::allocator<double> > { double *x0; double *x1; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x0; } x2; } x2; struct vector<double, std::__1::allocator<double> > { double *x0; double *x1; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x0; } x2; } x3; struct vector<double, std::__1::allocator<double> > { double *x0; double *x1; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x0; } x2; } x4; struct vector<double, std::__1::allocator<double> > { double *x0; double *x1; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x0; } x2; } x5; struct vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > { struct vector<double, std::__1::allocator<double> > *x0; struct vector<double, std::__1::allocator<double> > *x1; struct __compressed_pair<std::__1::vector<double, std::__1::allocator<double> > *, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > { struct vector<double, std::__1::allocator<double> > *x0; } x2; } x6; struct vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > { struct vector<double, std::__1::allocator<double> > *x0; struct vector<double, std::__1::allocator<double> > *x1; struct __compressed_pair<std::__1::vector<double, std::__1::allocator<double> > *, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > { struct vector<double, std::__1::allocator<double> > *x0; } x2; } x7; } *)a0;
+ (id)controlPointArrayForInkFunction:(id)a0;
+ (void)addFunctionsIfNecessaryForInk:(id)a0 property:(unsigned long long)a1 forDictionary:(id)a2;
+ (id)dictionaryForInkFunction:(id)a0;
+ (id)stringForInkInput:(unsigned long long)a0;
+ (id)stringForFunctionMask:(id)a0;
+ (id)inkBehaviorFromDictionary:(id)a0 identifier:(id)a1 version:(unsigned long long)a2 variant:(id)a3;
+ (id)inkBehaviorsWithIdentifer:(id)a0;

@end
