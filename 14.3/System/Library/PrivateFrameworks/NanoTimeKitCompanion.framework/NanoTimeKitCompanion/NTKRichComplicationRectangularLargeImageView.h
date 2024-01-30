@class NTKRichComplicationImageView;

@interface NTKRichComplicationRectangularLargeImageView : NTKRichComplicationRectangularHeadlineLargeBodyView {
    NTKRichComplicationImageView *_imageView;
}

+ (BOOL)handlesComplicationTemplate:(id)a0;
+ (BOOL)supportsComplicationFamily:(long long)a0;

- (id)body;
- (void)setPaused:(BOOL)a0;
- (void).cxx_destruct;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)_enumerateQuadViewsWithBlock:(id /* block */)a0;
- (void)renderSynchronouslyWithImageQueueDiscard:(BOOL)a0 inGroup:(id)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)headerTextProviderFromTemplate:(id)a0;

@end
