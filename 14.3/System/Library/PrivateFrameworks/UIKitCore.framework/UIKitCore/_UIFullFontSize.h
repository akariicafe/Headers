@interface _UIFullFontSize : NSObject {
    double _value;
    BOOL _isDefault;
    BOOL _needsEvaluation;
}

+ (id)defaultValue;
+ (id)valued:(double)a0;

- (double)valueWithEvaluationIfNeeded:(id /* block */)a0;
- (id)initWithValue:(double)a0 isDefault:(BOOL)a1;
- (BOOL)isEqual:(id)a0;
- (BOOL)setNeedsEvaluation;
- (id)overrideUnlessDefault:(double)a0;
- (BOOL)needsEvaluation;

@end
