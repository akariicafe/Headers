@class PXObservable;
@protocol PXStoryResourcesPreloadingCoordinatable;

@interface _PXStoryPreloadingControllerInfo : NSObject

@property (retain, nonatomic) PXObservable<PXStoryResourcesPreloadingCoordinatable> *preloadingController;
@property (nonatomic) long long priority;

- (void).cxx_destruct;

@end
