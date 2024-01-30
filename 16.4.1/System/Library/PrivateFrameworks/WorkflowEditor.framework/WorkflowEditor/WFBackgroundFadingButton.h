@class NSMutableDictionary;

@interface WFBackgroundFadingButton : UIButton

@property (retain, nonatomic) NSMutableDictionary *backgroundColorsByState;
@property (nonatomic) BOOL derivesTitleColorFromTintColor;
@property (nonatomic) BOOL derivesBackgroundColorFromTintColor;

- (void)setSelected:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)tintColorDidChange;
- (void)setEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0 forState:(unsigned long long)a1;
- (void)updateBackgroundColorAnimated:(BOOL)a0;

@end
