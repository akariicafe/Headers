@interface AXPageTurningReplayableGesture : AXReplayableGesture

@property (nonatomic) BOOL isLeftToRightSwipe;
@property (nonatomic) BOOL isLandscape;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (unsigned long long)numberOfEvents;
- (id)fingerIdentifiersAtEventIndex:(unsigned long long)a0;
- (double)timeAtEventIndex:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })pointForFingerIdentifier:(id)a0 atEventIndex:(unsigned long long)a1;
- (double)forceForFingerIdentifier:(id)a0 atEventIndex:(unsigned long long)a1;
- (BOOL)arePointsDeviceRelative;
- (void)updateForLandscape:(BOOL)a0;
- (id)initForLeftToRightSwipe:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
