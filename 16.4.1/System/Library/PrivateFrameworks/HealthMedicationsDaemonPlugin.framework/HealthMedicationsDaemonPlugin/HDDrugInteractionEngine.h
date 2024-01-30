@interface HDDrugInteractionEngine : NSObject

+ (BOOL)interactionClassForLifestyleFactor:(unsigned long long)a0 profile:(id)a1 interactionClassOut:(id *)a2 error:(id *)a3;
+ (id)interactionClassesForConceptWithIdentifier:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)interactionClassesForMedication:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)interactionResultForFirstInteractionClass:(id)a0 secondInteractionClass:(id)a1 profile:(id)a2 interactionResultOut:(id *)a3 error:(id *)a4;
+ (BOOL)interactionResultForFirstMedication:(id)a0 secondMedication:(id)a1 profile:(id)a2 interactionResultOut:(id *)a3 error:(id *)a4;
+ (BOOL)interactionResultForMedication:(id)a0 lifestyleFactor:(unsigned long long)a1 profile:(id)a2 interactionResultOut:(id *)a3 error:(id *)a4;
+ (id)interactionResultsForInteractionClasses:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)interactionResultsForMedications:(id)a0 lifestyleFactors:(id)a1 profile:(id)a2 error:(id *)a3;

@end
