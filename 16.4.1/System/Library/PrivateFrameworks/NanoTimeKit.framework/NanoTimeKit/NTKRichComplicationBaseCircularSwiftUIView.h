@class CDComplicationHostingView;

@interface NTKRichComplicationBaseCircularSwiftUIView : NTKRichComplicationCircularBaseView {
    CDComplicationHostingView *_swiftUIView;
}

- (void)setPaused:(BOOL)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithFamily:(long long)a0;
- (void)_editingDidEnd;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
