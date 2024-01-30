@interface HKMCCycleTimelinePillConfiguration : NSObject

@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) double spacing;

+ (id)pillConfigurationWithWidth:(double)a0 spacing:(double)a1;

- (double)heightWithAspectRatio:(double)a0;

@end
