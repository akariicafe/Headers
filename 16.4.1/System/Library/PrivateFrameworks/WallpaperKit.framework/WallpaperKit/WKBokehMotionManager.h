@class CMMotionManager, WKBokehInfiniteImpulseResponseFilter;

@interface WKBokehMotionManager : NSObject {
    double _x;
    double _y;
    double _z;
    struct { double x; double y; double z; double w; } _attitude;
    double _roll;
    double _pitch;
    double _yaw;
    double _coefficient;
    double _threshold;
    unsigned long long _referenceFrame;
    CMMotionManager *_motionManager;
    BOOL _motionManagerPaused;
    WKBokehInfiniteImpulseResponseFilter *_motionFilterX;
    WKBokehInfiniteImpulseResponseFilter *_motionFilterY;
    WKBokehInfiniteImpulseResponseFilter *_motionFilterZ;
    WKBokehInfiniteImpulseResponseFilter *_motionFilterAX;
    WKBokehInfiniteImpulseResponseFilter *_motionFilterAY;
    WKBokehInfiniteImpulseResponseFilter *_motionFilterAZ;
    WKBokehInfiniteImpulseResponseFilter *_motionFilterAW;
    WKBokehInfiniteImpulseResponseFilter *_motionFilterRoll;
    WKBokehInfiniteImpulseResponseFilter *_motionFilterPitch;
    WKBokehInfiniteImpulseResponseFilter *_motionFilterYaw;
}

- (id)init;
- (void).cxx_destruct;

@end
