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
    struct unique_ptr<PKFunction, std::default_delete<PKFunction>> { struct __compressed_pair<PKFunction *, std::default_delete<PKFunction>> { struct PKFunction *__value_; } __ptr_; } _weightFunction;
    struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { struct PKOutputFunction *__begin_; struct PKOutputFunction *__end_; struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { struct PKOutputFunction *__value_; } __end_cap_; } _radiusOutput;
    struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { struct PKOutputFunction *__begin_; struct PKOutputFunction *__end_; struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { struct PKOutputFunction *__value_; } __end_cap_; } _opacityOutput;
    struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { struct PKOutputFunction *__begin_; struct PKOutputFunction *__end_; struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { struct PKOutputFunction *__value_; } __end_cap_; } _edgeWidthOutput;
    struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { struct PKOutputFunction *__begin_; struct PKOutputFunction *__end_; struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { struct PKOutputFunction *__value_; } __end_cap_; } _aspectRatioOutput;
    struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { struct PKOutputFunction *__begin_; struct PKOutputFunction *__end_; struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { struct PKOutputFunction *__value_; } __end_cap_; } _brushOpacityOutput;
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
@property (readonly, nonatomic) BOOL isEraser;

+ (double)inkRadiusOverride;

- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)isEraser;
- (id)initWithRenderingDescriptor:(id)a0 variant:(id)a1;
- (id)inkFunctions;

@end
