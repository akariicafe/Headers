@class NSString, NSArray, MPAVRoutingController, NACAudioRoute;
@protocol NACRoutingControllerDelegate;

@interface NACRoutingControllerLocal : NSObject <MPAVRoutingControllerDelegate, NACRoutingController> {
    MPAVRoutingController *_routingController;
    NSString *_audioCategory;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NACAudioRoute *pickedRoute;
@property (readonly, nonatomic) NSArray *availableAudioRoutes;
@property (weak, nonatomic) id<NACRoutingControllerDelegate> delegate;

- (void)routingControllerAvailableRoutesDidChange:(id)a0;
- (id)initWithAudioCategory:(id)a0;
- (void).cxx_destruct;
- (void)routingController:(id)a0 didFailToPickRouteWithError:(id)a1;
- (void)beginObservingRoutes;
- (void)endObservingRoutes;
- (void)pickAudioRoute:(id)a0;

@end
