@interface TUMotionData : NSObject {
    void /* unknown type, empty encoding */ attitude;
    void /* unknown type, empty encoding */ rotationRate;
    void /* unknown type, empty encoding */ gravity;
    void /* unknown type, empty encoding */ userAcceleration;
    void /* unknown type, empty encoding */ deviceOrientation;
    void /* unknown type, empty encoding */ source;
}

- (id)init;
- (void).cxx_destruct;

@end
