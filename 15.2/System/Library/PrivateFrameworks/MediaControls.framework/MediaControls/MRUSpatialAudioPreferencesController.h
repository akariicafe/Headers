@class NSCache, NSString, MRUSystemOutputDeviceRouteController;
@protocol MRUSpatialAudioPreferencesControllerDelegate;

@interface MRUSpatialAudioPreferencesController : NSObject <MRUSystemOutputDeviceRouteControllerObserver>

@property (retain, nonatomic) NSCache *cache;
@property (readonly, nonatomic) MRUSystemOutputDeviceRouteController *outputDeviceRouteController;
@property (weak, nonatomic) id<MRUSpatialAudioPreferencesControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL isSpatialAudioSupported;
@property (readonly, nonatomic) BOOL isHeadTrackingSupported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)systemOutputDeviceRouteControllerDidUpdateOutputDeviceProperties:(id)a0;
- (void)systemOutputDeviceRouteControllerDidUpdateOutputDevices:(id)a0;
- (id)initWithOutputDeviceRouteController:(id)a0;
- (id)preferenceForBundleID:(id)a0;
- (void)setPreferences:(id)a0 forBundleID:(id)a1;
- (void)accessibilityHeadTrackChangedNotification;
- (void)updateSpatialAudioSupported;
- (void)updateHeadTrackingSupported;
- (void)resetPreferences;

@end
