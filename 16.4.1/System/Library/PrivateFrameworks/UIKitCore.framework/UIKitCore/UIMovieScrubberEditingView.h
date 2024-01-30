@class UIImageView, NSArray;

@interface UIMovieScrubberEditingView : UIView {
    UIImageView *_leftImageView;
    UIImageView *_middleImageView;
    UIImageView *_rightImageView;
    NSArray *_activeImages;
    NSArray *_activeNoEditImages;
    NSArray *_inactiveImages;
}

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (nonatomic) double edgeInset;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)bounce;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_leftHandleRect;
- (double)_bounceValueForFraction:(double)a0;
- (id)_handleImages;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rightHandleRect;
- (void)_updateHandleImages;
- (int)handleForPoint:(struct CGPoint { double x0; double x1; })a0 hitOffset:(double *)a1;
- (BOOL)pointInsideLeftHandle:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)pointInsideRightHandle:(struct CGPoint { double x0; double x1; })a0;

@end
