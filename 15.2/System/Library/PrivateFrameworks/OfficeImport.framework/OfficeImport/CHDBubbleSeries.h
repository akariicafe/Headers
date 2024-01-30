@class CHDData;

@interface CHDBubbleSeries : CHDSeries {
    CHDData *mSizeData;
    BOOL mBubble3D;
    BOOL mInvertIfNegative;
    BOOL mShowBubbleSize;
}

- (void).cxx_destruct;
- (BOOL)isShowBubbleSize;
- (void)setShowBubbleSize:(BOOL)a0;
- (void)setCategoryData:(id)a0;
- (BOOL)isBubble3D;
- (id)sizeData;
- (void)setSizeData:(id)a0;
- (void)setBubble3D:(BOOL)a0;
- (BOOL)isInvertIfNegative;
- (void)setInvertIfNegative:(BOOL)a0;

@end
