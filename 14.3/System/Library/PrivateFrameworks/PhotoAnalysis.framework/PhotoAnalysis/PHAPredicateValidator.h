@class NSSet;

@interface PHAPredicateValidator : NSObject

@property (retain) NSSet *allowedKeyPaths;

- (void).cxx_destruct;
- (BOOL)validatePredicate:(id)a0 error:(id *)a1;
- (BOOL)validateExpression:(id)a0 error:(id *)a1;
- (BOOL)validateValue:(id)a0 error:(id *)a1;

@end
