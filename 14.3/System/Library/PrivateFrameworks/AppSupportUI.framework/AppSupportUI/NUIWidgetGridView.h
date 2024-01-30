@class NSArray, NUIContainerGridView;
@protocol NUIWidgetGridViewDelegate, NUIWidgetGridViewDataSource;

@interface NUIWidgetGridView : UIView {
    NUIContainerGridView *_gridView;
    NSArray *_itemViews;
    struct CGSize { double width; double height; } _labelSizes[8];
    unsigned long long _currentLayout;
}

@property (readonly, nonatomic) double currentLabelOutset;
@property (weak, nonatomic) id<NUIWidgetGridViewDataSource> dataSource;
@property (weak, nonatomic) id<NUIWidgetGridViewDelegate> delegate;
@property (nonatomic) long long imageStyle;
@property (nonatomic) long long titleStyle;
@property (nonatomic) long long subtitleStyle;
@property (nonatomic) double centerAdjustmentAllowed;

+ (double)itemWidth;
+ (unsigned long long)maxNumberOfItems;

- (void)contentSizeDidChange;
- (void)reloadData;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0 delegate:(id)a1;
- (struct { double x0; double x1; })entitledExtraSpaceForCellAtIndex:(unsigned long long)a0;
- (id)cellForGridViewItemAtIndex:(long long)a0;
- (struct { double x0; double x1; })borrowableSpaceForCellAtIndex:(unsigned long long)a0;
- (void)layoutSubviews;

@end
