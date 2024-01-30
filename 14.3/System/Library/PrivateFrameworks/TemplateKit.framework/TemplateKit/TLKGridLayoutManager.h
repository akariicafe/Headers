@class NUIGridArrangement, NSArray, NSDictionary, NSMapTable, NSString;

@interface TLKGridLayoutManager : NSObject <NUIGridArrangementDataSource, NUIArrangementContainer>

@property (retain, nonatomic) NSDictionary *itemsForIndex;
@property (retain, nonatomic) NSArray *itemsForRows;
@property (retain, nonatomic) NSMapTable *itemToRowMapping;
@property (retain, nonatomic) NUIGridArrangement *gridArrangement;
@property (nonatomic) struct CGSize { double width; double height; } cachedFittingSize;
@property (nonatomic) struct CGSize { double width; double height; } cachedGridSize;
@property (nonatomic) long long indexForFirstTrailingColumn;
@property (nonatomic) long long totalEqualColumns;
@property (retain, nonatomic) NSArray *spacings;
@property (nonatomic) double widthOfEqualFillColumns;
@property (retain, nonatomic) NSArray *alignments;
@property (retain, nonatomic) NSArray *verticalRowAlignments;
@property (nonatomic) BOOL tableContainsRowHeaders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)font;
+ (id)computeTruncationForAlignments:(id)a0 indexForFirstTrailingColumn:(unsigned long long)a1 totalEqualColumns:(unsigned long long)a2;
+ (id)verticalAlignmentsForItems:(id)a0;
+ (id)arrayOfItemsForSection:(id)a0;
+ (double)leadingSectionSpacingForView:(id)a0 view2:(id)a1 index:(unsigned long long)a2 alignmentSchema:(id)a3 allEqual:(BOOL)a4;
+ (id)gridManagerWithAlignments:(id)a0 rows:(id)a1;

- (void).cxx_destruct;
- (long long)numberOfColumns;
- (double)gridArrangement:(id)a0 widthOfColumnAtIndex:(long long)a1 spacingAfter:(double *)a2;
- (struct CGSize { double x0; double x1; })contentLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 forArrangedSubview:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutFrameForArrangedSubview:(id)a0 withProposedContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (long long)effectiveUserInterfaceLayoutDirection;
- (id)gridArrangement:(id)a0 itemAtIndex:(long long)a1 columns:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 rows:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3 horizontalAlignment:(long long *)a4 verticalAlignment:(long long *)a5;
- (struct CGSize { double x0; double x1; })sizeForFittingSize:(struct CGSize { double x0; double x1; })a0 forRow:(id)a1;
- (void)placeViewsForSize:(struct CGSize { double x0; double x1; })a0 forRow:(id)a1 completion:(id /* block */)a2;
- (id)initWithWithAlignments:(id)a0 rows:(id)a1;
- (id)addItemsToDictionary:(id)a0 forSection:(id)a1 row:(unsigned long long)a2 truncationPriorities:(id)a3;
- (id)spacingsForAlignments:(id)a0 firstValidDataRow:(id)a1;
- (BOOL)hasManyTrailingColumns;
- (BOOL)allEqualColumns;
- (double)trailingSectionSpacingBasedOnTotalViewsInSection:(long long)a0;
- (long long)numberOfItemsInGridArrangement:(id)a0;

@end
