@class NSString, MRUVisualStylingProvider;

@interface MRUButton : MPButton <MRUVisualStylingProviderObserver>

@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) long long pointerStyle;
@property (nonatomic) double cursorScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateVisualStyling;
- (void)setEnabled:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)visualStylingProviderDidChange:(id)a0;
- (id)pointerStyleWithProposedEffect:(id)a0 proposedShape:(id)a1;

@end
