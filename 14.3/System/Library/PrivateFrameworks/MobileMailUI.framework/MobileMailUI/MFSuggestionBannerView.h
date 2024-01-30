@class NSArray, SGBanner;

@interface MFSuggestionBannerView : MFMessageHeaderViewBlock

@property (retain, nonatomic) NSArray *bannerConstraints;
@property (retain, nonatomic) SGBanner *banner;

- (void)willMoveToSuperview:(id)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSeparatorDrawsFlushWithTrailingEdge:(BOOL)a0;
- (void)setSeparatorDrawsFlushWithLeadingEdge:(BOOL)a0;
- (void)commonInitWithBanner:(id)a0;
- (id)_constraintsForEdges:(unsigned long long)a0 banner:(id)a1 useLayoutMarginsGuide:(BOOL)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 banner:(id)a1;

@end
