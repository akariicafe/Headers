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
- (BOOL)hasTo;
- (void)setTo:(double)a0;
- (BOOL)hasBy;
- (void)setFrom:(double)a0;
- (double)from;
- (BOOL)hasFrom;
- (id)init;
- (void)setBy:(double)a0;

@end
