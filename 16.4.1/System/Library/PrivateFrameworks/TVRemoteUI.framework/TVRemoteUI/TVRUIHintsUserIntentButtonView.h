@class TVRUIHintsGlyphView, UIView;
@protocol TVRUIHintsStyleProvider;

@interface TVRUIHintsUserIntentButtonView : UIView

@property (retain, nonatomic) UIView *buttonOutline;
@property (retain, nonatomic) id<TVRUIHintsStyleProvider> styleProvider;
@property (nonatomic) unsigned long long presentation;
@property (retain, nonatomic) TVRUIHintsGlyphView *glyphView;

- (void).cxx_destruct;
- (void)_setupConstraintsForButtonEdge:(unsigned int)a0;
- (id)initWithPresentation:(unsigned long long)a0 styleProvider:(id)a1 buttonEdge:(unsigned int)a2;

@end
