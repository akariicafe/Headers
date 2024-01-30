@class NSString;

@interface Highlights.WorkoutRouteView : UIImageView {
    void /* unknown type, empty encoding */ $__lazy_storage_$_routeMapGenerator;
    void /* unknown type, empty encoding */ $__lazy_storage_$_activityIndicator;
    void /* unknown type, empty encoding */ $__lazy_storage_$_upperSeparator;
    void /* unknown type, empty encoding */ $__lazy_storage_$_lowerSeparator;
    void /* unknown type, empty encoding */ routeHashValue;
    void /* unknown type, empty encoding */ routeCache;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic, readonly) NSString *debugDescription;

- (void)layoutSubviews;
- (id)initWithImage:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithImage:(id)a0 highlightedImage:(id)a1;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;

@end
