@class NSString, TSWPDropCap;

@interface TSWPDropCapStyle : TSSStyle <TSSPreset, TSDMixing>

@property (readonly, nonatomic) TSWPDropCap *dropCap;
@property (readonly, nonatomic) TSWPDropCapStyle *variationWithSingleCharacterDropCap;
@property (readonly, nonatomic) NSString *presetKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)properties;
+ (id)defaultStyleWithContext:(id)a0;
+ (int)defaultIntValueForProperty:(int)a0;
+ (id)defaultPropertyMap;
+ (id)defaultValueForProperty:(int)a0;
+ (id)propertiesAllowingNSNull;
+ (id)dropCapProperties;

- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (void)saveToArchiver:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (unsigned long long)minimumReadVersion;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)mapNonDefaultPropertyOverridesForParentStyle:(id)a0 propertyMap:(id)a1;
- (double)resolvedFloatForProperty:(int)a0 inStyles:(id)a1;
- (int)resolvedIntForProperty:(int)a0 inStyles:(id)a1;
- (id)resolvedValueForProperty:(int)a0 inStyles:(id)a1;
- (BOOL)wantsCustomResolveLogicForProperty:(int)a0 forStyles:(id)a1;

@end
