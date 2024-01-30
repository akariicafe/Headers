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

- (int)direction;
- (void)setDirection:(int)a0;
- (void)setColorSpace:(int)a0;
- (void).cxx_destruct;
- (int)colorSpace;
- (BOOL)hasFrom;
- (id)from;
- (BOOL)hasTo;
- (void)setFrom:(id)a0;
- (void)setTo:(id)a0;
- (id)to;
- (double[3] *)by;
- (void)setBy:(double[3])a0;
- (BOOL)hasBy;
- (BOOL)hasColorDirection;
- (BOOL)hasColorSpace;

@end
