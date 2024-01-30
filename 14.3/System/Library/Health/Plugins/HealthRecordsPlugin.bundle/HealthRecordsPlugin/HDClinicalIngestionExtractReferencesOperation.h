@class NSArray, HDReferenceExtractionResult, NSError;

@interface HDClinicalIngestionExtractReferencesOperation : HDClinicalIngestionPerAccountOperation

@property (readonly, copy, nonatomic) NSArray *FHIRResourceData;
@property (copy, nonatomic) NSArray *sourceResourceObjects;
@property (copy, nonatomic) HDReferenceExtractionResult *extractionResult;
@property (copy, nonatomic) NSError *resolutionError;

- (void).cxx_destruct;
- (void)main;
- (id)initWithTask:(id)a0 account:(id)a1 resourceData:(id)a2 sourceResourceObjects:(id)a3 nextOperation:(id)a4;

@end
