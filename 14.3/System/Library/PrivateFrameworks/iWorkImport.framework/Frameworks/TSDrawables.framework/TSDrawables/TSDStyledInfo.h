@class TSDShadow, NSString, TSDReflection, TSSStyle, TSDStroke;

@interface TSDStyledInfo : TSDDrawableInfo <TSDStyleOwning, TSSStyleClient>

@property (copy, nonatomic) TSDReflection *reflection;
@property (copy, nonatomic) TSDShadow *shadow;
@property (copy, nonatomic) TSDStroke *stroke;
@property (nonatomic) float opacity;
@property (readonly, nonatomic) BOOL pathIsOpen;
@property (readonly, nonatomic) BOOL supportsStyleInspecting;
@property (retain, nonatomic) TSSStyle *style;
@property (readonly, nonatomic) Class styleClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectForProperty:(int)a0;
- (BOOL)isSelectable;
- (id)boxedValueForProperty:(int)a0;
- (id)referencedStyles;
- (void)replaceReferencedStylesUsingBlock:(id /* block */)a0;
- (void)setBoxedValue:(id)a0 forProperty:(int)a1;
- (void)setValuesForProperties:(id)a0;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (void)i_setValue:(id)a0 forProperty:(int)a1;
- (id)stylesForCopyStyle;
- (id)propertyMapForNewPreset;
- (id)styleIdentifierTemplateForNewPreset;
- (id)commandForPasteStyleWithContext:(id)a0 pasteboardStyles:(id)a1;
- (id)stylePropertyName;
- (unsigned short)stylePropertyId;
- (id)commandForPasteStyleWithContext:(id)a0 pasteboardStyles:(id)a1 tailLineEndInfo:(int)a2;

@end
