@class OADColor;

@interface PDAnimateColorBehavior : PDAnimateBehavior {
    BOOL mHasBy;
    double mBy[3];
    BOOL mHasFrom;
    OADColor *mFrom;
    BOOL mHasTo;
    OADColor *mTo;
    BOOL mHasColorSpace;
    int mColorSpace;
    BOOL mHasColorDirection;
    int mDirection;
}

- (id)to;
- (double[3] *)by;
- (int)colorSpace;
- (void)setDirection:(int)a0;
- (void)setColorSpace:(int)a0;
- (BOOL)hasTo;
- (void)setTo:(id)a0;
- (BOOL)hasBy;
- (void).cxx_destruct;
- (void)setFrom:(id)a0;
- (id)from;
- (BOOL)hasFrom;
- (int)direction;
- (void)setBy:(double[3])a0;
- (BOOL)hasColorSpace;
- (BOOL)hasColorDirection;

@end
