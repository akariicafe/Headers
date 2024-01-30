@class NSString, EDResources, NSMutableArray;

@interface EDConditionalFormattingRule : NSObject {
    EDResources *mResources;
    int mType;
    int mOperator;
    NSMutableArray *mFormulas;
    unsigned long long mDifferentialStyleIndex;
    BOOL mStopIfTrue;
    BOOL mAppliesToDateOnly;
    long long mPriority;
    BOOL mAboveAverage;
    BOOL mBottom;
    BOOL mEqualAverage;
    BOOL mPercent;
    unsigned long long mRank;
    long long mStdDev;
    NSString *mText;
    int mTimePeriod;
}

+ (id)conditionalFormattingRuleWithResources:(id)a0;

- (void)setPriority:(long long)a0;
- (void)setRank:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithResources:(id)a0;
- (id)text;
- (void)setType:(int)a0;
- (unsigned long long)rank;
- (long long)priority;
- (long long)stdDev;
- (BOOL)bottom;
- (id)description;
- (int)type;
- (void)setBottom:(BOOL)a0;
- (BOOL)percent;
- (void)setText:(id)a0;
- (void)setTimePeriod:(int)a0;
- (int)timePeriod;
- (void)setPercent:(BOOL)a0;
- (unsigned long long)formulaCount;
- (id)formulaAtIndex:(unsigned long long)a0;
- (void)setStopIfTrue:(BOOL)a0;
- (void)setOperatorEnum:(int)a0;
- (void)addFormula:(id)a0 worksheet:(id)a1;
- (void)setDifferentialStyle:(id)a0;
- (id)differentialStyle;
- (BOOL)appliesToDateOnly;
- (long long)compareToOtherRuleUsingPriority:(id)a0;
- (int)operatorEnum;
- (BOOL)stopIfTrue;
- (BOOL)aboveAverage;
- (BOOL)equalAverage;
- (void)setAppliesToDateOnly:(BOOL)a0;
- (unsigned long long)differentialStyleIndex;
- (void)setDifferentialStyleIndex:(unsigned long long)a0;
- (void)setAboveAverage:(BOOL)a0;
- (void)setEqualAverage:(BOOL)a0;
- (void)setStdDev:(long long)a0;

@end
