@class CDComplicationHostingView;

@interface NTKRichComplicationCornerGaugeSwiftUIView : NTKRichComplicationCornerGaugeCustomView {
    CDComplicationHostingView *_swiftUIView;
}

+ (BOOL)handlesComplicationTemplate:(id)a0;
+ (BOOL)supportsComplicationFamily:(long long)a0;

- (id)_outerView;
- (void).cxx_destruct;
- (void)setPaused:(BOOL)a0;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
