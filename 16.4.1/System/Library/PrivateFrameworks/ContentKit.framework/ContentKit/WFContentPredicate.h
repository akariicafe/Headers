@class NSSet;

@interface WFContentPredicate : NSObject <WFContentPropertyContainer> {
    id /* block */ _block;
}

@property (readonly, nonatomic) NSSet *containedProperties;

+ (id)predicateWithBlock:(id /* block */)a0;
+ (id)falsePredicate;
+ (id)truePredicate;

- (id)initWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)evaluateWithObject:(id)a0 completionHandler:(id /* block */)a1;
- (void)evaluateWithObject:(id)a0 propertySubstitutor:(id /* block */)a1 completionHandler:(id /* block */)a2;

@end
