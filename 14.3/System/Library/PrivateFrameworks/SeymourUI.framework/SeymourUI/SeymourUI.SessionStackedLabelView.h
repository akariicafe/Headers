@class NSString;

@interface SeymourUI.SessionStackedLabelView : UIView {
    void /* unknown type, empty encoding */ stackView;
}

@property (nonatomic, readonly) NSString *noDataIndicator;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ primaryLabel;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ secondaryLabel;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
