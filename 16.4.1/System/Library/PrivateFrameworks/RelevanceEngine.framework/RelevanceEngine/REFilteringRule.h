@class RECondition, REConditionEvaluator;

@interface REFilteringRule : RERule <REAutomaticExportedInterface> {
    REConditionEvaluator *_conditionEvaluator;
}

@property (readonly, nonatomic) REConditionEvaluator *conditionEvaluator;
@property (readonly, nonatomic) RECondition *condition;
@property (readonly, nonatomic) unsigned long long type;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithCondition:(id)a0;
- (id)initWithCondition:(id)a0 type:(unsigned long long)a1;

@end
