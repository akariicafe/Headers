@class NTKRichComplicationImageView;

@interface NTKRichComplicationRectangularFullImageView : NTKRichComplicationRectangularFullBaseView {
    NTKRichComplicationImageView *_imageView;
}

+ (BOOL)handlesComplicationTemplate:(id)a0;

- (void)setPaused:(BOOL)a0;
- (void).cxx_destruct;
- (id)content;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)_enumerateQuadViewsWithBlock:(id /* block */)a0;
- (void)renderSynchronouslyWithImageQueueDiscard:(BOOL)a0 inGroup:(id)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
