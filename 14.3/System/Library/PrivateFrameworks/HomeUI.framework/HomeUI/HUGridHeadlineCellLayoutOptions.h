@interface HUGridHeadlineCellLayoutOptions : HUGridCellLayoutOptions

@property (readonly, nonatomic) long long viewSizeSubclass;
@property (readonly, nonatomic) double viewWidth;
@property (readonly, nonatomic) double containerLeadingMargin;
@property (readonly, nonatomic) double containerTrailingMargin;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (nonatomic) double minimumFontSize;
@property (nonatomic) double editingBackgroundHeight;
@property (nonatomic) double headlineBaselineOffset;
@property (readonly, nonatomic) double editingBackgroundMinimumWidth;

+ (id)defaultOptionsForCellSizeSubclass:(long long)a0;
+ (id)defaultOptionsForCellSizeSubclass:(long long)a0 viewSizeSubclass:(long long)a1 viewWidth:(double)a2 navigationBarBottomInset:(double)a3 containerLeadingMargin:(double)a4 containerTrailingMargin:(double)a5;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)cellInnerMargin;

@end
