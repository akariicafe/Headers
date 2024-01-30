@interface HealthExperienceUI.DataTypeTileHeaderView : UIView {
    void /* unknown type, empty encoding */ chromeHostView;
    void /* unknown type, empty encoding */ heightConstraint;
    void /* unknown type, empty encoding */ currentTileHeaderDetailKind;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ detailLabel;
    void /* unknown type, empty encoding */ accessoryLabel;
    void /* unknown type, empty encoding */ detailContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_accessoryImage;
    void /* unknown type, empty encoding */ minimumViewHeight;
    void /* unknown type, empty encoding */ titleToTop;
    void /* unknown type, empty encoding */ titleToBottom;
    void /* unknown type, empty encoding */ titleToAccessory;
    void /* unknown type, empty encoding */ titleToDetail;
    void /* unknown type, empty encoding */ detailToAccessory;
    void /* unknown type, empty encoding */ glyphBaselineOffset;
}

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)updateTitleText;
- (void)didReceiveSignificantTimeChangeNotification:(id)a0;

@end
