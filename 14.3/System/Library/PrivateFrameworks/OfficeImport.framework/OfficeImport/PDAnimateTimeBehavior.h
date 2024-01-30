@class NSString;

@interface PDAnimateTimeBehavior : PDAnimateBehavior {
    NSString *mTo;
    NSString *mFrom;
    NSString *mBy;
    BOOL mHasCalcMode;
    int mCalcMode;
    BOOL mHasValueType;
    int mValueType;
}

- (id)to;
- (id)by;
- (id)from;
- (int)valueType;
- (id)init;
- (void).cxx_destruct;
- (void)setValueType:(int)a0;
- (void)setTo:(id)a0;
- (BOOL)hasValueType;
- (void)setFrom:(id)a0;
- (void)setBy:(id)a0;
- (BOOL)hasCalcMode;
- (int)calcMode;
- (void)setCalcMode:(int)a0;

@end
