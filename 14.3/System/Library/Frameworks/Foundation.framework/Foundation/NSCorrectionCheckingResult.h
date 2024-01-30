@class NSArray;

@interface NSCorrectionCheckingResult : NSSubstitutionCheckingResult {
    NSArray *_alternativeStrings;
}

+ (BOOL)supportsSecureCoding;

- (unsigned long long)resultType;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementString:(id)a1 alternativeStrings:(id)a2;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)resultByAdjustingRangesWithOffset:(long long)a0;
- (id)description;
- (id)alternativeStrings;
- (void)encodeWithCoder:(id)a0;

@end
