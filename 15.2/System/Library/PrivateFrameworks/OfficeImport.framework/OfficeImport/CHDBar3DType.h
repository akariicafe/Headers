@interface CHDBar3DType : CHDBar2DType {
    int mGapDepth;
    int mShapeType;
}

+ (BOOL)is3DType;
+ (id)stringWithShapeType:(int)a0;

- (int)shapeType;
- (id)initWithChart:(id)a0;
- (void)setGapDepth:(int)a0;
- (void)setShapeType:(int)a0;
- (int)gapDepth;

@end
