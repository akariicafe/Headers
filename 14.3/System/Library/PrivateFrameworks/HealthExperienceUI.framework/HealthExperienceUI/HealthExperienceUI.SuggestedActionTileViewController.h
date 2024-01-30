@interface HealthExperienceUI.SuggestedActionTileViewController : UIViewController {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ nibObjects;
    void /* unknown type, empty encoding */ linkButton;
    void /* unknown type, empty encoding */ linkButtonTopSpacingConstraint;
    void /* unknown type, empty encoding */ linkButtonHeightConstraint;
    void /* unknown type, empty encoding */ actionButtonTopSpacingConstraint;
    void /* unknown type, empty encoding */ actionButtonStyle;
    void /* unknown type, empty encoding */ suggestedActionDelegate;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ containerView;
@property (nonatomic, weak) void /* unknown type, empty encoding */ imageView;
@property (nonatomic, weak) void /* unknown type, empty encoding */ imageBackgroundView;
@property (nonatomic, retain) void /* unknown type, empty encoding */ containerViewTopConstraint;
@property (nonatomic, retain) void /* unknown type, empty encoding */ containerViewBottomConstraint;
@property (nonatomic, retain) void /* unknown type, empty encoding */ imageBackgroundViewContainerViewTopConstraint;
@property (nonatomic, retain) void /* unknown type, empty encoding */ imageBackgroundViewContainerViewBottomConstraint;
@property (nonatomic, weak) void /* unknown type, empty encoding */ titleLabel;
@property (nonatomic, weak) void /* unknown type, empty encoding */ bodyLabel;
@property (nonatomic, weak) void /* unknown type, empty encoding */ actionButton;
@property (nonatomic, retain) void /* unknown type, empty encoding */ actionButtonHeightConstraint;

- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)didTapLink:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)didTapAction:(id)a0;
- (void)viewDidLoad;

@end
