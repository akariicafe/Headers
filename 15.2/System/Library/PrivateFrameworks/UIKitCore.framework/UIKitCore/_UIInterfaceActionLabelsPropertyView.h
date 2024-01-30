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
- (id)viewForLastBaselineLayout;
- (id)_newLabel;
- (void)_reloadContentClassificationLabelDisplayProperties;
- (void)_reloadContentForTitleDisplayProperties;
- (id)initWithAction:(id)a0;
- (void)_applyVisualStyle;
- (id)_classificationLabelIfVisible;
- (id)_interfaceActionViewState;
- (void)_applyVisualStyleToLabels;
- (void).cxx_destruct;
- (id)_visualStyle;
- (void)interfaceAction:(id)a0 reloadDisplayedContentVisualStyle:(id)a1;
- (void)tintColorDidChange;
- (void)dealloc;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)interfaceAction:(id)a0 reloadDisplayedContentActionProperties:(id)a1;
- (void)_contentSizeCategoryDidChangeNotification:(id)a0;

@end
