@class TVRUIHintsGlyphView, UIView;
@protocol TVRUIHintsStyleProvider;

@interface TVRUIHintsVolumeButtonsView : UIView

@property (retain, nonatomic) UIView *topButtonOutline;
@property (retain, nonatomic) UIView *bottomButtonOutline;
@property (retain, nonatomic) id<TVRUIHintsStyleProvider> styleProvider;
@property (nonatomic) double buttonHeight;
@property (nonatomic) unsigned long long presentation;
@property (retain, nonatomic) TVRUIHintsGlyphView *glyphView;

- (void).cxx_destruct;
- (void)_setupConstraintsForButtonEdge:(unsigned int)a0;
- (void)_setupConstraintsForLeftAndRightSideButtons;
- (id)initWithPresentation:(unsigned long long)a0 styleProvider:(id)a1 buttonEdge:(unsigned int)a2 buttonHeight:(double)a3;

@end
