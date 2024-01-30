@class UIColor, NSString, UIView;
@protocol _UIButtonMaskAnimationViewDelegate;

@interface _UIButtonMaskAnimationView : UIView <CAAnimationDelegate> {
    unsigned long long _hardEdge;
    UIView *_hardEdgeLine;
}

@property (nonatomic) id<_UIButtonMaskAnimationViewDelegate> delegate;
@property double borderWidth;
@property (nonatomic) UIColor *borderColor;
@property unsigned long long hardEdge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForLine;
- (void).cxx_destruct;
- (id)init;

@end
