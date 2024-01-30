@interface RoomPlan.AnalyticsOnline : RoomPlan.Analytics {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ launchTimeStart;
    void /* unknown type, empty encoding */ onlineScanTimeStart;
    void /* unknown type, empty encoding */ arframeDeltaTimeArray;
    void /* unknown type, empty encoding */ arframeLastTimeInterval;
    void /* unknown type, empty encoding */ keyframeDeltaTimeArray;
    void /* unknown type, empty encoding */ keyframeLastTimeInterval;
    void /* unknown type, empty encoding */ onlineFloorPlanUpdateDeltaTimeArray;
    void /* unknown type, empty encoding */ onlineFloorPlanUpdateLastTimeInterval;
}

- (id)init;
- (void).cxx_destruct;

@end
