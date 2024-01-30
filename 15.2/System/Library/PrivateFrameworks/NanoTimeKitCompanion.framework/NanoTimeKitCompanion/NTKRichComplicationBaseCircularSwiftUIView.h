@class CDComplicationHostingView;

@interface NTKRichComplicationBaseCircularSwiftUIView : NTKRichComplicationCircularBaseView {
    CDComplicationHostingView *_swiftUIView;
}

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setPaused:(BOOL)a0;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)initWithFamily:(long long)a0;
- (void)_editingDidEnd;

@end
