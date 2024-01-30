@class CNTransportButton, UIColor, UIImageView, UIView;

@interface CNPropertySimpleTransportCell : CNPropertySimpleCell {
    CNTransportButton *_transportIcon1;
    CNTransportButton *_transportIcon2;
    CNTransportButton *_transportIcon3;
    UIImageView *_starView;
}

@property (retain, nonatomic) UIView *badgeView;
@property (nonatomic) BOOL needsUpdateTouchAreas;
@property (nonatomic) BOOL allowsActions;
@property (readonly, nonatomic) BOOL shouldShowStar;
@property (nonatomic) BOOL shouldShowBadge;
@property (nonatomic) BOOL shouldShowTransportButtons;
@property (readonly, nonatomic) CNTransportButton *transportIcon1;
@property (readonly, nonatomic) CNTransportButton *transportIcon2;
@property (readonly, nonatomic) CNTransportButton *transportIcon3;
@property (readonly, nonatomic) CNTransportButton *standardTransportIcon;
@property (readonly, nonatomic) UIImageView *standardStarView;
@property (readonly, nonatomic) UIView *standardBadgeView;
@property (retain, nonatomic) UIColor *actionsColor;

+ (id)standardStarView;
+ (void)_updateStarImageForView:(id)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)_contentSizeCategoryDidChange:(id)a0;
- (void)updateLabelNeedingHuggingContent;
- (void)updateStarIcon;
- (void)transportButtonClicked:(id)a0;
- (void)updateWithPropertyItem:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldPerformDefaultAction;
- (id)rightMostView;
- (void)setCardGroupItem:(id)a0;
- (id)variableConstraints;
- (void)prepareForReuse;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)updateTransportButtons;

@end
