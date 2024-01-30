@class UITraitCollection;

@interface _UITraitBasedAppearance : _UIAppearance {
    UITraitCollection *_traitCollection;
}

+ (BOOL)_hasCustomizationsForTraitCollection:(id)a0 class:(Class)a1 guideClass:(Class)a2;
+ (id)_appearanceForTraitCollection:(id)a0 forClass:(Class)a1 withContainerList:(id)a2;
+ (BOOL)_hasAnyCustomizations;
+ (void)_setHasAnyCustomizations;

- (void)_invalidateAppearanceInWindow:(id)a0;
- (BOOL)_isValidAppearanceForCustomizableObject:(id)a0;
- (void)dealloc;
- (id)_traitCollection;

@end
