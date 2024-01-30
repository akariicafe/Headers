@class PKInkFeatheringDescriptor, NSString, PKInkParticleDescriptor, NSArray, NSMutableArray, PKInkRenderingDescriptor, PKInkSmoothingDescriptor;

@interface PKInkBehavior : NSObject {
    BOOL _timeDependent;
    BOOL _usesAzimuthOrAltitude;
    BOOL _showBrushIndicator;
    double _rulerOffsetScale;
    double _rulerOffsetConstant;
    BOOL _variableSnappedWidth;
    NSMutableArray *_cachedRadiusFunctions;
    NSMutableArray *_cachedOpacityFunctions;
    NSMutableArray *_cachedEdgeWidthFunctions;
    NSMutableArray *_cachedAspectRatioFunctions;
    struct unique_ptr<PKFunction, std::__1::default_delete<PKFunction> > { struct __compressed_pair<PKFunction *, std::__1::default_delete<PKFunction> > { struct PKFunction *__value_; } __ptr_; } _weightFunction;
    struct vector<PKOutputFunction, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction *__begin_; struct PKOutputFunction *__end_; struct __compressed_pair<PKOutputFunction *, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction *__value_; } __end_cap_; } _radiusOutput;
    struct vector<PKOutputFunction, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction *__begin_; struct PKOutputFunction *__end_; struct __compressed_pair<PKOutputFunction *, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction *__value_; } __end_cap_; } _opacityOutput;
    struct vector<PKOutputFunction, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction *__begin_; struct PKOutputFunction *__end_; struct __compressed_pair<PKOutputFunction *, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction *__value_; } __end_cap_; } _edgeWidthOutput;
    struct vector<PKOutputFunction, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction *__begin_; struct PKOutputFunction *__end_; struct __compressed_pair<PKOutputFunction *, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction *__value_; } __end_cap_; } _aspectRatioOutput;
    struct vector<PKOutputFunction, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction *__begin_; struct PKOutputFunction *__end_; struct __compressed_pair<PKOutputFunction *, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction *__value_; } __end_cap_; } _brushOpacityOutput;
}

@property (readonly, nonatomic) NSString *variant;
@property (readonly, nonatomic) PKInkRenderingDescriptor *renderingDescriptor;
@property (readonly, nonatomic) PKInkParticleDescriptor *particleDescriptor;
@property (readonly, nonatomic) NSArray *inkFunctions;
@property (nonatomic) double blendAlpha;
@property (nonatomic) double targetMultiple;
@property (nonatomic) double baseAlpha;
@property (retain, nonatomic) PKInkSmoothingDescriptor *smoothingDescriptor;
@property (retain, nonatomic) PKInkFeatheringDescriptor *featheringDescriptor;

+ (id)arrayFromVector:(struct vector<double, std::__1::allocator<double> > { double *x0; double *x1; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x0; } x2; })a0;
+ (id)inkFunctionForProperty:(unsigned long long)a0 outputFunctions:(struct vector<PKOutputFunction, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction *x0; struct PKOutputFunction *x1; struct __compressed_pair<PKOutputFunction *, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction *x0; } x2; } *)a1 index:(unsigned long long)a2;
+ (double)inkRadiusOverride;

