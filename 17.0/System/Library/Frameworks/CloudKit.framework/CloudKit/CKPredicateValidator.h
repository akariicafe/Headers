@interface CKPredicateValidator : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedValidator;

- (BOOL)validate:(id)a0 error:(id *)a1;

@end
