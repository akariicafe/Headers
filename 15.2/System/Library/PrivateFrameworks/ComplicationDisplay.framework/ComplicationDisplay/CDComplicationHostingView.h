@class NSData, NSString, _TtC19ComplicationDisplay20_ComplicationHosting;
@protocol CLKMonochromeFilterProvider;

@interface CDComplicationHostingView : UIView <CLKMonochromeComplicationView>

@property (readonly, nonatomic) _TtC19ComplicationDisplay20_ComplicationHosting *hosting;
@property (readonly, nonatomic) BOOL rendersAsynchronously;
@property (copy, nonatomic) id /* block */ renderStatsHandler;
@property (nonatomic) BOOL shouldCallRenderStatsHandlerOnMainQueue;
@property (nonatomic) BOOL shouldAccentDesaturatedView;
@property (copy, nonatomic) NSData *viewData;
@property (nonatomic) BOOL paused;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sync;
+ (id)async;

- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (void)waitForAsyncRendering;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 async:(BOOL)a1;

@end
