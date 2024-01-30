@class VKMuninMarker, GEOCameraFrame, GEOMuninViewState, MKMapItem;

@interface MKLookAroundEntryPoint : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (nonatomic) BOOL wantsCloseUpView;
@property (retain, nonatomic) VKMuninMarker *muninMarker;
@property (nonatomic) double heading;
@property (retain, nonatomic) GEOMuninViewState *muninViewState;
@property (nonatomic) int triggerAction;
@property (retain, nonatomic) GEOCameraFrame *cameraFrameOverride;

+ (id)entryPointWithMapItem:(id)a0;
+ (id)entryPointWithMapItem:(id)a0 triggerAction:(int)a1;
+ (id)entryPointWithMapItem:(id)a0 wantsCloseUpView:(BOOL)a1;
+ (id)entryPointWithMapItem:(id)a0 wantsCloseUpView:(BOOL)a1 cameraFrameOverride:(id)a2;
+ (id)entryPointWithMapItem:(id)a0 wantsCloseUpView:(BOOL)a1 cameraFrameOverride:(id)a2 triggerAction:(int)a3;
+ (id)entryPointWithMapItem:(id)a0 wantsCloseUpView:(BOOL)a1 triggerAction:(int)a2;
+ (id)entryPointWithMuninMarker:(id)a0 heading:(double)a1;
+ (id)entryPointWithMuninViewState:(id)a0;
+ (id)entryPointWithMuninViewState:(id)a0 triggerAction:(int)a1;
+ (id)entryPointWithScene:(id)a0 wantsCloseUpView:(BOOL)a1;

- (id)init;
- (void).cxx_destruct;

@end
