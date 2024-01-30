@class KNAnimatedSlideView, KNPlaybackSession;

@interface KNOffscreenController : NSObject

@property (readonly, weak, nonatomic) KNAnimatedSlideView *animatedSlideView;
@property (readonly, nonatomic) KNPlaybackSession *session;
@property (readonly, nonatomic) struct CGSize { double width; double height; } outputSize;

- (void)dealloc;
- (void).cxx_destruct;
- (struct CGImage { } *)copyImageOfCurrentEventIgnoringBuildVisilibity:(BOOL)a0;
- (void)drawCurrentEventIntoContext:(struct CGContext { } *)a0 intoRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ignoreBuildVisibility:(BOOL)a2;
- (void)generateImageOfCurrentEventWithCompletonHandler:(id /* block */)a0;
- (BOOL)gotoSlideNode:(id)a0 andEvent:(unsigned long long)a1;
- (id)initWithShow:(id)a0 canvasDelegate:(id)a1;
- (id)initWithShow:(id)a0 canvasDelegate:(id)a1 outputSize:(struct CGSize { double x0; double x1; })a2;

@end
