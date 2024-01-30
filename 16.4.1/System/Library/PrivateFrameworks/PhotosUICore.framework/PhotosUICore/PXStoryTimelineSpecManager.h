@protocol PXStoryTimelineSpec;

@interface PXStoryTimelineSpecManager : PXFeatureSpecManager

@property (readonly, nonatomic) id<PXStoryTimelineSpec> timelineSpec;

- (Class)specClass;
- (unsigned long long)defaultChangesToUpdateFor;

@end
