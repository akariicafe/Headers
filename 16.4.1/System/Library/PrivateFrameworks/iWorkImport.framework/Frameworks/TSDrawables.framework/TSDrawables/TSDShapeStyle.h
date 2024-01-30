@class NSString;

@interface TSDShapeStyle : TSSStyle <TSSPreset, TSDMixing>

@property (readonly) BOOL wantsHighContrastBackgroundColor;
@property (readonly) BOOL hasLineEnds;
@property (readonly, nonatomic) NSString *presetKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)properties;
+ (BOOL)validateFloatValue:(float *)a0 forProperty:(int)a1;
+ (float)defaultFloatValueForProperty:(int)a0;
+ (id)defaultValueForProperty:(int)a0;
+ (id)propertiesAllowingNSNull;
+ (void)loadShapeStylePropertiesIntoPropertyMap:(id)a0 fromArchive:(const void *)a1 unarchiver:(id)a2;
+ (void)saveShapeStylePropertyMap:(id)a0 toArchive:(void *)a1 archiver:(id)a2;

- (id)boxedValueForProperty:(int)a0 oldBoxedValue:(id)a1 transformedByTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (struct CGSize { double x0; double x1; })targetSizeForImageData:(id)a0 associatedHint:(id)a1;
- (void)saveToArchiver:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (BOOL)wantsHighContrastFillColorWithColor:(id)a0;
- (BOOL)wantsHighContrastStrokeColorWithColor:(id)a0;
- (BOOL)wantsHighContrastBackgroundColorWithColor:(id)a0;

@end
