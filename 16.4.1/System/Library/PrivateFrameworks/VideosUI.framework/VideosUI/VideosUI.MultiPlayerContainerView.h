@interface VideosUI.MultiPlayerContainerView : UIView {
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ $__lazy_storage_$_volumeIndicator;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dimmingView;
    void /* unknown type, empty encoding */ isDimmed;
    void /* unknown type, empty encoding */ selectHandler;
    void /* unknown type, empty encoding */ longPressHandler;
    void /* unknown type, empty encoding */ playerViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_singlePressGesture;
    void /* unknown type, empty encoding */ $__lazy_storage_$_longPressGesture;
    void /* unknown type, empty encoding */ volumeObserver;
}

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)longPressWithGesture:(id)a0;
- (void)singlePressWithGesture:(id)a0;

@end
