@class SCRCGestureFinger;

@interface SCRCGestureEvent : NSObject {
    unsigned long long _deviceIdentifier;
    SCRCGestureFinger *_finger[8];
    unsigned long long _fingerCount;
    struct CGPoint { double x; double y; } _averageLocation;
}

@property (nonatomic) double time;

- (unsigned long long)deviceIdentifier;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)fingerCount;
- (id)description;
- (id)initWithDeviceIdentifier:(unsigned long long)a0;
- (id)fingers;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fingerFrame;
- (void)addFingerWithIdentifier:(unsigned long long)a0 location:(struct CGPoint { double x0; double x1; })a1 pressure:(double)a2;
- (void)addStylusWithIdentifier:(unsigned long long)a0 location:(struct CGPoint { double x0; double x1; })a1 pressure:(double)a2 altitude:(double)a3 azimuth:(double)a4;
- (void)removeFingerWithIdentifier:(unsigned long long)a0;
- (id)fingerAtIndex:(unsigned long long)a0;
- (id)fingerWithIdentifier:(unsigned long long)a0;
- (id)fingerWithoutIdentifier:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })averageLocation;
- (struct CGPoint { double x0; double x1; })balancedLocation;
- (BOOL)isCancelEvent;
- (struct CGPoint { double x0; double x1; })magneticLocation;

@end
