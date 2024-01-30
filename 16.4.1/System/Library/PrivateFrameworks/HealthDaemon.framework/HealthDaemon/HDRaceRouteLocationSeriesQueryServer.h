@class NSUUID;

@interface HDRaceRouteLocationSeriesQueryServer : HDQueryServer {
    NSUUID *_clusterUUID;
    unsigned long long _workoutSelection;
    NSUUID *_workoutUUID;
    double _timestampAnchor;
    unsigned long long _limit;
}

+ (id)requiredEntitlements;
+ (Class)queryClass;

- (void)_queue_start;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void).cxx_destruct;

@end
