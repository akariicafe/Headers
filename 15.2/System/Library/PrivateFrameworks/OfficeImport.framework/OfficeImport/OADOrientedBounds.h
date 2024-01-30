@interface OADOrientedBounds : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mBounds;
    float mRotation;
    unsigned char mFlipX : 1;
    unsigned char mFlipY : 1;
    int mModeX;
    int mModeY;
}

+ (id)orientedBoundsWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 rotation:(float)a1 flipX:(BOOL)a2 flipY:(BOOL)a3;
+ (id)orientedBoundsWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (BOOL)directionCloserToVerticalThanToHorizontal:(float)a0;

- (float)rotation;
- (void)setRotation:(float)a0;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (int)xMode;
- (int)yMode;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)description;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (BOOL)flipX;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)flipY;
- (unsigned long long)hash;
- (void)setFlipX:(BOOL)a0;
- (void)setFlipY:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingBox;
- (void)setOrientedBounds:(id)a0;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 rotation:(float)a1 flipX:(BOOL)a2 flipY:(BOOL)a3;
- (struct CGSize { double x0; double x1; })boundingBoxSize;
- (void)setXMode:(int)a0;
- (void)setYMode:(int)a0;
- (BOOL)isEqualToOrientedBounds:(id)a0;

@end
