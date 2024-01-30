@class _CLLocationSmootherProxy;
@protocol CLLocationManagerDelegateInternal;

@interface CLLocationSmoother : NSObject {
    _CLLocationSmootherProxy *_locationManagerSmootherProxy;
}

@property (readonly, retain, nonatomic) _CLLocationSmootherProxy *locationManagerSmootherProxy;
@property (nonatomic) id<CLLocationManagerDelegateInternal> delegate;

- (void)dealloc;
- (void)smoothLocations:(id)a0 handler:(id /* block */)a1;
- (void)smoothLocations:(id)a0;

@end
