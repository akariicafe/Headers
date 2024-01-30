@interface WFKeyPath : NSObject

+ (id)evaluateKeyPath:(id)a0 onObject:(id)a1 error:(id *)a2;
+ (id)valueFromArray:(id)a0 component:(id)a1 previousKeyPath:(id)a2 error:(id *)a3;
+ (id)valueFromDictionary:(id)a0 component:(id)a1 previousKeyPath:(id)a2 isLastComponent:(BOOL)a3 error:(id *)a4;

@end
