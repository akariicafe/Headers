@class KNMotionBackgroundStyle;

@interface KNSlideStyle : TSSStyle

@property (readonly, nonatomic) KNMotionBackgroundStyle *motionBackgroundStyle;

+ (id)properties;
+ (id)defaultStyleWithContext:(id)a0;
+ (id)defaultValueForProperty:(int)a0;
+ (id)propertiesAllowingNSNull;
+ (void)createStylePresetInStylesheet:(id)a0;

- (id)initWithContext:(id)a0 name:(id)a1 overridePropertyMap:(id)a2 isVariation:(BOOL)a3;
- (struct CGSize { double x0; double x1; })targetSizeForImageData:(id)a0 associatedHint:(id)a1;
- (void)loadSlideStylePropertiesIntoPropertyMap:(id)a0 fromArchive:(const void *)a1 unarchiver:(id)a2;
- (void)saveToArchiver:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)referencedStyleWasUpdated:(id)a0;
- (void)saveSlideStylePropertyMap:(id)a0 toArchive:(void *)a1 archiver:(id)a2;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;

@end
