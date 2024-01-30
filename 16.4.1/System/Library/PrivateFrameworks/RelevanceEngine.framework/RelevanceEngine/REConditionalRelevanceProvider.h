@class RERelevanceCondition;

@interface REConditionalRelevanceProvider : RERelevanceProvider {
    RERelevanceCondition *_condition;
}

@property (readonly, nonatomic) RERelevanceCondition *condition;

- (unsigned long long)_hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (float)_evaluateCondition;
- (id)initWithRelevanceCondition:(id)a0;

@end
