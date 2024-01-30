@class NSNumber, NSMutableArray, NSArray;

@interface STHorizontallySegmentedView : UIView

@property (retain, nonatomic) NSNumber *numberOfLines;
@property (readonly) unsigned long long maximumNumberOfLines;
@property (readonly) BOOL useVibrancy;
@property (readonly) BOOL truncateLabels;
@property (nonatomic) double previousWidth;
@property (readonly, nonatomic) NSMutableArray *segmentViews;
@property (copy, nonatomic) NSArray *segmentConstraints;
@property (copy, nonatomic) NSArray *segmentItems;

- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (void)_setUpConstraints;
- (void)_stHorizontallySegmentedViewCommonInit;
- (id)initWithVibrancy:(BOOL)a0 maximumNumberOfLines:(unsigned long long)a1 truncateLabels:(BOOL)a2;

@end
