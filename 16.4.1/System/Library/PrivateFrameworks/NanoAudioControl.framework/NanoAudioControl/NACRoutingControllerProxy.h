@class NSArray, NSString, NACXPCClient, NACAudioRoute;
@protocol NACRoutingControllerDelegate;

@interface NACRoutingControllerProxy : NSObject <NACRoutingController> {
    NACXPCClient *_xpcClient;
    NSString *_category;
    BOOL _isObserving;
}

@property (readonly, nonatomic) NACAudioRoute *pickedRoute;
@property (readonly, nonatomic) NSArray *availableAudioRoutes;
@property (weak, nonatomic) id<NACRoutingControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_applicationDidBecomeActiveNotification:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_applicationWillResignActiveNotification:(id)a0;
- (id)initWithAudioCategory:(id)a0;
- (void)pickAudioRoute:(id)a0;
- (void)_audioRoutesDidChange;
- (void)beginObservingRoutes;
- (void)endObservingRoutes;

@end
