@class UIImage, CALayer;

@interface SOSAnimatingSpriteImageView : UIView {
    CALayer *_imageLayer;
}

@property (retain, nonatomic) UIImage *spriteImage;
@property (nonatomic) long long spriteFrameCount;
@property (nonatomic) long long spriteColumnCount;
@property (nonatomic) unsigned long long framesPerSecond;

+ (id)_createNewSpriteArray:(id)a0 currentFrame:(unsigned long long)a1 arraySize:(unsigned long long)a2 interrupted:(BOOL)a3;

- (void)startAnimating;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setTintColor:(id)a0;
- (void)layoutSubviews;
- (BOOL)isAnimating;
- (void).cxx_destruct;
- (id)_centerPointValues;
- (unsigned long long)_findSpriteIndex:(struct CGPoint { double x0; double x1; })a0 centerPoints:(id)a1;
- (struct CGSize { double x0; double x1; })_spriteFrameSize;
- (void)animateOnce;
- (void)stopAnimatingFinishingCycle:(BOOL)a0;
- (void)updateLayerWithTintColor;

@end
