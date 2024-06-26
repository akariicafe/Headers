@interface VKSceneConfiguration : NSObject {
    struct shared_ptr<gss::StylesheetManager<gss::ScenePropertyID> > { struct StylesheetManager<gss::ScenePropertyID> *__ptr_; struct __shared_weak_count *__cntrl_; } _sceneManager;
    struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> *__ptr_; struct __shared_weak_count *__cntrl_; } _styleManager;
    struct vector<GEOLocationCoordinate2D, std::__1::allocator<GEOLocationCoordinate2D> > { struct *__begin_; struct *__end_; struct __compressed_pair<GEOLocationCoordinate2D *, std::__1::allocator<GEOLocationCoordinate2D> > { struct *__value_; } __end_cap_; } _pointsOfInterest;
    unsigned char _navState;
    unsigned char _distanceToCurrentManeuver;
    double _distanceToDestination;
    int _currentManeuverType;
    unsigned char _currentStepLength;
    unsigned char _nextStepLength;
    unsigned char _currentIncidentType;
    unsigned char _currentManeuverComplexity;
    unsigned long long _currentGroupedManeuverCount;
    unsigned int _lineType;
    int _rampType;
    int _nextManeuverRampType;
    unsigned char _transportType;
    unsigned char _searchAlongTheRoute;
    unsigned char _vehicleSpeed;
    unsigned char _roadSpeed;
    unsigned long long _roadSpeedZeroes;
    unsigned char _cameraMode;
    unsigned char _navigationDestination;
    struct ManeveuverDistancesRange { double _immediate; double _extremlyNear; double _veryNear; double _near; double _medium; double _far; double _veryFar; } _distanceRanges;
    struct shared_ptr<md::TaskContext> { struct TaskContext *__ptr_; struct __shared_weak_count *__cntrl_; } _taskContext;
}

- (void)setNextStepLength:(double)a0;
- (void)setDistanceToDestination:(double)a0;
- (unsigned long long)navigationDestination;
- (void)_updateStyleManager;
- (void)setSceneManager:(struct shared_ptr<gss::StylesheetManager<gss::ScenePropertyID> > { struct StylesheetManager<gss::ScenePropertyID> *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (void)setCurrentManeuverJunctionsCount:(unsigned long long)a0;
- (void)resetState;
- (void)setRampType:(int)a0;
- (void)setNavCameraMode:(unsigned long long)a0;
- (void)setSearchAlongTheRoute:(BOOL)a0;
- (void)setCurrentStepLength:(double)a0;
- (unsigned long long)navCameraMode;
- (void)setCurrentTransportationType:(int)a0;
- (void)setLineType:(unsigned int)a0;
- (void)setNavigationState:(int)a0;
- (unsigned char)navigationState;
- (void)setVehicleSpeed:(double)a0;
- (id).cxx_construct;
- (void)setCurrentManeuverType:(int)a0;
- (void)setRoadSpeed:(double)a0;
- (void)setStyleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> *x0; struct __shared_weak_count *x1; })a0;
- (void)setNavigationDestination:(unsigned long long)a0;
- (id)initWithTaskContext:(const struct shared_ptr<md::TaskContext> { struct TaskContext *x0; struct __shared_weak_count *x1; } *)a0;
- (void)setCurrentGroupedManeuverCount:(unsigned long long)a0;
- (struct shared_ptr<gss::StylesheetManager<gss::ScenePropertyID> > { struct StylesheetManager<gss::ScenePropertyID> *x0; struct __shared_weak_count *x1; })sceneManager;
- (struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> *x0; struct __shared_weak_count *x1; })styleManager;
- (void)setCurrentIncidentType:(unsigned long long)a0;
- (void)setDistanceToCurrentManeuver:(double)a0;
- (unsigned char)navCameraModeStyleAttribute;
- (void)setNextManeuverRampType:(int)a0;

@end
