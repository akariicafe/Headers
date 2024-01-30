@class UIColor, NSString, PKPaymentPass, UIImageView, UIView, UILabel;

@interface PKFusedDoubleCellView : UIView <PKPaymentDashboardCellActionHandleable> {
    UIView *_separatorView;
    UIImageView *_disclosureView;
    double _topPadding;
    double _middlePadding;
    BOOL _isTemplateLayout;
    UILabel *_leftTitleView;
    UILabel *_leftDetailView;
    UILabel *_leftSubDetailView;
    UILabel *_rightTitleView;
    UILabel *_rightDetailView;
    UILabel *_rightSubDetailView;
    unsigned long long _deferUpdateCounter;
    BOOL _animated;
}

@property (nonatomic) BOOL enableDisclosure;
@property (copy, nonatomic) PKPaymentPass *pass;
@property (copy, nonatomic) UIColor *leftTitleColor;
@property (copy, nonatomic) UIColor *leftDetailColor;
@property (copy, nonatomic) UIColor *leftSubDetailColor;
@property (copy, nonatomic) UIColor *rightTitleColor;
@property (copy, nonatomic) UIColor *rightDetailColor;
@property (copy, nonatomic) UIColor *rightSubDetailColor;
@property (nonatomic) long long leftTitleLineBreakMode;
@property (nonatomic) long long leftDetailLineBreakMode;
@property (nonatomic) long long leftSubDetailLineBreakMode;
@property (nonatomic) long long rightTitleLineBreakMode;
@property (nonatomic) long long rightDetailLineBreakMode;
@property (nonatomic) long long rightSubDetailLineBreakMode;
@property (copy, nonatomic) NSString *leftTitle;
@property (copy, nonatomic) NSString *leftDetail;
@property (copy, nonatomic) NSString *leftSubDetail;
@property (copy, nonatomic) NSString *rightTitle;
@property (copy, nonatomic) NSString *rightDetail;
@property (copy, nonatomic) NSString *rightSubDetail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beginUpdates;
- (void)_setupViews;
- (id)_titleFont;
- (id)init;
- (void)_performInit;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_subDetailFont;
- (void)_updateContent:(BOOL)a0;
- (void)layoutIfNeededAnimated:(BOOL)a0;
- (void)endUpdates:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)_detailFont;
- (void)layoutSubviews;
- (long long)viewType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_leftNeedsThirdLine;
- (BOOL)_rightNeedsThirdLine;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
