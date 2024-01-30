@class NSNumber, PUFilmstripView;

@interface PUFilmstripWrapperView : UIView

@property (nonatomic, setter=setAnimating:) BOOL isAnimating;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleRect;
@property (retain, nonatomic) PUFilmstripView *filmstripView;
@property (nonatomic, setter=setExpanded:) BOOL isExpanded;
@property (nonatomic, setter=setExpandedSize:) struct CGSize { double width; double height; } expandedSize;
@property (copy, nonatomic) NSNumber *anchoredLeft;

- (void).cxx_destruct;
- (void)layoutSubviews;

@end
