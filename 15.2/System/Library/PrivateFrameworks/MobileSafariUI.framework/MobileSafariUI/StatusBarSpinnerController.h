@class NSString;
@protocol LoadableResource;

@interface StatusBarSpinnerController : NSObject <LoadProgressObserver> {
    int _currentlyLoadingResourcesCount;
    id<LoadableResource> _resourceWhoseProgressIsShown;
    float _progress;
    BOOL _resourcesLoading;
    BOOL _showingProgressIndicator;
}

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateProgressWithResource:(id)a0;
- (void)didFailLoadingResource:(id)a0;
- (void)didStartLoadingResource;
- (void)didStopLoadingResource;
- (void).cxx_destruct;
- (id)init;
- (void)_setResourcesLoading:(BOOL)a0;
- (void)_setProgress:(float)a0;
- (void)_updateProgressIndicator;

@end
