@class NSString;

@interface EKPredicateEvaluator : NSObject <CADPredicateValidator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)evaluatePredicate:(id)a0 withObject:(id)a1;


@end
