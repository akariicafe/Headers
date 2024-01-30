@class TLKStackView, NSString, TLKTextButton, TLKLabel, SFResultSection;
@protocol SFFeedbackListener, SearchUITableHeaderViewDelegate;

@interface SearchUITableHeaderView : UITableViewHeaderFooterView <NUIContainerViewDelegate>

@property (retain, nonatomic) TLKLabel *titleLabel;
@property (retain, nonatomic) TLKTextButton *headerOptionButton;
@property (retain, nonatomic) SFResultSection *section;
@property (retain, nonatomic) TLKStackView *stackView;
@property (nonatomic) unsigned long long headerType;
@property (nonatomic) BOOL isExpanded;
@property (weak, nonatomic) id<SearchUITableHeaderViewDelegate> delegate;
@property (weak, nonatomic) id<SFFeedbackListener> feedbackListener;
@property (readonly) NSString *title;
@property (nonatomic) BOOL shouldUseInsetRoundedSections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (void)setFloating:(BOOL)a0;
- (void)tlk_updateForAppearance:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)updateWithSection:(id)a0 isExpanded:(BOOL)a1 usesInsetRoundedSection:(BOOL)a2;
- (BOOL)supportsShowMoreInApp;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)updateHeaderButtonVisibilityAnimated:(BOOL)a0;
- (void)moreButtonPressed;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)moreResultsPunchout;
- (BOOL)isSuggestedAppsHeader;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
