@class UIScrollView, TKKeyPathObserver;

@interface MCLContentSizingView : UIView {
    TKKeyPathObserver *_observer;
}

@property (retain, nonatomic) UIScrollView *contentView;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;

@end
