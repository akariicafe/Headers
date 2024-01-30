@class NSNumber, HRSSupportedFHIRConfiguration, HDHealthRecordDocumentTypeConfiguration;

@interface HDHealthRecordDocumentProcessor : NSObject {
    HDHealthRecordDocumentTypeConfiguration *_configuration;
}

@property (readonly, copy, nonatomic) NSNumber *extractionRulesetVersion;
@property (readonly, copy, nonatomic) HRSSupportedFHIRConfiguration *supportedFHIRConfiguration;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)_resourceObjectsBatchedPerFHIRRelease:(id)a0;
- (id)processExtractionRequest:(id)a0 error:(id *)a1;
- (id)processReferenceExtractionRequest:(id)a0 error:(id *)a1;
- (id)processOptInRequest:(id)a0 redactor:(id)a1 error:(id *)a2;

@end
