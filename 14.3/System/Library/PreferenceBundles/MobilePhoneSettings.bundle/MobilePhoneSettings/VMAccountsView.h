@class UILabel, NSMutableArray, UIStackView;
@protocol VMAccountsViewDataSource, VMAccountsViewDelegate;

@interface VMAccountsView : UIView

@property (retain, nonatomic) NSMutableArray *buttons;
@property (retain, nonatomic) UIStackView *buttonStackView;
@property (retain, nonatomic) UILabel *messageLabel;
@property (readonly, nonatomic) double messageLabelFirstBaselineAnchorLayoutConstraintConstant;
@property (readonly, nonatomic) double messageLabelLastBaselineAnchorLayoutConstraintConstant;
@property (weak, nonatomic) id<VMAccountsViewDataSource> dataSource;
@property (weak, nonatomic) id<VMAccountsViewDelegate> delegate;

- (void)reloadData;
- (void).cxx_destruct;
- (void)commonInit;
- (id)buttonAtIndex:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)loadConstraints;
- (void)handleActionForButtonSender:(id)a0 event:(id)a1;

@end
