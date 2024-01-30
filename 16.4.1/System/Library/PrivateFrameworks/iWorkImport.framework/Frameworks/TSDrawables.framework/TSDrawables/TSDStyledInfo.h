@class TSDShadow, NSString, TSDReflection, NSArray, TSSStyle, TSDStroke, NSSet;

@interface TSDStyledInfo : TSDDrawableInfo <TSDStyleOwning, TSSStyleClient>

@property (copy, nonatomic) TSDReflection *reflection;
@property (copy, nonatomic) TSDShadow *shadow;
@property (copy, nonatomic) TSDStroke *stroke;
@property (nonatomic) float opacity;
@property (readonly, nonatomic) BOOL pathIsOpen;
@property (readonly, nonatomic) BOOL supportsStyleInspecting;
@property (readonly, nonatomic) NSString *styleIdentifierTemplateForNewPreset;
@property (readonly, nonatomic) NSArray *stylesForCopyStyle;
@property (retain, nonatomic) TSSStyle *style;
@property (readonly, nonatomic) Class styleClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSSet *referencedStyles;

- (id)objectForProperty:(int)a0;
- (BOOL)isSelectable;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (id)boxedValueForProperty:(int)a0;
- (void)i_setValue:(id)a0 forProperty:(int)a1;
- (id)propertyMapForNewPreset;
- (void)replaceReferencedStylesUsingBlock:(id /* block */)a0;
- (void)setBoxedValue:(id)a0 forProperty:(int)a1;
- (void)setValuesForProperties:(id)a0;
- (id)pastedPropertyMapForStyle:(id)a0 tailLineEndInfo:(int)a1;
- (void)i_setValue:(id)a0 forProperty:(int)a1 inStylesheet:(id)a2;

@end
