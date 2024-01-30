@class _SBGainMapView, UIView;

@interface _SBSystemApertureGainMapView : UIView <SBSystemApertureGainMapBackedRendering> {
    _SBGainMapView *_gainMapView;
    struct SBSystemApertureContainerRenderingConfiguration { long long renderingStyle; long long cloningStyle; } _renderingConfiguration;
    UIView *_clonedGainMapSubstituteView;
}

@property (nonatomic) struct SBSystemApertureContainerRenderingConfiguration { long long x0; long long x1; } renderingConfiguration;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setCornerRadius:(double)a0;
- (void)_setContinuousCornerRadius:(double)a0;
- (void).cxx_destruct;
- (void)sb_setID0CornerRadius:(double)a0;

@end
