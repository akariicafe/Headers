@protocol PXStoryLayoutSpec;

@interface PXStoryLayoutSpecManager : PXFeatureSpecManager

@property (readonly, nonatomic) unsigned long long storyConfigurationOptions;
@property (readonly, nonatomic) id<PXStoryLayoutSpec> layoutSpec;

- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (id)createSpec;
- (Class)specClass;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1 storyConfigurationOptions:(unsigned long long)a2;

@end