- (void).cxx_destruct;
- (id)description;
- (id).cxx_construct;
- (BOOL)isEraser;
- (double)radiusForPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; double x5; BOOL x6; long long x7; double x8; BOOL x9; })a0 context:(struct { struct _PKStrokePoint { double x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; } x0; BOOL x1; long long x2; double x3; double x4; double x5; double x6; id x7; unsigned long long x8; } *)a1;
- (double)edgeWidthForPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; double x5; BOOL x6; long long x7; double x8; BOOL x9; })a0 context:(struct { struct _PKStrokePoint { double x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; } x0; BOOL x1; long long x2; double x3; double x4; double x5; double x6; id x7; unsigned long long x8; } *)a1;
- (id)inkFunctionsForProperty:(unsigned long long)a0;
- (struct vector<PKOutputFunction, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction *x0; struct PKOutputFunction *x1; struct __compressed_pair<PKOutputFunction *, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction *x0; } x2; } *)outputVectorForProperty:(unsigned long long)a0;
- (id)functionsForProperty:(unsigned long long)a0;
- (struct PKOutputFunction { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; struct unique_ptr<PKFunction, std::__1::default_delete<PKFunction> > { struct __compressed_pair<PKFunction *, std::__1::default_delete<PKFunction> > { struct PKFunction *x0; } x0; } x4; })outputFunctionFromInkFunction:(id)a0;
- (void)setUsesAzimuthOrAltitude:(BOOL)a0;
- (void)setTimeDependent:(BOOL)a0;
- (double)solve:(struct vector<PKOutputFunction, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction *x0; struct PKOutputFunction *x1; struct __compressed_pair<PKOutputFunction *, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction *x0; } x2; } *)a0 forPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; double x5; BOOL x6; long long x7; double x8; BOOL x9; })a1 context:(struct { struct _PKStrokePoint { double x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; } x0; BOOL x1; long long x2; double x3; double x4; double x5; double x6; id x7; unsigned long long x8; } *)a2 weight:(double)a3;
- (double)alphaForStrokeColor:(struct CGColor { } *)a0;
- (double)evaluateWeight:(double)a0;
- (double)solveForTime:(struct vector<PKOutputFunction, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction *x0; struct PKOutputFunction *x1; struct __compressed_pair<PKOutputFunction *, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction *x0; } x2; } *)a0 forTime:(double)a1 stillChanging:(BOOL *)a2;
- (id)initWithRenderingDescriptor:(id)a0 variant:(id)a1;
- (void)setWeightFunction:(struct unique_ptr<PKFunction, std::__1::default_delete<PKFunction> > { struct __compressed_pair<PKFunction *, std::__1::default_delete<PKFunction> > { struct PKFunction *x0; } x0; })a0;
- (void)inkFunctionDidChange:(id)a0;
- (void)removeInkFunction:(id)a0;
- (void)addNewInkFunction:(id)a0;
- (void)setRadiusOutput:(struct vector<PKOutputFunction, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction *x0; struct PKOutputFunction *x1; struct __compressed_pair<PKOutputFunction *, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction *x0; } x2; })a0;
- (void)setOpacityOutput:(struct vector<PKOutputFunction, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction *x0; struct PKOutputFunction *x1; struct __compressed_pair<PKOutputFunction *, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction *x0; } x2; })a0;
- (void)setEdgeWidthOutput:(struct vector<PKOutputFunction, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction *x0; struct PKOutputFunction *x1; struct __compressed_pair<PKOutputFunction *, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction *x0; } x2; })a0;
- (void)setAspectRatioOutput:(struct vector<PKOutputFunction, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction *x0; struct PKOutputFunction *x1; struct __compressed_pair<PKOutputFunction *, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction *x0; } x2; })a0;
- (void)setBrushOpacityOutput:(struct vector<PKOutputFunction, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction *x0; struct PKOutputFunction *x1; struct __compressed_pair<PKOutputFunction *, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction *x0; } x2; })a0;
- (double)particleSpacingForRadius:(double)a0;
- (double)brushOpacityForPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; double x5; BOOL x6; long long x7; double x8; BOOL x9; })a0 context:(struct { struct _PKStrokePoint { double x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; } x0; BOOL x1; long long x2; double x3; double x4; double x5; double x6; id x7; unsigned long long x8; } *)a1;
- (double)alphaForStroke:(id)a0;
- (struct _PKStrokePoint { double x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; })outputForPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; double x3; double x4; double x5; BOOL x6; long long x7; double x8; BOOL x9; })a0 context:(struct { struct _PKStrokePoint { double x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; } x0; BOOL x1; long long x2; double x3; double x4; double x5; double x6; id x7; unsigned long long x8; } *)a1;
- (struct _PKStrokePoint { double x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; })outputTimePoint:(struct _PKStrokePoint { double x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; })a0 atTime:(double)a1 stillChanging:(BOOL *)a2;
- (BOOL)immutableVelocity;
- (BOOL)isTimeDependent;
- (BOOL)usesAzimuthOrAltitude;
- (void)setShowBrushIndicator:(BOOL)a0;
- (BOOL)showBrushIndicator;
- (void)setRulerOffsetScale:(double)a0;
- (void)setRulerOffsetConstant:(double)a0;
- (BOOL)variableSnappedWidth;
- (void)setVariableSnappedWidth:(BOOL)a0;
- (double)rulerOffsetForBaseValues:(struct _PKStrokePoint { double x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; })a0 inputType:(long long)a1 inputScale:(double)a2;
- (id)particleTextureName;

@end
