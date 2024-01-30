@class NSCache, NSString, MRUSystemOutputDeviceRouteController;
@protocol MRUSpatialAudioPreferencesControllerDelegate;

@interface MRUSpatialAudioPreferencesController : NSObject <MRUSystemOutputDeviceRouteControllerObserver>

@property (retain, nonatomic) NSCache *cache;
@property (readonly, nonatomic) MRUSystemOutputDeviceRouteController *outputDeviceRouteController;
@property (weak, nonatomic) id<MRUSpatialAudioPreferencesControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL isSpatialAudioSupported;
@property (readonly, nonatomic) BOOL isHeadTrackingSupported;
@property (readonly, nonatomic) int accessoryStereoHFPStatus;
@property (readonly, nonatomic) BOOL isMonoAudioEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)accessibilityHeadTrackChangedNotification;
- (void)systemOutputDeviceRouteControllerDidUpdateOutputDeviceProperties:(id)a0;
- (id)initWithOutputDeviceRouteController:(id)a0;
- (void)resetPreferences;
- (void)updateMonoAudioEnabled;
- (void)updateHeadTrackedFaceTimeSupport;
- (void)startMonitoring;
- (void)dealloc;
- (void)updateHeadTrackingSupported;
- (void)setPreferences:(id)a0 forBundleID:(id)a1;
- (void)systemOutputDeviceRouteControllerDidUpdateOutputDevices:(id)a0;
- (id)preferenceForBundleID:(id)a0;
- (void).cxx_destruct;
- (void)updateSpatialAudioSupported;
- (void)stopMonitoring;

@end
