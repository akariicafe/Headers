@class NSString;

@interface HRConceptTitleTableHeaderView : UIView {
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ actionButton;
    void /* unknown type, empty encoding */ fontChoices;
    void /* unknown type, empty encoding */ widthCache;
    void /* unknown type, empty encoding */ titleCache;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic) void /* unknown type, empty encoding */ bottomExtraSpace;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *buttonTitle;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)actionButtonTappedWithSender:(id)a0;

@end
