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

- (int)valueType;
- (void)setValueType:(int)a0;
- (BOOL)hasValueType;
- (id)init;
- (void).cxx_destruct;
- (id)from;
- (void)setFrom:(id)a0;
- (void)setTo:(id)a0;
- (id)to;
- (id)by;
- (void)setBy:(id)a0;
- (int)calcMode;
- (BOOL)hasCalcMode;
- (void)setCalcMode:(int)a0;

@end
