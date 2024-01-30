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
- (int)valueType;
- (void)setTo:(id)a0;
- (void)setValueType:(int)a0;
- (BOOL)hasValueType;
- (void).cxx_destruct;
- (void)setFrom:(id)a0;
- (id)from;
- (id)init;
- (void)setBy:(id)a0;
- (BOOL)hasCalcMode;
- (int)calcMode;
- (void)setCalcMode:(int)a0;

@end
