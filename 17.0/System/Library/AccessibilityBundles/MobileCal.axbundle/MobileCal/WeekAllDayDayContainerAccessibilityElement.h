@class UIView, NSMutableArray, NSDate;

@interface WeekAllDayDayContainerAccessibilityElement : UIAccessibilityElement

@property (readonly, nonatomic) NSMutableArray *children;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) unsigned long long dayIndex;
@property (weak, nonatomic) UIView *allDayView;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)dealloc;
- (id)accessibilityElements;
- (id)initWithAccessibilityContainer:(id)a0;
- (long long)accessibilityContainerType;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (id)_accessibilityParentForFindingScrollParent;

@end
