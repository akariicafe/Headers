@class UIImage, CALayer;

@interface FIUIAnimatingSpriteImageView : UIView {
    CALayer *_imageLayer;
}

@property (retain, nonatomic) UIImage *spriteImage;
@property (nonatomic) long long spriteFrameCount;
@property (nonatomic) long long spriteColumnCount;
@property (nonatomic) unsigned long long framesPerSecond;

+ (unsigned long long)_findSpriteIndex:(struct CGPoint { double x0; double x1; })a0 centerPoints:(id)a1;
+ (id)_createNewSpriteArray:(id)a0 currentFrame:(unsigned long long)a1 arraySize:(unsigned long long)a2 interrupted:(BOOL)a3;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)isAnimating;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)startAnimating;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_spriteFrameSize;
- (void)stopAnimatingFinishingCycle:(BOOL)a0;
- (id)_centerPointValues;
- (void)animateOnce;

@end
