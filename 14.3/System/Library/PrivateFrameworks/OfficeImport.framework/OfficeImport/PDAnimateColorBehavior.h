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
- (void)setColorSpace:(int)a0;
- (int)colorSpace;
- (id)from;
- (BOOL)hasTo;
- (void)setDirection:(int)a0;
- (void).cxx_destruct;
- (void)setTo:(id)a0;
- (int)direction;
- (BOOL)hasFrom;
- (BOOL)hasBy;
- (void)setFrom:(id)a0;
- (void)setBy:(double[3])a0;
- (BOOL)hasColorSpace;
- (BOOL)hasColorDirection;

@end
