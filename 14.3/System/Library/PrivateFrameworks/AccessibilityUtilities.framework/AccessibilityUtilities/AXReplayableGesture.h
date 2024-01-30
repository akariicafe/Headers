@class NSArray;

@interface AXReplayableGesture : NSObject <NSSecureCoding> {
    NSArray *_allEvents;
    BOOL _arePointsDeviceRelative;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)tapGestureForInterfaceOrientedPoint:(struct CGPoint { double x0; double x1; })a0;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (unsigned long long)numberOfEvents;
- (id)fingerIdentifiersAtEventIndex:(unsigned long long)a0;
- (double)timeAtEventIndex:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })pointForFingerIdentifier:(id)a0 atEventIndex:(unsigned long long)a1;
- (double)forceForFingerIdentifier:(id)a0 atEventIndex:(unsigned long long)a1;
- (BOOL)arePointsDeviceRelative;
- (void)updateForLandscape:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
