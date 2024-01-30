@class NSArray, UISegmentedControl;
@protocol TUICandidateViewStyle;

@interface TUICandidateSortControl : UIControl

@property (retain, nonatomic) UISegmentedControl *segmentedControl;
@property (copy, nonatomic) NSArray *titles;
@property (nonatomic) long long selectedIndex;
@property (retain, nonatomic) id<TUICandidateViewStyle> style;

- (void).cxx_destruct;
- (void)commonInit;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })segmentedControlFrame;
- (double)segmentedControlWidth;
- (void)handleValueChanged;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
