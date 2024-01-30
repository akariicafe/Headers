@interface PDAnimateScaleBehavior : PDAnimateBehavior {
    struct CGPoint { double x; double y; } mTo;
    struct CGPoint { double x; double y; } mFrom;
    struct CGPoint { double x; double y; } mBy;
    BOOL mHasTo;
    BOOL mHasFrom;
    BOOL mHasBy;
}

- (struct CGPoint { double x0; double x1; })to;
- (struct CGPoint { double x0; double x1; })by;
- (BOOL)hasTo;
- (void)setTo:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)hasBy;
- (void)setFrom:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isEqual:(id)a0;
- (struct CGPoint { double x0; double x1; })from;
- (BOOL)hasFrom;
- (id)init;
- (unsigned long long)hash;
- (void)setBy:(struct CGPoint { double x0; double x1; })a0;

@end
