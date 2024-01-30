@class CDComplicationHostingView;

@interface NTKRichComplicationRectangularFullSwiftUIView : NTKRichComplicationRectangularFullBaseView {
    CDComplicationHostingView *_swiftUIView;
}

+ (BOOL)handlesComplicationTemplate:(id)a0;

- (void).cxx_destruct;
- (void)setPaused:(BOOL)a0;
- (id)content;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (void)_editingDidEnd;

@end
