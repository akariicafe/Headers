@interface CHDBubbleType : CHDChartType {
    BOOL mShowNegativeBubbles;
    BOOL mSizeRepresentsRadius;
    int mBubbleScale;
}

- (id)initWithChart:(id)a0;
- (BOOL)is3DType;
- (int)defaultLabelPosition;
- (BOOL)isShowNegBubbles;
- (void)setShowNegBubbles:(BOOL)a0;
- (int)bubbleScale;
- (void)setBubbleScale:(int)a0;
- (BOOL)isSizeRepresentingRadius;
- (void)setSizeRepresentsRadius:(BOOL)a0;

@end
