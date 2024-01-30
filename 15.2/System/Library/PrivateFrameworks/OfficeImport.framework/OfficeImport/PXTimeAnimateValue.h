@class NSString;

@interface PXTimeAnimateValue : NSObject {
    id mVariant;
    BOOL mHasPercentTime;
    double mPercentTime;
    NSString *mFormula;
}

- (id)variant;
- (void)setVariant:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)formula;
- (void)setFormula:(id)a0;
- (BOOL)hasPercentTime;
- (double)percentTime;
- (void)setPercentTime:(double)a0;

@end
