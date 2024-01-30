@class BKUIButtonTray, NSLayoutConstraint, NSString, UIScrollView, UIView, BKUIPearlInstructionView;

@interface BKUIJindoContainerScrollview : UIView <BKUIScrollableContainer>

@property (retain, nonatomic) UIScrollView *scrollview;
@property (retain, nonatomic) UIView *scrollContentView;
@property (retain, nonatomic) BKUIPearlInstructionView *instructionView;
@property (retain, nonatomic) BKUIPearlInstructionView *animatingInstructionView;
@property (retain, nonatomic) BKUIButtonTray *buttonTray;
@property (retain, nonatomic) NSLayoutConstraint *pinButtonTrayToScrollViewBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *horizontalConstraint;
@property (retain, nonatomic) NSLayoutConstraint *instructionViewTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *buttonTrayTopAnchor;
@property (retain, nonatomic) NSLayoutConstraint *topToSuperViewConstraint;
@property (nonatomic) long long indicatorStyle;
@property (nonatomic) BOOL showsVerticalScrollIndicator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 buttonTray:(id)a1;

@end
