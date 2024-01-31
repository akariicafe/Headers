@interface DownloadTableViewCellAccessibility : __DownloadTableViewCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityCustomActions;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)isAccessibilityElement;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_updateCellContents;

@end
