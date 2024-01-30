@class UIStackView, PSGCircleSegment, UIImage, UILabel, NSMutableArray;
@protocol PSGCircleSegmentedControlDelegate;

@interface PSGCircleSegmentedControl : UIControl {
    NSMutableArray *_segmentPlaceholders;
    NSMutableArray *_segments;
    UIStackView *_stack;
    PSGCircleSegment *_selectedSegment;
    NSMutableArray *_segmentConstraints;
    NSMutableArray *_selectedSegmentConstraints;
    UIImage *_placeholderImage;
    UIImage *_buttonImage;
    UIImage *_highlightedImage;
    UIImage *_activeImage;
}

@property (weak, nonatomic) id<PSGCircleSegmentedControlDelegate> delegate;
@property (retain, nonatomic) UILabel *label;

- (void).cxx_destruct;
- (id)init;
- (void)setSelectedSegmentIndex:(unsigned long long)a0;
- (void)addSegmentWithTitle:(id)a0;
- (id)styleSensitiveImage:(id /* block */)a0;
- (id)_circleImageWithColor:(id)a0 fillColor:(id)a1 diameter:(double)a2;
- (void)segmentTapped:(id)a0;
- (void)setPositionConstraintsActive:(BOOL)a0 forButtonAtIndex:(unsigned long long)a1;
- (void)selectSegmentAtIndex:(unsigned long long)a0;
- (void)menuButtonPressed;

@end
