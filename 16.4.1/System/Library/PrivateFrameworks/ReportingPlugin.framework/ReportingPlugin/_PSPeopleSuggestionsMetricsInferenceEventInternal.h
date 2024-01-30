@class NSString, NSSet;

@interface _PSPeopleSuggestionsMetricsInferenceEventInternal : ReportingPlugin.PeopleSuggestionInference {
    void /* unknown type, empty encoding */ timedOutModels;
    void /* unknown type, empty encoding */ suggestions;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSSet *timedOutModels;
@property (nonatomic, readonly) NSSet *suggestions;

- (void).cxx_destruct;
- (id)initWithId:(id)a0 sourceBundleId:(id)a1 timedOutModels:(id)a2 suggestions:(id)a3;

@end
