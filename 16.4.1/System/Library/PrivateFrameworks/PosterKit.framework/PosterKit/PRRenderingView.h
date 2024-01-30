@class PRPosterWindow, UIView;
@protocol PRRenderingViewOwner;

@interface PRRenderingView : UIView {
    id<PRRenderingViewOwner> _owner;
    PRPosterWindow *_window;
    UIView *_invertedBackgroundCutoutView;
}

@property (nonatomic) long long level;
@property (nonatomic) double parallaxFactor;
@property (nonatomic, getter=isAlphaInverted) BOOL alphaInverted;

- (BOOL)isEmpty;
- (id)initWithOwner:(id)a0 scene:(id)a1 level:(long long)a2 userInteractionEnabled:(BOOL)a3;
- (void)invalidate;
- (void).cxx_destruct;

@end
