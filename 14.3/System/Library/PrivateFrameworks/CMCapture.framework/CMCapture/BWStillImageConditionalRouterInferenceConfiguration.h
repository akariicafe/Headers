@interface BWStillImageConditionalRouterInferenceConfiguration : BWStillImageConditionalRouterConfiguration

@property (readonly, nonatomic) unsigned int defaultOutputIndex;
@property (readonly, nonatomic) unsigned int inferenceOuputIndex;

+ (id)inferenceConfiguration;

- (id)init;

@end
