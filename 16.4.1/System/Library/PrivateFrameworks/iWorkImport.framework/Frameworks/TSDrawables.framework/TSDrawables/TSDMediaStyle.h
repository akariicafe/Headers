@class NSString;

@interface TSDMediaStyle : TSSStyle <TSDMixing, TSSPreset>

@property (class, readonly, nonatomic) NSString *imageStylePresetStyleDescriptor;
@property (class, readonly, nonatomic) NSString *movieStylePresetStyleDescriptor;

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
+ (void)validatePastedPropertyMap:(id)a0;
+ (void)loadMediaStylePropertiesIntoPropertyMap:(id)a0 fromArchive:(const void *)a1 unarchiver:(id)a2;
+ (void)saveMediaStylePropertyMap:(id)a0 toArchive:(void *)a1 archiver:(id)a2;

- (id)boxedValueForProperty:(int)a0 oldBoxedValue:(id)a1 transformedByTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (void)saveToArchiver:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;

@end
