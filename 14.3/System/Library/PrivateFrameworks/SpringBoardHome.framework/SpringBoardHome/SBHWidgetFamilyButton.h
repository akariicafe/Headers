@class NSLayoutConstraint;

@interface SBHWidgetFamilyButton : UIButton

@property (retain, nonatomic) NSLayoutConstraint *squareAspectRatioConstraint;

- (id)init;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (void)layoutSubviews;
- (void)setTitle:(id)a0 forState:(unsigned long long)a1;
- (void)_updateAspectRatioConstraint;
- (void)_updateBackgroundColorAnimated:(BOOL)a0;
- (BOOL)_hasSingleCharacterTitle;
- (BOOL)_drawsAsLight;
- (void)setHighlighted:(BOOL)a0;

@end
