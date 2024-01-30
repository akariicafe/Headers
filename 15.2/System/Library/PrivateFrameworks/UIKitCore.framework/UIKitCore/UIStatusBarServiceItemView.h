@class NSString;

@interface UIStatusBarServiceItemView : UIStatusBarItemView {
    NSString *_serviceString;
    NSString *_crossfadeString;
    unsigned long long _crossfadeStep;
    double _maxWidth;
    double _serviceWidth;
    double _crossfadeWidth;
    int _contentType;
    BOOL _loopingNecessaryForString;
    BOOL _loopNowIfNecessary;
    BOOL _loopingNow;
    double _letterSpacing;
}

- (BOOL)updateForContentType:(int)a0 serviceString:(id)a1 serviceCrossfadeString:(id)a2 maxWidth:(double)a3 actions:(int)a4;
- (id)contentsImage;
- (long long)legibilityStyle;
- (double)standardPadding;
- (BOOL)updateForNewData:(id)a0 actions:(int)a1;
- (double)updateContentsAndWidth;
- (void)setVisible:(BOOL)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 duration:(double)a2;
- (double)extraRightPadding;
- (BOOL)animatesDataChange;
- (void)performPendedActions;
- (void).cxx_destruct;
- (double)resetContentOverlap;
- (double)addContentOverlap:(double)a0;
- (id)accessibilityHUDRepresentation;
- (BOOL)_loopingNecessary;
- (BOOL)_crossfaded;
- (void)_crossfadeStepAnimation;
- (void)_loopAnimationDidStopInDirection:(BOOL)a0;
- (id)_crossfadeContentsImage;
- (id)_contentsImageFromString:(id)a0 withWidth:(double)a1 letterSpacing:(double)a2;
- (id)_serviceContentsImage;

@end
