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
- (struct CGPoint { double x0; double x1; })from;
- (BOOL)hasTo;
- (id)init;
- (void)setTo:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)hasFrom;
- (BOOL)hasBy;
- (unsigned long long)hash;
- (void)setFrom:(struct CGPoint { double x0; double x1; })a0;
- (void)setBy:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isEqual:(id)a0;

@end
