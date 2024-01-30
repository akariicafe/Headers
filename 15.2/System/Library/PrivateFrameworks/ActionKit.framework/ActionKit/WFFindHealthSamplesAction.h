@class NSString;

@interface WFFindHealthSamplesAction : WFContentItemFilterAction

@property (readonly, nonatomic) NSString *readableSampleType;

- (id)configurationData;
- (id)query;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (void)initializeParameters;
- (void)finishRunningWithError:(id)a0;
- (id)createStateForParameter:(id)a0 fromSerializedRepresentation:(id)a1;
- (id)generatedResourceNodes;
- (void)wasAddedToWorkflow:(id)a0;
- (void)wasRemovedFromWorkflow:(id)a0;
- (id)parameterDefinitions;
- (void)resourceAvailabilityChanged;
- (void)updateParameterVisibility;
- (id)sampleTypeName;
- (void)updateSourcesForSampleType:(id)a0;
- (void)finishRunningWithNoSamples;

@end
