@class UISDisplayContext;

@interface _UIScreenInitialDisplayConfigurationLoader : NSObject {
    UISDisplayContext *_context;
    BOOL _hasRequestedPreload;
}

@property (class, readonly, nonatomic) _UIScreenInitialDisplayConfigurationLoader *sharedLoader;

@property (readonly, nonatomic) UISDisplayContext *initialDisplayContext;

- (void)_startPreloadInitialDisplayContext;
- (void).cxx_destruct;

@end
