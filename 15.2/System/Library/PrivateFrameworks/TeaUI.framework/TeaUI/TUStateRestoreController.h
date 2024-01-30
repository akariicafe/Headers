@interface TUStateRestoreController : NSObject <TUStateRestoreControllerType> {
    void /* unknown type, empty encoding */ timeWindow;
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ anyNavigationHappenAfterBackground;
    void /* unknown type, empty encoding */ alwaysAllowStateRestoration;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ isStateRestorationFeatureEnabled;
@property (nonatomic, readonly) BOOL isStateRestorationAllowed;
@property (nonatomic) void /* unknown type, empty encoding */ hasStateDiscarded;

- (void)navigationDidHappen;
- (id)initWithTimeWindow:(double)a0 isRunningPPT:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithTimeWindow:(double)a0 isStateRestorationEnabled:(BOOL)a1;
- (void)markStateDiscarded;
- (void)sceneDidEnterBackground;

@end
