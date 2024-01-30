@interface PlaybackSpeed : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double speedMagnitude;
@property (nonatomic) long long playbackSpeedType;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;

@end
