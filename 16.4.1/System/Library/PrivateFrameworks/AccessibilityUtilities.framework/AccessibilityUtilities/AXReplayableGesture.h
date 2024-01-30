@class NSArray;

@interface AXReplayableGesture : NSObject <NSSecureCoding> {
    NSArray *_allEvents;
    BOOL _arePointsDeviceRelative;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)tapGestureForInterfaceOrientedPoint:(struct CGPoint { double x0; double x1; })a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)arePointsDeviceRelative;
- (id)fingerIdentifiersAtEventIndex:(unsigned long long)a0;
- (double)forceForFingerIdentifier:(id)a0 atEventIndex:(unsigned long long)a1;
- (unsigned long long)numberOfEvents;
- (struct CGPoint { double x0; double x1; })pointForFingerIdentifier:(id)a0 atEventIndex:(unsigned long long)a1;
- (double)timeAtEventIndex:(unsigned long long)a0;
- (void)updateForLandscape:(BOOL)a0;

@end
