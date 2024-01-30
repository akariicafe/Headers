@class VKRouteContext, NSString, VKNotificationObserver, GEOPOICategoryFilter, VKMapImageCanvas, VKGlobeImageCanvas;
@protocol VKRouteOverlay;

@interface VKMapSnapshotCreator : NSObject <MapEngineDelegate, VKNotificationObserverDelegate> {
    VKMapImageCanvas *_mapCanvas;
    VKGlobeImageCanvas *_globeCanvas;
    int _mapType;
    BOOL _didBecomeFullyDrawn;
    BOOL _hasFailedTiles;
    id /* block */ _completion;
    struct unique_ptr<md::MapEngine, std::default_delete<md::MapEngine>> { struct __compressed_pair<md::MapEngine *, std::default_delete<md::MapEngine>> { struct MapEngine *__value_; } __ptr_; } _mapEngine;
    struct shared_ptr<md::TaskContext> { struct TaskContext *__ptr_; struct __shared_weak_count *__cntrl_; } _taskContext;
    BOOL _didSoftDealloc;
    VKNotificationObserver *_notificationObserver;
    unsigned long long _signpostId;
    struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; BOOL x4; } *_displayStyles;
    unsigned long long _displayStylesCount;
    unsigned long long _nextDisplayStyleIndex;
    struct vector<CGImage *, std::allocator<CGImage *>> { struct CGImage **__begin_; struct CGImage **__end_; struct __compressed_pair<CGImage **, std::allocator<CGImage *>> { struct CGImage **__value_; } __end_cap_; } _images;
    struct vector<__IOSurface *, std::allocator<__IOSurface *>> { struct __IOSurface **__begin_; struct __IOSurface **__end_; struct __compressed_pair<__IOSurface **, std::allocator<__IOSurface *>> { struct __IOSurface **__value_; } __end_cap_; } _ioSurfaces;
    struct Stopwatch { struct time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> { struct duration<long long, std::ratio<1, 1000000000>> { long long __rep_; } __d_; } _startTime; } _timer;
}

@property (readonly) struct CGSize { double x0; double x1; } size;
@property (nonatomic) int mapType;
@property (nonatomic) unsigned char emphasis;
@property (nonatomic) struct VKEdgeInsets { float top; float left; float bottom; float right; } edgeInsets;
@property (nonatomic) BOOL localizeLabels;
@property (nonatomic) long long labelScaleFactor;
@property (nonatomic) BOOL showsPointsOfInterest;
@property (retain, nonatomic) GEOPOICategoryFilter *pointsOfInterestFilter;
@property (nonatomic) BOOL showsRoadLabels;
@property (nonatomic) BOOL showsRoadShields;
@property (nonatomic) BOOL showsPointLabels;
@property (nonatomic) BOOL showsBuildings;
@property (nonatomic) BOOL showsVenues;
@property (nonatomic) BOOL showsGlobe;
@property (nonatomic) long long terrainMode;
@property (retain, nonatomic) id<VKRouteOverlay> routeOverlay;
@property (retain, nonatomic) VKRouteContext *routeContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSharingThumbnails;

- (void)didReceiveMemoryWarning;
- (BOOL)_elevatedGroundIsEnabled;
- (void)softDealloc;
- (id)activeCanvas;
- (void)_transferSettingsFrom:(id)a0 to:(id)a1;
- (void)renderNextSnapshot;
- (BOOL)canChangeVenueFocus;
- (void)setClearFontCache:(BOOL)a0;
- (void)addCustomFeatureDataSource:(id)a0;
- (void)removeCustomFeatureDataSource:(id)a0;
- (void)cancelFlushingTileDecodes:(BOOL)a0;
- (void)didPresent;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 homeQueue:(id)a2 signpostId:(unsigned long long)a3 mapType:(int)a4 mapDisplayStyles:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; BOOL x4; } *)a5 mapDisplayStylesCount:(unsigned long long)a6 auditToken:(id)a7;
- (void)setMapRegion:(id)a0 pitch:(double)a1 yaw:(double)a2;
- (void)renderSnapshot:(id /* block */)a0;
- (void *)_labelSettings;
- (BOOL)_daVinciDataAvailable;
- (void)nearestVenueDidChange:(const void *)a0 building:(const void *)a1;
- (void)venueCreated:(const void *)a0 building:(const void *)a1;
- (void)setLabelExclusionRegions:(id)a0;
- (void)didStartLoadingData;
- (void)didFinishLoadingData;
- (void)didFinishLoadingDataWithError:(id)a0;
- (void)willBecomeFullyDrawn;
- (void)didUpdateSceneStatus:(unsigned char)a0;
- (void)labelManagerDidLayout;
- (void)selectedLabelMarkerWillDisappear:(const void *)a0;
- (void)labelMarkerDidChangeState:(const void *)a0;
- (void)willLayoutWithTimestamp:(double)a0 withContext:(void *)a1;
- (void).cxx_destruct;
- (BOOL)_globeIsEnabled;
- (void)dealloc;
- (void)setCenterCoordinate:(struct { double x0; double x1; })a0 altitude:(double)a1 yaw:(double)a2 pitch:(double)a3;
- (void)cancel;
- (id).cxx_construct;
- (BOOL)wantsTimerTick;

@end
