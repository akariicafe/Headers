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

- (id)accessibilityHUDRepresentation;
- (id)contentsImage;
- (long long)legibilityStyle;
- (void).cxx_destruct;
- (double)standardPadding;
- (id)_contentsImageFromString:(id)a0 withWidth:(double)a1 letterSpacing:(double)a2;
- (id)_crossfadeContentsImage;
- (void)_crossfadeStepAnimation;
- (BOOL)_crossfaded;
- (void)_loopAnimationDidStopInDirection:(BOOL)a0;
- (BOOL)_loopingNecessary;
- (id)_serviceContentsImage;
- (double)addContentOverlap:(double)a0;
- (BOOL)animatesDataChange;
- (double)extraRightPadding;
- (void)performPendedActions;
- (double)resetContentOverlap;
- (void)setVisible:(BOOL)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 duration:(double)a2;
- (double)updateContentsAndWidth;
- (BOOL)updateForContentType:(int)a0 serviceString:(id)a1 serviceCrossfadeString:(id)a2 maxWidth:(double)a3 actions:(int)a4;
- (BOOL)updateForNewData:(id)a0 actions:(int)a1;

@end
