@class NSData;

@interface ComplicationDisplay.ComplicationHostingView : UIView <CLKMonochromeComplicationView> {
    void /* unknown type, empty encoding */ inPreview;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ isMonochrome;
    void /* unknown type, empty encoding */ hostingViewController;
    void /* unknown type, empty encoding */ hostingViewWrapper;
    void /* unknown type, empty encoding */ renderStatsHandler;
    void /* unknown type, empty encoding */ viewData;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ filterProvider;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ rendersAsynchronously;
@property (nonatomic, copy) id /* block */ renderStatsHandler;
@property (nonatomic) void /* unknown type, empty encoding */ shouldCallRenderStatsHandlerOnMainQueue;
@property (nonatomic) void /* unknown type, empty encoding */ shouldAccentDesaturatedView;
@property (nonatomic) void /* unknown type, empty encoding */ supportsComplicationForeground;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic, copy) NSData *viewData;
@property (nonatomic) void /* unknown type, empty encoding */ paused;

+ (id)sync;
+ (id)async;

- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)waitForAsyncRendering;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 async:(BOOL)a1;

@end
