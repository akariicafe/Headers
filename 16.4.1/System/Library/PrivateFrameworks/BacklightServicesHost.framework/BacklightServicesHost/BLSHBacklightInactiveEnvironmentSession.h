@class NSString, BLSHBacklightEnvironmentPresentation, NSHashTable;
@protocol BLSHBacklightInactiveEnvironmentSessionUpdating;

@interface BLSHBacklightInactiveEnvironmentSession : NSObject <BLSHBacklightSceneHostEnvironmentObserver> {
    NSHashTable *_observers;
    NSHashTable *_environmentObservers;
    id<BLSHBacklightInactiveEnvironmentSessionUpdating> _updater;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _ended;
}

@property (retain, nonatomic) id<BLSHBacklightInactiveEnvironmentSessionUpdating> updater;
@property (retain, nonatomic) BLSHBacklightEnvironmentPresentation *presentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sessionWithPresentation:(id)a0;

- (void)hostEnvironment:(id)a0 hostDidSetUnrestrictedFramerateUpdates:(BOOL)a1;
- (void)sessionDidEnd;
- (void)addEnvironmentsObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)hostEnvironment:(id)a0 hostDidSetLiveUpdating:(BOOL)a1;
- (void)hostEnvironment:(id)a0 clientDidUpdateEnabled:(BOOL)a1;
- (void)updaterDidUpdateToPresentation:(id)a0;
- (void)removeEnvironmentsObserver:(id)a0;
- (void)hostEnvironment:(id)a0 clientDidUpdateSupportsAlwaysOn:(BOOL)a1;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)hostEnvironment:(id)a0 invalidateContentForReason:(id)a1;
- (id)initWithPresentation:(id)a0;
- (void).cxx_destruct;
- (void)hostEnvironment:(id)a0 hostDidSetAlwaysOnEnabledForEnvironment:(BOOL)a1;

@end
