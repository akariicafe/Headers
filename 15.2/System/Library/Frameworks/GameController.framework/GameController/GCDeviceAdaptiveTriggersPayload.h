@class NSNumber;

@interface GCDeviceAdaptiveTriggersPayload : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *mode;
@property (readonly, nonatomic) NSNumber *startPosition;
@property (readonly, nonatomic) NSNumber *endPosition;
@property (readonly, nonatomic) NSNumber *strength;
@property (readonly, nonatomic) NSNumber *amplitude;
@property (readonly, nonatomic) NSNumber *frequency;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)initOff;
- (id)initFeedbackWithStartPosition:(float)a0 resistiveStrength:(float)a1;
- (id)initWeaponWithStartPosition:(float)a0 endPosition:(float)a1 resistiveStrength:(float)a2;
- (id)initVibrationWithStartPosition:(float)a0 amplitude:(float)a1 frequency:(float)a2;

@end
