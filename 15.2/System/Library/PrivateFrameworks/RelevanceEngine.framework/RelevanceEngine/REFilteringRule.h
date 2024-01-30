@class RECondition, REConditionEvaluator;

@interface REFilteringRule : RERule <REAutomaticExportedInterface> {
    REConditionEvaluator *_conditionEvaluator;
}

@property (readonly, nonatomic) REConditionEvaluator *conditionEvaluator;
@property (readonly, nonatomic) RECondition *condition;
@property (readonly, nonatomic) unsigned long long type;

- (id)initWithCondition:(id)a0;
- (id)initWithCondition:(id)a0 type:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
