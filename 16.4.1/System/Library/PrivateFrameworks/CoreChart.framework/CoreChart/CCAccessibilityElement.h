@class NSString;

@interface CCAccessibilityElement : UIAccessibilityElement

@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (retain) NSString *label;
@property (retain) NSString *roleDescription;

- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;

@end
