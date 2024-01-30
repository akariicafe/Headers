@class TSUBezierPath, NSString;

@interface TSDPathSource : NSObject <TSDMixing, NSCopying>

@property (readonly, nonatomic) BOOL isRectangular;
@property (readonly, nonatomic) BOOL isRectangularForever;
@property (readonly, nonatomic) BOOL isCircular;
@property (readonly, copy, nonatomic) TSUBezierPath *bezierPath;
@property (readonly, copy, nonatomic) TSUBezierPath *bezierPathWithoutFlips;
@property (readonly, copy, nonatomic) TSUBezierPath *interiorWrapPath;
@property (readonly, nonatomic) Class preferredControllerClass;
@property (nonatomic) struct CGSize { double x0; double x1; } naturalSize;
@property (readonly, nonatomic) BOOL isClosed;
@property (nonatomic) BOOL hasHorizontalFlip;
@property (nonatomic) BOOL hasVerticalFlip;
@property (readonly, nonatomic, getter=isClosed) BOOL closed;
@property (copy, nonatomic) NSString *localizationKey;
@property (copy, nonatomic) NSString *userDefinedIdentifier;
@property (copy, nonatomic) NSString *userDefinedName;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *inferredAccessibilityDescription;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } pathFlipTransform;

+ (id)pathSourceForShapeType:(long long)a0 naturalSize:(struct CGSize { double x0; double x1; })a1;
+ (id)pathSourceWithArchive:(const void *)a0;

- (id)initWithArchive:(const void *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)saveToArchive:(void *)a0;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (void)scaleToNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (double)uniformScaleForScalingToNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (id)interiorWrapPathForInset:(double)a0 joinStyle:(unsigned long long)a1;
- (void)loadSharedFromArchive:(const void *)a0;
- (void)saveSharedToArchive:(void *)a0;

@end
