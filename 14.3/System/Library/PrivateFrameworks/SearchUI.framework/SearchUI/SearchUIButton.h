@interface SearchUIButton : TLKButton

@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL useCompactMode;

- (void)updateWithType:(unsigned long long)a0;
- (id)initWithType:(unsigned long long)a0;
- (void)setFixedSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isPlayButton;

@end
