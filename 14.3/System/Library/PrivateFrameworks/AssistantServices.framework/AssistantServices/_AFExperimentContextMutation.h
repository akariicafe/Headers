@class NSString, AFExperimentContext, NSDictionary;

@interface _AFExperimentContextMutation : NSObject <AFExperimentContextMutating> {
    AFExperimentContext *_baseModel;
    NSDictionary *_experimentsByConfigurationIdentifier;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasExperimentsByConfigurationIdentifier : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)generate;
- (void)setExperimentsByConfigurationIdentifier:(id)a0;
- (id)initWithBaseModel:(id)a0;

@end
