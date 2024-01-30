@interface BWStillImageConditionalRouterPersonSegmentationAndMattingConfiguration : BWStillImageConditionalRouterConfiguration

@property (readonly, nonatomic) unsigned int defaultOutputIndex;
@property (readonly, nonatomic) unsigned int personSegmentationAndMattingOuputIndex;

+ (id)personSegmentationAndMattingConfiguration;

- (id)init;

@end
