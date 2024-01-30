@interface HDOntologyEducationContentProvider : NSObject

+ (BOOL)educationContentForConceptWithIdentifier:(id)a0 ontologyTransaction:(id)a1 educationContentOut:(id *)a2 error:(id *)a3;
+ (BOOL)educationContentForConceptWithIdentifier:(id)a0 profile:(id)a1 educationContentOut:(id *)a2 error:(id *)a3;

@end
