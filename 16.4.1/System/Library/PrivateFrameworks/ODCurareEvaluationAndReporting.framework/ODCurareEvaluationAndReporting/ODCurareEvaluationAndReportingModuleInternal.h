@interface ODCurareEvaluationAndReportingModuleInternal : NSObject {
    void /* unknown type, empty encoding */ evaluationInstance;
    void /* unknown type, empty encoding */ personalizationInstance;
    void /* unknown type, empty encoding */ dataProviderInstance;
    void /* unknown type, empty encoding */ pruningPolicy;
    void /* unknown type, empty encoding */ clientBundleIdentifier;
    void /* unknown type, empty encoding */ temporaryDirectory;
    void /* unknown type, empty encoding */ shouldReportFailure;
    void /* unknown type, empty encoding */ shouldProduceReport;
    void /* unknown type, empty encoding */ frameworkExecutionDate;
    void /* unknown type, empty encoding */ frameworkPersonalizationDate;
    void /* unknown type, empty encoding */ lastPersonalizationSampleDate;
    void /* unknown type, empty encoding */ frameworkEvaluationDate;
    void /* unknown type, empty encoding */ modelStore;
    void /* unknown type, empty encoding */ personalizationResults;
    void /* unknown type, empty encoding */ newModelEvaluationResults;
    void /* unknown type, empty encoding */ historicalModelEvaluationResults;
    void /* unknown type, empty encoding */ defaultModelEvaluationSummary;
    void /* unknown type, empty encoding */ frameworkExecutionMetadata;
    void /* unknown type, empty encoding */ frameworkExecutionSelectedModelURL;
    void /* unknown type, empty encoding */ metadataStore;
    void /* unknown type, empty encoding */ modelEvaluationSummaryStore;
    void /* unknown type, empty encoding */ allUserDataDictionaryAdapted;
    void /* unknown type, empty encoding */ allUserDataDictionaryDefault;
    void /* unknown type, empty encoding */ boundaryList;
    void /* unknown type, empty encoding */ allEvaluationResults;
    void /* unknown type, empty encoding */ generatedLatestBoundary;
    void /* unknown type, empty encoding */ skipAdaptation;
    void /* unknown type, empty encoding */ personalizationResult;
    void /* unknown type, empty encoding */ personalizedModelPath;
    void /* unknown type, empty encoding */ resultMetadataDictionary;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0 dataProviderInstance:(id)a1 evaluationInstance:(id)a2 personalizationInstance:(id)a3 pruningPolicy:(id)a4 error:(id *)a5;
- (id)getEvaluationResults;
- (id)getSelectedModelAndReturnError:(id *)a0;
- (id)evaluateDefaultModelWithDefaultModelPath:(id)a0 modelConfiguration:(id)a1 error:(id *)a2;
- (BOOL)generatePETReportAndReturnError:(id *)a0;
- (id)trainAndEvaluateAdaptedModelsWithAdaptableModelPath:(id)a0 modelConfiguration:(id)a1 error:(id *)a2;
- (id)trainAndEvaluateModelsWithCandidateModels:(id)a0 personalizationPolicy:(id)a1 modelSelectionPolicy:(id)a2 error:(id *)a3;

@end
