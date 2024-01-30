@class PXStoryResourcesDataSource;
@protocol PXStoryStyle, PXStoryTimelineSpec, PXStoryLoadingCoordinator, PXStoryErrorReporter;

@interface PXStoryTimelineProducerConfiguration : NSObject

@property (readonly, nonatomic) PXStoryResourcesDataSource *resourcesDataSource;
@property (readonly, nonatomic) id<PXStoryStyle> style;
@property (readonly, nonatomic) id<PXStoryTimelineSpec> spec;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) id<PXStoryLoadingCoordinator> loadingCoordinator;
@property (readonly, nonatomic) id<PXStoryErrorReporter> errorReporter;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } rangeOfPrioritizedDisplayAssetResources;
@property (copy, nonatomic) id /* block */ scorerFactory;

- (id)init;
- (void).cxx_destruct;
- (id)initWithResourcesDataSource:(id)a0 style:(id)a1 spec:(id)a2 options:(unsigned long long)a3 loadingCoordinator:(id)a4 errorReporter:(id)a5;

@end
