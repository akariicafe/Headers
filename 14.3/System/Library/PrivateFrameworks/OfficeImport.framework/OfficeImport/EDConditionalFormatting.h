@class NSMutableArray, EDReferenceCollection;

@interface EDConditionalFormatting : NSObject {
    NSMutableArray *mRules;
    EDReferenceCollection *mRanges;
    BOOL mApplyToDate;
}

+ (id)conditionalFormatting;

- (unsigned long long)rangeCount;
- (id)init;
- (void).cxx_destruct;
- (void)addRule:(id)a0;
- (void)addRange:(id)a0;
- (unsigned long long)ruleCount;
- (id)description;
- (id)rangeAtIndex:(unsigned long long)a0;
- (id)rules;
- (id)ruleAtIndex:(unsigned long long)a0;
- (BOOL)isApplyToDate;

@end
