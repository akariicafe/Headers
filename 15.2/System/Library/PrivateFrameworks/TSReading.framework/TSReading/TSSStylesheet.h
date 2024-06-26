@class NSSet, NSString, NSMutableDictionary, TSUMutableRetainedPointerSet, TSURetainedPointerKeyDictionary;

@interface TSSStylesheet : TSPObject <TSKTransformableObject> {
    TSUMutableRetainedPointerSet *mStyles;
    NSMutableDictionary *mIdentifierToStyleMap;
    TSURetainedPointerKeyDictionary *mParentToChildrenStyleMap;
    BOOL mIsLocked;
    BOOL mCanCullStyles;
}

@property (readonly, nonatomic) TSSStylesheet *parent;
@property (readonly, nonatomic) TSSStylesheet *child;
@property (nonatomic) BOOL isLocked;
@property (nonatomic) BOOL canCullStyles;
@property (readonly, nonatomic) NSSet *styles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setParent:(id)a0;
- (id)initWithContext:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (id)defaultParagraphStyle;
- (id)styleWithIdentifier:(id)a0;
- (id)variationOfStyle:(id)a0 propertyMap:(id)a1;
- (void)removeStyle:(id)a0;
- (BOOL)isAncestorOf:(id)a0;
- (id)defaultCharacterStyle;
- (id)defaultListStyle;
- (void)addStyle:(id)a0;
- (void)didLoadChildObjectFromDocumentSupport:(id)a0;
- (id)rootAncestor;
- (unsigned long long)descendantCount;
- (id)childrenOfStyle:(id)a0;
- (BOOL)isDescendentOf:(id)a0;
- (BOOL)isChildOf:(id)a0;
- (BOOL)isParentOf:(id)a0;
- (id)initWithContext:(id)a0 canCullStyles:(BOOL)a1;
- (void)setParent:(id)a0 withParentStyleMap:(struct __CFDictionary { } *)a1;
- (void)addStyle:(id)a0 withParent:(id)a1 identifier:(id)a2;
- (void)p_addStyle:(id)a0 withParent:(id)a1 identifier:(id)a2;
- (void)p_removeStyle:(id)a0;
- (BOOL)containsStyle:(id)a0;
- (BOOL)cascadedContainsStyle:(id)a0;
- (id)cascadedStyleWithIdentifier:(id)a0;
- (id)styleWithIdentifier:(id)a0 componentMask:(int)a1;
- (id)cascadedStyleWithIdentifier:(id)a0 componentMask:(int)a1;
- (void)p_setIdentifier:(id)a0 ofStyle:(id)a1;
- (void)p_setParent:(id)a0 ofStyle:(id)a1;
- (id)firstStyleWithName:(id)a0;
- (id)cascadedFirstStyleWithName:(id)a0;
- (void)enumerateStylesUsingBlock:(id /* block */)a0;
- (id)stylesPassingTest:(id /* block */)a0;
- (id)pVariationOfStyle:(id)a0 propertyMap:(id)a1 matchStyles:(id)a2 context:(id)a3;
- (void)p_addStyleToParentChildren:(id)a0;
- (void)p_removeStyleFromParentChildren:(id)a0;
- (void)addStyle:(id)a0 withIdentifier:(id)a1;
- (void)addStyle:(id)a0 withParent:(id)a1;
- (void)setIdentifier:(id)a0 ofStyle:(id)a1;
- (void)setParent:(id)a0 ofStyle:(id)a1;
- (id)stylesWithName:(id)a0;
- (id)stylesWithName:(id)a0 ofClass:(Class)a1;
- (id)stylesOfClass:(Class)a0;
- (id)identifiedStyles;
- (id)identifiedStylesOfClass:(Class)a0;
- (void)enumerateCascadedStylesUsingBlock:(id /* block */)a0;
- (id)namedStylesOfClass:(Class)a0;
- (id)firstRootlessStyleOfClass:(Class)a0 withOverridePropertyMap:(id)a1;
- (id)variationOfStyleMatchingStyle:(id)a0 withNewParentStyle:(id)a1;
- (id)variationOfStyle:(id)a0 propertyMap:(id)a1 context:(id)a2;
- (id)variationOfStyle:(id)a0 propertyMap:(id)a1 matchStyles:(id)a2 context:(id)a3;
- (id)variationOfStyle:(id)a0 exactPropertyMap:(id)a1;
- (void)unlockStylesheetForDurationOfBlock:(id /* block */)a0;
- (id)unusedStyleIdentifierWithPackageString:(id)a0 styleDescriptor:(id)a1 contentTag:(id)a2;
- (id)p_variationMapForVaryingCharacterStyle:(id)a0 overParagraphStyle:(id)a1 withPropertyMap:(id)a2;
- (id)_defaultCharacterStyleWasCreated:(BOOL *)a0;
- (id)_hyperlinkStyleWasCreated:(BOOL *)a0;
- (id)_defaultListStyleWasCreated:(BOOL *)a0;
- (id)_defaultParagraphStyleWasCreated:(BOOL *)a0;
- (id)_defaultColumnStyleWasCreated:(BOOL *)a0;
- (id)variationOfCharacterStyle:(id)a0 paragraphStyle:(id)a1 propertyMap:(id)a2;
- (id)hyperlinkStyle;
- (id)defaultColumnStyle;
- (id)headerAndFooterStyle;
- (id)_defaultStyleOfClass:(Class)a0 withIdentifier:(id)a1 wasCreated:(BOOL *)a2 usingBlock:(id /* block */)a3;

@end
