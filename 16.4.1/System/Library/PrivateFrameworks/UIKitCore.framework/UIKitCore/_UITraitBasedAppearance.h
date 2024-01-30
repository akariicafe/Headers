@class UITraitCollection;

@interface _UITraitBasedAppearance : _UIAppearance {
    UITraitCollection *_traitCollection;
}

+ (BOOL)_hasCustomizationsForTraitCollection:(id)a0 class:(Class)a1 guideClass:(Class)a2;
+ (void)_setHasAnyCustomizations;
+ (id)_appearanceForTraitCollection:(id)a0 forClass:(Class)a1 withContainerList:(id)a2;
+ (BOOL)_hasAnyCustomizations;

- (BOOL)_isValidAppearanceForCustomizableObject:(id)a0;
- (id)_traitCollection;
- (void)_invalidateAppearanceInWindow:(id)a0;
- (void)dealloc;

@end
