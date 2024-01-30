@class NSString, MRUVisualStylingProvider, UIView, MRUCAPackageView;

@interface MRUTransportButton : MPButton <MRUVisualStylingProviderObserver>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) MRUCAPackageView *packageView;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) long long pointerStyle;
@property (nonatomic) double cursorScale;
@property (nonatomic, getter=isDimmed) BOOL dimmed;
@property (nonatomic) double packageScale;
@property (nonatomic) BOOL showHighlightCircle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSelected:(BOOL)a0;
- (void)updateVisualStyling;
- (void)clearPackage;
- (void)visualStylingProviderDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)acuis_wantsPriorityOverTargetOfGestureRecognizer:(id)a0;
- (void)setAsset:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)updateContentView;
- (void)layoutSubviews;
- (void)setPackageGlyphState:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (void)updateBackgroundView;
- (void)setImage:(id)a0 forState:(unsigned long long)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (id)pointerStyleWithProposedEffect:(id)a0 proposedShape:(id)a1;
- (void)setAsset:(id)a0 animated:(BOOL)a1;

@end
