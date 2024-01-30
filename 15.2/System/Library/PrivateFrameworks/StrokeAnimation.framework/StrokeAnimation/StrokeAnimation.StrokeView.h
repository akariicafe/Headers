@protocol SAStrokeAnimatingDelegate;

@interface StrokeAnimation.StrokeView : UIView <SAStrokeVisualResponse> {
    void /* unknown type, empty encoding */ animationDelegate;
    void /* unknown type, empty encoding */ animationLayers;
    void /* unknown type, empty encoding */ animationView;
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ strokeData;
    void /* unknown type, empty encoding */ strokePathInfos;
    void /* unknown type, empty encoding */ pronunciationLabel;
    void /* unknown type, empty encoding */ isAnimating;
}

@property (nonatomic, retain) id<SAStrokeAnimatingDelegate> interactionDelegate;

- (void)endAnimation;
- (void)startAnimationRepeating:(BOOL)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWith:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_didTapView:(id)a0;

@end
