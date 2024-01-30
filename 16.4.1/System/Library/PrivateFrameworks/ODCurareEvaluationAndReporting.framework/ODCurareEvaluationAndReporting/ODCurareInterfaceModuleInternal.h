@interface ODCurareInterfaceModuleInternal : NSObject {
    void /* unknown type, empty encoding */ evaluationInstance;
    void /* unknown type, empty encoding */ personalizationInstance;
    void /* unknown type, empty encoding */ pruningPolicy;
    void /* unknown type, empty encoding */ clientBundleIdentifier;
    void /* unknown type, empty encoding */ temporaryDirectory;
    void /* unknown type, empty encoding */ shouldReportFailure;
    void /* unknown type, empty encoding */ frameworkExecutionDate;
    void /* unknown type, empty encoding */ frameworkPersonalizationDate;
    void /* unknown type, empty encoding */ lastPersonalizationSampleDate;
    void /* unknown type, empty encoding */ frameworkEvaluationDate;
    void /* unknown type, empty encoding */ personalizationModelEvaluationResults;
    void /* unknown type, empty encoding */ historicalModelEvaluationResults;
    void /* unknown type, empty encoding */ defaultModelEvaluationSummary;
    void /* unknown type, empty encoding */ frameworkExecutionMetadata;
    void /* unknown type, empty encoding */ frameworkExecutionSelectedModelURL;
    void /* unknown type, empty encoding */ modelStore;
    void /* unknown type, empty encoding */ metadataStore;
    void /* unknown type, empty encoding */ modelEvaluationSummaryStore;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)generateCAReportAndReturnError:(id *)a0;
- (id)evaluateModelsWithEvaluationModels:(id)a0 error:(id *)a1;
- (id)getSelectedModelWithDefaultModel:(id)a0 selectionPolicy:(id)a1 error:(id *)a2;
- (id)initWithBundleIdentifier:(id)a0 evaluationInstance:(id)a1 personalizationInstance:(id)a2 pruningPolicy:(id)a3 error:(id *)a4;
- (id)personalizeModelsWithPersonalizableModels:(id)a0 personalizationPolicy:(id)a1 error:(id *)a2;

@end
