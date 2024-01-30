@class NSArray, NSMutableOrderedSet;

@interface AKSegmentedCtrl : UIControl

@property (copy, nonatomic) NSArray *images;
@property (copy, nonatomic) NSArray *buttons;
@property (nonatomic) unsigned long long selectedSegment;
@property (retain, nonatomic) NSMutableOrderedSet *selectionStack;
@property (nonatomic) unsigned long long selectionType;

- (void)_commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithImages:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEnabledForSegment:(unsigned long long)a0;
- (void)setEnabled:(BOOL)a0 forSegment:(unsigned long long)a1;
- (void)_buttonTapped:(id)a0;
- (unsigned long long)segmentCount;
- (id)segmentAtIndex:(unsigned long long)a0;
- (void)setTag:(long long)a0 forSegment:(unsigned long long)a1;
- (long long)tagForSegment:(unsigned long long)a0;
- (void)_configureForNewImages;
- (void)_setSelected:(BOOL)a0 forSegment:(unsigned long long)a1;
- (void)deselectAllSegments;
- (BOOL)isSelectedForSegment:(unsigned long long)a0;
- (id)segmentForTag:(long long)a0;
- (void)selectSegmentWithTag:(long long)a0;
- (void)setSelected:(BOOL)a0 forSegment:(unsigned long long)a1;

@end
