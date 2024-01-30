@class UIScrollView, UIIndexBarAccessoryView, UIView;

@interface _UIIndexBarStaticScrollAccessory : _UIStaticScrollBar <UIScrollAccessory> {
    UIView *_containerView;
}

@property (nonatomic) BOOL showIndexBar;
@property (readonly, nonatomic) UIIndexBarAccessoryView *indexBarView;
@property (nonatomic) BOOL shouldInsetButtonsForIndex;
@property (weak, nonatomic) UIScrollView *scrollView;
@property (nonatomic) long long edge;
@property (readonly, nonatomic) BOOL overlay;

- (void)update;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (long long)desiredAccessoryEdge;

@end
