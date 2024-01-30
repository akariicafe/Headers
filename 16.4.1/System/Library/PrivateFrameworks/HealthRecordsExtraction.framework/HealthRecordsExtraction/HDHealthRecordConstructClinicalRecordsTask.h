@class NSString, HDHealthRecordProcessingContext;

@interface HDHealthRecordConstructClinicalRecordsTask : NSObject <HDHealthRecordPipelineTask> {
    HDHealthRecordProcessingContext *_processingContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)processWithError:(id *)a0;
- (BOOL)_applyReferenceRulesToClinicalItem:(id)a0 ruleset:(id)a1 error:(id *)a2;
- (id)_clinicalRecordWithClinicalItem:(id)a0 resourceObject:(id)a1 error:(id *)a2;
- (BOOL)_isEligibleClinicalItem:(id)a0 error:(id *)a1;
- (id)initWithProcessingContext:(id)a0;

@end
