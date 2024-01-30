@class NSTimer, ICTableScrollView, UIScrollView, ICTableAttachmentViewController;
@protocol ICTableAutoScrollerDelegate;

@interface ICTableAutoScroller : NSObject

@property (weak, nonatomic) ICTableAttachmentViewController *tableAttachmentViewController;
@property (weak, nonatomic) UIScrollView *verticalScrollView;
@property (weak, nonatomic) ICTableScrollView *horizontalScrollView;
@property (nonatomic) unsigned long long scrollDirectionMode;
@property (nonatomic) BOOL isScrolling;
@property (retain, nonatomic) NSTimer *autoscrollTimer;
@property (readonly, weak, nonatomic) UIScrollView *targetScrollView;
@property (weak, nonatomic) id<ICTableAutoScrollerDelegate> delegate;
@property (nonatomic) double topThresholdDistance;
@property (nonatomic) double bottomThresholdDistance;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetFrame;

- (void).cxx_destruct;
- (void)autoScrollWithScrollFactor:(double)a0 scrollDirectionMode:(unsigned long long)a1;
- (id)initWithTableAttachmentViewController:(id)a0 scrollDirectionMode:(unsigned long long)a1;
- (double)scrollFactorForScrollDirectionMode:(unsigned long long)a0;
- (void)stopAndInvalidate;
- (void)stopAutoscrollTimer;
- (void)updateAutoscrollTimer:(id)a0;

@end
