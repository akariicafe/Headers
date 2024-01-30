@interface TUStateRestoreController : NSObject <TUStateRestoreControllerType> {
    void /* unknown type, empty encoding */ timeWindow;
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ anyNavigationHappenAfterBackground;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ isStateRestorationFeatureEnabled;
@property (nonatomic, readonly) BOOL isStateRestorationAllowed;
@property (nonatomic) void /* unknown type, empty encoding */ hasStateDiscarded;

- (id)init;
- (void).cxx_destruct;
- (void)sceneDidEnterBackground;
- (id)initWithTimeWindow:(double)a0 isStateRestorationEnabled:(BOOL)a1;
- (id)initWithTimeWindow:(double)a0 isRunningPPT:(BOOL)a1;
- (void)markStateDiscarded;
- (void)navigationDidHappen;

@end
