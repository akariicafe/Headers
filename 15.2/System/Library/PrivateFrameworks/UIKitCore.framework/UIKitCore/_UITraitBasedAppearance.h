@class UITraitCollection;

@interface _UITraitBasedAppearance : _UIAppearance {
    UITraitCollection *_traitCollection;
}

+ (void)_setHasAnyCustomizations;
+ (BOOL)_hasAnyCustomizations;
+ (BOOL)_hasCustomizationsForTraitCollection:(id)a0 class:(Class)a1 guideClass:(Class)a2;
+ (id)_appearanceForTraitCollection:(id)a0 forClass:(Class)a1 withContainerList:(id)a2;

- (id)_traitCollection;
- (BOOL)_isValidAppearanceForCustomizableObject:(id)a0;
- (void)_invalidateAppearanceInWindow:(id)a0;
- (void)dealloc;

@end
