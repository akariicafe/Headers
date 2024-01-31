@class UIView, NSDate;

@interface MobileCalHourAccessibilityElement : UIAccessibilityElement

@property (retain, nonatomic) NSDate *hourDate;
@property (weak, nonatomic) UIView *dayGridView;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (id)accessibilityUserInputLabels;
- (id)accessibilityDropPointDescriptors;
- (BOOL)_accessibilityIsSpeakThisElement;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrameForScrolling;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameInDayGridView;

@end
