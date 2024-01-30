@interface RERelevanceCondition : NSObject <NSCopying> {
    id /* block */ _condition;
}

+ (id)conditionWithBlock:(id /* block */)a0;

- (unsigned long long)_hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (float)_evaluateRelevanceWithEnvironment:(id)a0;
- (id)initWithCondtionBlock:(id /* block */)a0;

@end
