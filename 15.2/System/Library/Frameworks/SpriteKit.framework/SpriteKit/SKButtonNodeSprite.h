@class SKAction, NSObject;
@protocol SKButtonNodeSpriteDelegate;

@interface SKButtonNodeSprite : SKSpriteNode {
    id /* block */ _downBlock;
    id /* block */ _upBlock;
    id /* block */ _upInsideBlock;
    int _touches;
}

@property (weak, nonatomic) NSObject<SKButtonNodeSpriteDelegate> *delegate;
@property (retain, nonatomic) SKAction *downAction;
@property (retain, nonatomic) SKAction *upAction;

+ (BOOL)supportsSecureCoding;
+ (id)buttonWithFontNamed:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)onTouchUpInside:(id /* block */)a0;
- (void)touchBegan:(unsigned long long)a0 location:(struct CGPoint { double x0; double x1; })a1;
- (void)touchEnded:(unsigned long long)a0 location:(struct CGPoint { double x0; double x1; })a1;
- (void)touchMoved:(unsigned long long)a0 location:(struct CGPoint { double x0; double x1; })a1;
- (void)onTouchUp:(id /* block */)a0;
- (void)onTouchDownInside:(id /* block */)a0;

@end
