@interface BWStillImageConditionalRouterLandmarksConfiguration : BWStillImageConditionalRouterConfiguration

@property (readonly, nonatomic) unsigned int defaultOutputIndex;
@property (readonly, nonatomic) unsigned int landmarksOutputIndex;

+ (id)landmarksConfiguration;

- (id)init;

@end
