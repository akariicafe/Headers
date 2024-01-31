@class UIView, NSMutableArray, NSDate;

@interface MobileCalDayContainerAccessibilityElement : UIAccessibilityElement

@property (retain, nonatomic) NSMutableArray *children;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) long long indexInArray;
@property (weak, nonatomic) UIView *dayGrid;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)dealloc;
- (id)accessibilityElements;
- (BOOL)canBecomeFocused;
- (long long)accessibilityContainerType;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)_accessibilityParentForFindingScrollParent;

@end
