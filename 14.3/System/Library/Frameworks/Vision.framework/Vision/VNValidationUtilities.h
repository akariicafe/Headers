@interface VNValidationUtilities : NSObject

+ (BOOL)getArray:(id *)a0 forKey:(id)a1 inOptions:(id)a2 withElementsOfClass:(Class)a3 requiredMinimumCount:(unsigned long long)a4 allowedMaximumCount:(unsigned long long)a5 error:(id *)a6;
+ (BOOL)_validateFaceObservations:(id)a0 withMinimumCount:(unsigned long long)a1 forOptionalRequest:(id)a2 error:(id *)a3;
+ (BOOL)getRequiredRequestRevision:(unsigned long long *)a0 fromSupportedRevisionsForRequestClass:(Class)a1 forKey:(id)a2 inOptions:(id)a3 error:(id *)a4;
+ (BOOL)getOptionalObject:(id *)a0 ofClass:(Class)a1 forKey:(id)a2 inOptions:(id)a3 error:(id *)a4;
+ (BOOL)validateOptionalFaceObservations:(id)a0 error:(id *)a1;
+ (id)requiredFaceObservationInOptions:(id)a0 withOptionName:(id)a1 error:(id *)a2;
+ (BOOL)getOptionalRequestRevision:(unsigned long long *)a0 fromSupportedRevisionsForRequestClass:(Class)a1 inOptions:(id)a2 error:(id *)a3;
+ (id)requiredArrayForKey:(id)a0 inOptions:(id)a1 withElementsOfClass:(Class)a2 error:(id *)a3;
+ (BOOL)getRequiredRequestRevision:(unsigned long long *)a0 inOptions:(id)a1 error:(id *)a2;
+ (BOOL)validateRequiredFaceObservations:(id)a0 forRequest:(id)a1 error:(id *)a2;
+ (BOOL)getOptionalRequestRevision:(unsigned long long *)a0 forKey:(id)a1 inOptions:(id)a2 error:(id *)a3;
+ (id)requiredInputFacesArrayInOptions:(id)a0 error:(id *)a1;
+ (BOOL)getBOOLValue:(BOOL *)a0 forKey:(id)a1 inOptions:(id)a2 withDefaultValue:(BOOL)a3 error:(id *)a4;
+ (BOOL)validateVNConfidenceRange:(float)a0 error:(id *)a1;
+ (BOOL)getOptionalArray:(id *)a0 forKey:(id)a1 inOptions:(id)a2 withElementsOfClass:(Class)a3 error:(id *)a4;
+ (id)requiredSessionInOptions:(id)a0 error:(id *)a1;
+ (BOOL)getFloatValue:(float *)a0 forKey:(id)a1 inOptions:(id)a2 withDefaultValue:(float)a3 error:(id *)a4;
+ (BOOL)validateClassArray:(id)a0 named:(id)a1 hasElementsAncestoredFromClass:(Class)a2 requiredMinimumCount:(unsigned long long)a3 allowedMaximumCount:(unsigned long long)a4 error:(id *)a5;
+ (BOOL)getRequiredRequestRevision:(unsigned long long *)a0 forKey:(id)a1 inOptions:(id)a2 error:(id *)a3;
+ (BOOL)getOptionalRequestRevision:(unsigned long long *)a0 inOptions:(id)a1 error:(id *)a2;
+ (BOOL)getRequiredRequestRevision:(unsigned long long *)a0 fromSupportedRevisionsForRequestClass:(Class)a1 inOptions:(id)a2 error:(id *)a3;
+ (BOOL)getNSUIntegerValue:(unsigned long long *)a0 forKey:(id)a1 inOptions:(id)a2 error:(id *)a3;
+ (BOOL)getNSIntegerValue:(long long *)a0 forKey:(id)a1 inOptions:(id)a2 withDefaultValue:(long long)a3 error:(id *)a4;
+ (id)requiredObjectOfClass:(Class)a0 forKey:(id)a1 inOptions:(id)a2 error:(id *)a3;
+ (BOOL)validateOptionalFaceObservations:(id)a0 forRequest:(id)a1 error:(id *)a2;
+ (BOOL)getNSUIntegerValue:(unsigned long long *)a0 forKey:(id)a1 inOptions:(id)a2 withDefaultValue:(unsigned long long)a3 error:(id *)a4;
+ (BOOL)validateRequiredClusterIDs:(id)a0 error:(id *)a1;
+ (BOOL)getOptionalRequestRevision:(unsigned long long *)a0 fromSupportedRevisionsForRequestClass:(Class)a1 forKey:(id)a2 inOptions:(id)a3 error:(id *)a4;
+ (BOOL)validateRequiredFaceObservations:(id)a0 error:(id *)a1;
+ (BOOL)validateArray:(id)a0 named:(id)a1 hasElementsOfClass:(Class)a2 requiredMinimumCount:(unsigned long long)a3 allowedMaximumCount:(unsigned long long)a4 error:(id *)a5;
+ (BOOL)getFloatValue:(float *)a0 forKey:(id)a1 inOptions:(id)a2 error:(id *)a3;
+ (BOOL)getBOOLValue:(BOOL *)a0 forKey:(id)a1 inOptions:(id)a2 error:(id *)a3;
+ (BOOL)validateNonZeroImageWidth:(unsigned long long)a0 height:(unsigned long long)a1 componentNameProvidingBlock:(id /* block */)a2 error:(id *)a3;
+ (BOOL)getDoubleValue:(double *)a0 forKey:(id)a1 inOptions:(id)a2 withDefaultValue:(double)a3 error:(id *)a4;
+ (BOOL)getDoubleValue:(double *)a0 forKey:(id)a1 inOptions:(id)a2 error:(id *)a3;
+ (BOOL)getOptionalInputFacesArray:(id *)a0 inOptions:(id)a1 error:(id *)a2;

@end
