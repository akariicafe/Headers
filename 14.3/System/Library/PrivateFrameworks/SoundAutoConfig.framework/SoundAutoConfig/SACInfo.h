@class NSNumber, NSString, NSArray;

@interface SACInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSNumber *angle;
@property (retain) NSString *position;
@property (retain) NSString *role;
@property (retain) NSNumber *roomGain;
@property (retain) NSArray *lfeqIR;
@property (retain) NSNumber *spatialAudio;
@property (retain) NSNumber *calibrationMode;
@property (retain) NSArray *companionInfo;

+ (id)calibrationModeDescription:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
