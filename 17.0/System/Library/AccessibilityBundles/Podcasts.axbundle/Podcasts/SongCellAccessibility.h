@interface SongCellAccessibility : __SongCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (id)_privateAccessibilityCustomActions;
- (BOOL)_axPerformCustomAction:(id)a0;
- (id)_accessibilityIndexPathForCell;
- (id)_accessibilityLabelForPlaybackState:(long long)a0;

@end
