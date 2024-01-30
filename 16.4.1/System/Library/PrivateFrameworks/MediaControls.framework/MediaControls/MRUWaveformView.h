@class UIView, NSTimer, NSArray, UIImage, CALayer, UIImageView, NSString, MRUWaveformData, MRUWaveformSettings, MRUVisualStylingProvider, UIColor;

@interface MRUWaveformView : UIView <MRUVisualStylingProviderObserver>

@property (retain, nonatomic) CALayer *artworkLightenLayer;
@property (retain, nonatomic) CALayer *artworkDimLayer;
@property (retain, nonatomic) CALayer *contentLayer;
@property (retain, nonatomic) CALayer *artworkLayer;
@property (retain, nonatomic) CALayer *fallbackLayer;
@property (retain, nonatomic) UIView *barsView;
@property (retain, nonatomic) UIImageView *routeImageView;
@property (retain, nonatomic) NSArray *bars;
@property (retain, nonatomic) MRUWaveformSettings *settings;
@property (retain, nonatomic) NSTimer *transitionTimer;
@property (retain, nonatomic) MRUWaveformData *waveformData;
@property (retain, nonatomic) UIImage *artworkImage;
@property (retain, nonatomic) UIColor *fillColor;
@property (retain, nonatomic) NSString *remoteRouteSymbol;
@property (nonatomic, getter=isDimmed) BOOL dimmed;
@property (nonatomic) unsigned long long context;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)visualStylingProviderDidChange:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(unsigned long long)a1;
- (void)updateVisualStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(unsigned long long)a1 settings:(id)a2;
- (void)applyContext:(unsigned long long)a0;
- (void)updateArtworkFilters;
- (void)updateLayers;

@end
