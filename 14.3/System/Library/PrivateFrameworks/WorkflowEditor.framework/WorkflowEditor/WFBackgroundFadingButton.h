@class NSMutableDictionary;

@interface WFBackgroundFadingButton : UIButton

@property (retain, nonatomic) NSMutableDictionary *backgroundColorsByState;
@property (nonatomic) BOOL derivesTitleColorFromTintColor;
@property (nonatomic) BOOL derivesBackgroundColorFromTintColor;

- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (void)setBackgroundColor:(id)a0 forState:(unsigned long long)a1;
- (void)setEnabled:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)updateBackgroundColorAnimated:(BOOL)a0;

@end
