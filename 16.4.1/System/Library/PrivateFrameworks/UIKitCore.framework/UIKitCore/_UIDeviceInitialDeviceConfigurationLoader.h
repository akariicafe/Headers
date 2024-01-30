@class UISDeviceContext;

@interface _UIDeviceInitialDeviceConfigurationLoader : NSObject {
    UISDeviceContext *_context;
    BOOL _hasRequestedPreload;
}

@property (class, readonly, nonatomic) _UIDeviceInitialDeviceConfigurationLoader *sharedLoader;

@property (readonly, nonatomic) UISDeviceContext *initialDeviceContext;

- (void)_startPreloadInitialDeviceContext;
- (void).cxx_destruct;

@end
