@interface DESJSONPredicate : NSObject

+ (BOOL)isBoolean:(id)a0;
+ (BOOL)isNumber:(id)a0;
+ (BOOL)isDate:(id)a0;
+ (BOOL)isTime:(id)a0;
+ (BOOL)_testStrings:(id)a0 test:(id)a1 caseInsensitive:(BOOL)a2;
+ (BOOL)evaluateAnd:(id)a0 onObj:(id)a1;
+ (BOOL)evaluateArrayOp:(id)a0 onObj:(id)a1;
+ (BOOL)evaluateBoolOp:(id)a0 onObj:(id)a1;
+ (BOOL)evaluateDefOp:(id)a0 onObj:(id)a1;
+ (BOOL)evaluateDict:(id)a0 onObj:(id)a1;
+ (BOOL)evaluateJson:(id)a0 onJson:(id)a1;
+ (BOOL)evaluateNumericOp:(id)a0 onObj:(id)a1;
+ (BOOL)evaluateOr:(id)a0 onObj:(id)a1;
+ (BOOL)evaluatePredicate:(id)a0 onObj:(id)a1;
+ (BOOL)evaluateRegexOp:(id)a0 onObj:(id)a1;
+ (BOOL)evaluateStringOp:(id)a0 onObj:(id)a1;
+ (BOOL)evaluateTypeOp:(id)a0 onObj:(id)a1;
+ (id)fetchObjectAtPath:(id)a0 from:(id)a1;
+ (BOOL)isDateTime:(id)a0;
+ (BOOL)obj:(id)a0 matchesRegex:(id)a1;
+ (id)parseJSON:(id)a0;
+ (id)parsePath:(id)a0;

@end
