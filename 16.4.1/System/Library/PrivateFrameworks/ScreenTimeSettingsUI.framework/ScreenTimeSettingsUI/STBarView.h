@class UIColor, NSArray, STUsageReportGraphDataPoint, UIView;

@interface STBarView : UIView

@property (readonly) BOOL useVibrancy;
@property (copy, nonatomic) NSArray *sectionViews;
@property (copy, nonatomic) NSArray *sectionHeightConstraints;
@property (readonly) UIView *darkenedView;
@property (retain, nonatomic) STUsageReportGraphDataPoint *dataPoint;
@property (copy, nonatomic) UIColor *color;
@property (getter=isDarkened) BOOL darkened;

- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithDataPoint:(id)a0 useVibrancy:(BOOL)a1;
- (void)setUpSectionHeightConstraints;
- (void)setUpSections;

@end
