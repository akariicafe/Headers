@class NSArray, UIStackView;

@interface UIInputSwitcherSegmentControl : UIControl

@property (retain, nonatomic) UIStackView *stackView;
@property (nonatomic) BOOL usesDarkTheme;
@property (nonatomic) long long selectedSegmentIndex;
@property (readonly, nonatomic) unsigned long long numberOfSegments;
@property (copy, nonatomic) NSArray *segmentTitles;
@property (retain, nonatomic) NSArray *segmentImages;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)_removeAllSegmentViews;
- (void)_populateSegmentViewsWithCount:(unsigned long long)a0;
- (BOOL)shouldTrack;
- (void).cxx_destruct;
- (void)updateSelectionWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
