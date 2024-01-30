@interface TSKStretchableBackgroundButton : UIButton

@property (nonatomic) long long backgroundTopCapHeight;
@property (nonatomic) long long backgroundLeftCapWidth;

- (void)awakeFromNib;
- (void)setBackgroundImage:(id)a0 forState:(unsigned long long)a1;
- (void)p_resetBackgroundImageForState:(unsigned long long)a0;
- (void)guessBackgroundTopLeftCapSize;
- (void)p_resetBackgroundImage;
- (void)setBackgroundTopLeftCapHeight:(long long)a0 width:(long long)a1;

@end
