@class NSString, NSArray, NSLayoutConstraint, UIInterfaceAction, UILabel;

@interface _UIInterfaceActionLabelsPropertyView : UIView <UIInterfaceActionDisplayPropertyObserver> {
    NSLayoutConstraint *_leadingLabelLeadingConstraint;
    NSLayoutConstraint *_leadingLabelVerticalPositionConstraint;
    NSLayoutConstraint *_trailingLabelTrailingConstraint;
    NSLayoutConstraint *_trailingLabelVerticalPositionConstraint;
    NSLayoutConstraint *_interLabelSpacingConstraint;
    UILabel *_classificationLabel;
    UILabel *_titleLabel;
    NSArray *_labelConstraints;
}

@property (readonly, nonatomic) UIInterfaceAction *action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)viewForFirstBaselineLayout;
- (void)_applyVisualStyle;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (id)viewForLastBaselineLayout;
- (id)initWithAction:(id)a0;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)_reloadContentClassificationLabelDisplayProperties;
- (id)_newLabel;
- (void)interfaceAction:(id)a0 reloadDisplayedContentVisualStyle:(id)a1;
- (void)dealloc;
- (void)_reloadContentForTitleDisplayProperties;
- (void)_contentSizeCategoryDidChangeNotification:(id)a0;
- (id)_visualStyle;
- (id)_interfaceActionViewState;
- (void)_applyVisualStyleToLabels;
- (id)_classificationLabelIfVisible;
- (void)interfaceAction:(id)a0 reloadDisplayedContentActionProperties:(id)a1;

@end
