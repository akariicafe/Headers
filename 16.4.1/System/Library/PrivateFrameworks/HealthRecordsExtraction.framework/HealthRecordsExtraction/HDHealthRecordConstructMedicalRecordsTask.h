@class NSString, HDHealthRecordProcessingContext;

@interface HDHealthRecordConstructMedicalRecordsTask : NSObject <HDHealthRecordPipelineTask> {
    HDHealthRecordProcessingContext *_processingContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_extractKeyPathsWithClinicalItem:(id)a0 ruleset:(id)a1;
+ (BOOL)_unresolvableReferencesPresentInClinicalItem:(id)a0;
+ (BOOL)_unsupportedModifierExtensionsPresentInClinicalItem:(id)a0;

- (void).cxx_destruct;
- (BOOL)processWithError:(id *)a0;
- (BOOL)_collectMedicalRecordPropertiesWithError:(out id *)a0;
- (id)_medicalRecordWithClinicalItem:(id)a0 clinicalType:(long long)a1 ruleset:(id)a2 error:(out id *)a3;
- (id)_unknownMedicalRecordWithClinicalItem:(id)a0 ruleset:(id)a1 error:(out id *)a2;
- (id)initWithProcessingContext:(id)a0;

@end
