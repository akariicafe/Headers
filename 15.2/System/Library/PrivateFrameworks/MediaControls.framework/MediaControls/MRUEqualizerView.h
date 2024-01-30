@class NSArray, MRUVisualStylingProvider, NSString;

@interface MRUEqualizerView : UIView <MRUVisualStylingProviderObserver>

@property (retain, nonatomic) NSArray *barViews;
@property (nonatomic) double width;
@property (nonatomic) double spacing;
@property (nonatomic, getter=isAnimating) BOOL animating;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)updateVisualStyling;
- (void)stopAnimating;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)startAnimating;
- (void)visualStylingProviderDidChange:(id)a0;
- (id)initWithNumberOfBars:(unsigned long long)a0 width:(double)a1 spacing:(double)a2;
- (void)updateBarHeights;

@end
