@interface MFMailComposeViewAccessibility : __MFMailComposeViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(unsigned long long)a1;
- (BOOL)presentSearchResults:(id)a0;
- (void)dropTarget:(id)a0 dragDidMoveToPoint:(struct CGPoint { double x0; double x1; })a1;
- (long long)_accessibilityCompareElement:(id)a0 toElement:(id)a1;
- (id)_searchResultsTable;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)shouldGroupAccessibilityChildren;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)dropTarget:(id)a0 dragEnteredAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)dragSource:(id)a0 draggableItemsAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)_accessibilityComposeElementsForSorting;
- (unsigned long long)_axIndexOfRecipient:(id)a0 inArray:(id)a1;

@end
