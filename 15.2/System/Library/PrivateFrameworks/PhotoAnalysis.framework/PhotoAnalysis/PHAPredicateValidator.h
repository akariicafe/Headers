@class NSSet;

@interface PHAPredicateValidator : NSObject

@property (retain) NSSet *allowedKeyPaths;

- (BOOL)validatePredicate:(id)a0 error:(id *)a1;
- (BOOL)validateValue:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)validateExpression:(id)a0 error:(id *)a1;

@end
