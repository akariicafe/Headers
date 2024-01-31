@interface CKPhotoSearchResultCellAccessibility : __CKPhotoSearchResultCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)prepareForReuse;
- (BOOL)isAccessibilityElement;
- (void)configureWithQueryResult:(id)a0 searchText:(id)a1 mode:(unsigned long long)a2;
- (void)_axSetImageURL:(id)a0;
- (id)_axContact;
- (id)_axDescription;
- (id)_axImageURL;
- (void)_axSetContact:(id)a0;
- (void)_axSetDescription:(id)a0;

@end
