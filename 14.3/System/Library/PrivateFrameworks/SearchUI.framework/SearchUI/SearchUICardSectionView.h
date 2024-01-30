@class UIViewController, NSString, UIView, SFCardSection, SearchUICardSectionRowModel;
@protocol SearchUIFeedbackDelegate;

@interface SearchUICardSectionView : NUIContainerStackView <NUIContainerViewDelegate>

@property (retain, nonatomic) SearchUICardSectionRowModel *rowModel;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *chevronView;
@property BOOL isCompactWidth;
@property (readonly, nonatomic) SFCardSection *section;
@property (readonly) UIViewController *embeddedViewController;
@property (weak, nonatomic) id<SearchUIFeedbackDelegate> feedbackDelegate;
@property (readonly, nonatomic) UIView *leadingView;
@property (readonly, nonatomic) UIView *leadingTextView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;
+ (id)dragTitleForCardSection:(id)a0;
+ (BOOL)supportsRecyclingForCardSection:(id)a0;
+ (int)defaultSeparatorStyleForCardSection:(id)a0;
+ (BOOL)fillsBackgroundWithContentForCardSection:(id)a0;
+ (BOOL)supportsCustomUserReportRequestAfforance;
+ (BOOL)prefersNoSeparatorAboveCardSection:(id)a0;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })separatorInsetsForStyle:(int)a0 cellView:(id)a1 leadingView:(id)a2 leadingTextView:(id)a3;
+ (id)dragSubtitleForCardSection:(id)a0;
+ (BOOL)hasLeadingImageForCardSection:(id)a0;

- (void)tlk_updateForAppearance:(id)a0;
- (void)updateWithRowModel:(id)a0;
- (void).cxx_destruct;
- (void)didInvalidateSizeAnimate:(BOOL)a0;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)updateChevronVisible:(BOOL)a0 leaveSpaceForChevron:(BOOL)a1;
- (id)sendFeedbackForPunchout:(id)a0 triggerEvent:(unsigned long long)a1;
- (void)didMoveToWindow;
- (void)openPunchout:(id)a0 triggerEvent:(unsigned long long)a1;
- (id)initWithRowModel:(id)a0 feedbackDelegate:(id)a1;
- (void)presentUserReportRequestViewController;
- (id)setupContentView;
- (void)containerView:(id)a0 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x0; double x1; })a1 forReason:(long long)a2;
- (void)tabKeyPressed;
- (void)requestRemovalFromEnclosingView;
- (void)presentViewController:(id)a0;

@end
