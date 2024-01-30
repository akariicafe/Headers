@class NSString;

@interface WFFindHealthSamplesAction : WFContentItemFilterAction

@property (readonly, nonatomic) NSString *readableSampleType;

- (id)query;
- (id)configurationData;
- (void)initializeParameters;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (void)finishRunningWithError:(id)a0;
- (id)createStateForParameter:(id)a0 fromSerializedRepresentation:(id)a1;
- (id)accessResourcesToBeAuthorizedImplicitlyForUpdatedParameterState:(id)a0 forParameter:(id)a1;
- (void)wasAddedToWorkflow:(id)a0;
- (void)wasRemovedFromWorkflow:(id)a0;
- (id)parameterDefinitions;
- (void)resourceAvailabilityChanged;
- (void)updateParameterVisibility;
- (id)sampleTypeName;
- (void)updateSourcesForSampleType:(id)a0;
- (void)finishRunningWithNoSamples;

@end
