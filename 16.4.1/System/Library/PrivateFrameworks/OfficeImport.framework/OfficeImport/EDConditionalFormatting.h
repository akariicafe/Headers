@class NSMutableArray, EDReferenceCollection;

@interface EDConditionalFormatting : NSObject {
    NSMutableArray *mRules;
    EDReferenceCollection *mRanges;
    BOOL mApplyToDate;
}

+ (id)conditionalFormatting;

- (id)rangeAtIndex:(unsigned long long)a0;
- (id)rules;
- (void)addRule:(id)a0;
- (unsigned long long)ruleCount;
- (void)addRange:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)rangeCount;
- (id)ruleAtIndex:(unsigned long long)a0;
- (BOOL)isApplyToDate;

@end
