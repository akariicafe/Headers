@interface HealthExperienceUI.DismissibleTileHeaderView : UIView {
    void /* unknown type, empty encoding */ chromeHostView;
    void /* unknown type, empty encoding */ heightConstraint;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ detailLabel;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ accessoryLabel;
    void /* unknown type, empty encoding */ detailContainerView;
    void /* unknown type, empty encoding */ accessorySeparator;
    void /* unknown type, empty encoding */ $__lazy_storage_$_accessoryImage;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ minimumViewHeight;
    void /* unknown type, empty encoding */ titleToTop;
    void /* unknown type, empty encoding */ titleToBottom;
    void /* unknown type, empty encoding */ titleToDismiss;
    void /* unknown type, empty encoding */ detailToTitle;
    void /* unknown type, empty encoding */ detailToSeparator;
    void /* unknown type, empty encoding */ dismissToSeparator;
    void /* unknown type, empty encoding */ dismissToTop;
    void /* unknown type, empty encoding */ dismissToBottom;
    void /* unknown type, empty encoding */ dismissToTrailing;
    void /* unknown type, empty encoding */ minimumTappableDismissWidth;
    void /* unknown type, empty encoding */ minimumTappableDismissHeight;
}

- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)didReceiveSignificantTimeChangeNotification:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)accessibilityAccessoryLabel;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
