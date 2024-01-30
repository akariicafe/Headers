@class NSMutableArray, EDReferenceCollection;

@interface EDConditionalFormatting : NSObject {
    NSMutableArray *mRules;
    EDReferenceCollection *mRanges;
    BOOL mApplyToDate;
}

+ (id)conditionalFormatting;

- (unsigned long long)rangeCount;
- (unsigned long long)ruleCount;
- (void)addRange:(id)a0;
- (id)description;
- (void)addRule:(id)a0;
- (void).cxx_destruct;
- (id)rangeAtIndex:(unsigned long long)a0;
- (id)init;
- (id)rules;
- (id)ruleAtIndex:(unsigned long long)a0;
- (BOOL)isApplyToDate;

@end
