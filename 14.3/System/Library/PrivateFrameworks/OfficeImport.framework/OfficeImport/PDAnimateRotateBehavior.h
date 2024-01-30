@interface PDAnimateRotateBehavior : PDAnimateBehavior {
    double mTo;
    double mFrom;
    double mBy;
    BOOL mHasTo;
    BOOL mHasFrom;
    BOOL mHasBy;
}

- (double)to;
- (double)by;
- (double)from;
- (BOOL)hasTo;
- (id)init;
- (void)setTo:(double)a0;
- (BOOL)hasFrom;
- (BOOL)hasBy;
- (void)setFrom:(double)a0;
- (void)setBy:(double)a0;

@end
