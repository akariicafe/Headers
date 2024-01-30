@class NSString, NSLayoutConstraint, UIView;
@protocol _UITAMICAdaptorViewDelegate;

@interface _UITAMICAdaptorView : UIView <_UIGeometryChangeObserver> {
    NSLayoutConstraint *_width;
    NSLayoutConstraint *_height;
    struct CGSize { double width; double height; } _layoutSize;
    BOOL _inLayout;
}

@property (readonly, nonatomic) UIView *view;
@property (nonatomic) float sizingPriority;
@property (weak, nonatomic) id<_UITAMICAdaptorViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldWrapView:(id)a0;

- (void)_geometryChanged:(const struct { int x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; id x5; id x6; id x7; id x8; } *)a0 forAncestor:(id)a1;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateForAvailableSize;
- (id)initWithView:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
