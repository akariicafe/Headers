@interface CCUIMutableC2AnimationParameters : CCUIC2AnimationParameters

@property (nonatomic, getter=isInteractive) BOOL interactive;
@property (nonatomic) double tension;
@property (nonatomic) double friction;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setFriction:(double)a0;
- (void)setInteractive:(BOOL)a0;
- (void)setTension:(double)a0;

@end
