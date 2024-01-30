@class NUIGridArrangement, NSMutableDictionary, NSString, NSMutableArray, SearchUICombinedCardSectionRowModel;
@protocol SearchUIFeedbackDelegate;

@interface SearchUICombinedCardSectionsView : UIView <NUIArrangementContainer, NUIGridArrangementDataSource>

@property (retain, nonatomic) NUIGridArrangement *arrangement;
@property (retain, nonatomic) NSMutableDictionary *cardSectionsMapping;
@property (retain, nonatomic) NSMutableArray *uncacheableViews;
@property (retain, nonatomic) NSMutableArray *viewList;
@property BOOL hasAttributionFooter;
@property (retain, nonatomic) SearchUICombinedCardSectionRowModel *rowModel;
@property (weak, nonatomic) id<SearchUIFeedbackDelegate> feedbackDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)init;
- (void).cxx_destruct;
- (id)visibleViewList;
- (void)resetStateOfViews;
- (struct CGSize { double x0; double x1; })contentLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 forArrangedSubview:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutFrameForArrangedSubview:(id)a0 withProposedContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)layoutSubviews;
- (id)initWithRowModel:(id)a0 feedbackDelegate:(id)a1;
- (id)gridArrangement:(id)a0 itemAtIndex:(long long)a1 columns:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 rows:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3 horizontalAlignment:(long long *)a4 verticalAlignment:(long long *)a5;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (long long)numberOfItemsInGridArrangement:(id)a0;

@end
