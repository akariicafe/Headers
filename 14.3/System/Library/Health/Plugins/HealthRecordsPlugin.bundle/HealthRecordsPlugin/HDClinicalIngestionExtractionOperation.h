@class NSObject, NSError, NSNumber, HDFHIRResourceDocument;
@protocol OS_dispatch_queue;

@interface HDClinicalIngestionExtractionOperation : HDClinicalIngestionPerAccountOperation {
    HDFHIRResourceDocument *_document;
    NSObject<OS_dispatch_queue> *_extractionResponseQueue;
}

@property (nonatomic) unsigned long long countOfExtractedResources;
@property (nonatomic) unsigned long long countOfExtractedClinicalRecords;
@property (nonatomic) unsigned long long countOfExtractedMedicalRecords;
@property (nonatomic) unsigned long long countOfInsertedMedicalRecords;
@property (nonatomic) unsigned long long countOfUpdatedMedicalRecords;
@property (retain, nonatomic) NSError *extractionError;
@property (copy, nonatomic) NSNumber *batchSize;
@property (copy, nonatomic) id /* block */ unitTest_didCompleteExtractionFromResource;

- (void)_cancelWithError:(id)a0;
- (void).cxx_destruct;
- (void)main;
- (void)_setDocument:(id)a0;
- (id)initWithTask:(id)a0 account:(id)a1 nextOperation:(id)a2;
- (id)_extractionBatchWithRulesVersion:(id)a0 error:(id *)a1;
- (void)_didCompleteExtractionWithRequest:(id)a0 result:(id)a1 highestRowID:(id)a2 extractionRulesVersion:(id)a3 error:(id)a4;
- (void)_lookupDisplayNameForExtractedItem:(id)a0 completion:(id /* block */)a1;
- (BOOL)_processClinicalRecordsBatch:(id)a0 error:(id *)a1;
- (BOOL)_processMedicalRecordsBatch:(id)a0 error:(id *)a1;
- (BOOL)_updateAccountLastExtractedRowID:(id)a0 extractionRulesVersion:(id)a1 error:(id *)a2;

@end
