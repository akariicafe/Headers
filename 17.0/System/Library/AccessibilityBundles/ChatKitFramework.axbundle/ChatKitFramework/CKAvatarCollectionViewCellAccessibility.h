@interface CKAvatarCollectionViewCellAccessibility : __CKAvatarCollectionViewCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (void)configureWithEntity:(id)a0;
- (void)_setAXCKEntity:(id)a0;
- (void)_axSetCKEntity:(id)a0;
- (id)_axCKEntity;
- (unsigned long long)_axCollectionViewLayoutMode;
- (id)_axLocalizedFormatStringForAcknowledgmentType:(long long)a0;
- (id)_axTapbackContacts;
- (id)_axTapbackLabelWithTally:(id)a0;
- (long long)_axTapbackType;

@end
