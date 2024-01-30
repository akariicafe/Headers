@class _TtC19ComplicationDisplay23ComplicationHostingView;

@interface NTKRichComplicationRectangularLargeSwiftUIView : NTKRichComplicationRectangularHeadlineLargeBodyView {
    _TtC19ComplicationDisplay23ComplicationHostingView *_swiftUIView;
}

+ (BOOL)handlesComplicationTemplate:(id)a0;
+ (BOOL)supportsComplicationFamily:(long long)a0;

- (id)body;
- (void)setPaused:(BOOL)a0;
- (void).cxx_destruct;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)headerTextProviderFromTemplate:(id)a0;
- (void)_editingDidEnd;

@end
