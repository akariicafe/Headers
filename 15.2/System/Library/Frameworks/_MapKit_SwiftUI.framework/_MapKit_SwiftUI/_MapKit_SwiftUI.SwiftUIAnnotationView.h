@interface _MapKit_SwiftUI.SwiftUIAnnotationView : MKAnnotationView {
    void /* unknown type, empty encoding */ wrappedView;
    void /* unknown type, empty encoding */ anchorPoint;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ hostView;
}

@property (class, nonatomic, readonly) BOOL _wantsViewBasedPositioning;

@property (nonatomic, readonly) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } safeAreaInsets;

- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;

@end
