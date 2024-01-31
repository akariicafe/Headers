@interface ContactsUI.CNTipHeaderView : UIView {
    void /* unknown type, empty encoding */ separatorEdgeInset;
    void /* unknown type, empty encoding */ bottomSeparatorView;
}

@property (class, nonatomic, readonly) double verticalInsetTotal;

@property (nonatomic) void /* unknown type, empty encoding */ displaysBottomSeparator;
@property (nonatomic, retain) void /* unknown type, empty encoding */ hostingView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 separatorInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;

@end
