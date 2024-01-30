@class NUIGridArrangement, NSMutableArray, NSString;
@protocol SearchUIFeedbackDelegate;

@interface SearchUIAppIconsRowView : UIView <SearchUIHomeScreenEngagementDelegate, NUIGridArrangementDataSource, NUIArrangementContainer>

@property (retain, nonatomic) NSMutableArray *itemAtIndex;
@property (retain, nonatomic) NSMutableArray *spacerDebuggerViews;
@property (retain, nonatomic) NUIGridArrangement *arrangment;
@property (weak) id<SearchUIFeedbackDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *iconViews;
@property (retain, nonatomic) NSMutableArray *spacingHelpers;
@property (retain, nonatomic) NSMutableArray *endsSpacingHelpers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)numberOfIcons;

- (void)didEngageResult:(id)a0;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (id)init;
- (void).cxx_destruct;
- (void)didEngageResult:(id)a0 withTriggerEvent:(unsigned long long)a1 destination:(unsigned long long)a2;
- (struct CGSize { double x0; double x1; })contentLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 forArrangedSubview:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutFrameForArrangedSubview:(id)a0 withProposedContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)layoutSubviews;
- (id)gridArrangement:(id)a0 itemAtIndex:(long long)a1 columns:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 rows:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3 horizontalAlignment:(long long *)a4 verticalAlignment:(long long *)a5;
- (void)updateWithResultsForRow:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (long long)numberOfItemsInGridArrangement:(id)a0;

@end
