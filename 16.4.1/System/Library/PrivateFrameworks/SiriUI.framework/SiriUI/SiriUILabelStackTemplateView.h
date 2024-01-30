@class UIStackView, NSMutableDictionary, UILayoutGuide, NSDictionary, NSLayoutConstraint, UIView;
@protocol SiriUILabelStackTemplateViewDelegate, SiriUILabelStackTemplateModel;

@interface SiriUILabelStackTemplateView : SiriUIBaseTemplateView

@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) UIView *bottomView;
@property (nonatomic) BOOL constraintsUpdated;
@property (weak, nonatomic) NSLayoutConstraint *topViewConstraint;
@property (weak, nonatomic) NSLayoutConstraint *bottomViewConstraint;
@property (retain, nonatomic) UIStackView *trailingViews;
@property (retain, nonatomic) UIStackView *leadingViews;
@property (retain, nonatomic) NSMutableDictionary *componentsForViews;
@property (retain, nonatomic) UILayoutGuide *contentBoundsGuide;
@property (retain, nonatomic) NSDictionary *contentBoundsGuideConstraints;
@property (retain, nonatomic) UILayoutGuide *stackedComponentsBoundsGuide;
@property (retain, nonatomic) NSMutableDictionary *stackedComponentsGuideConstraints;
@property (weak, nonatomic) id<SiriUILabelStackTemplateViewDelegate> delegate;
@property (nonatomic) long long defaultTextAlignment;
@property (weak, nonatomic) id<SiriUILabelStackTemplateModel> dataSource;

- (long long)layoutStyle;
- (void)reloadData;
- (void)setDataSource:(id)a0;
- (void)updateConstraints;
- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (double)desiredHeight;
- (void)insertTrailingView:(id)a0 withMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (void)_createContentLayoutGuides;
- (void)_updateTopAndBottomViewConstraints;
- (void)insertLeadingView:(id)a0 withMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (void)insertTopView:(id)a0;
- (void)populateStack;
- (void)removeFromTemplatedSuperview;
- (void)setTemplatedSuperview:(id)a0;

@end
