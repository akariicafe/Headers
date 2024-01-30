@protocol PXStoryLayoutSpec;

@interface PXStoryLayoutSpecManager : PXFeatureSpecManager

@property (readonly, nonatomic) unsigned long long storyConfigurationOptions;
@property (readonly, nonatomic) id<PXStoryLayoutSpec> layoutSpec;

- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (Class)specClass;
- (id)createSpec;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_observeSharedLibraryStatusIfNeeded;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1 storyConfigurationOptions:(unsigned long long)a2;

@end
