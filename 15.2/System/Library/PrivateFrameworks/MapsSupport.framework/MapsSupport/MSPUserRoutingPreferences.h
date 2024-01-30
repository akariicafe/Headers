@class NSDate;

@interface MSPUserRoutingPreferences : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) BOOL avoidTolls;
@property (readonly, nonatomic) BOOL avoidHighways;
@property (readonly, nonatomic) long long defaultDisabledTransitModes;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copy;
- (id)initWithAvoidTolls:(BOOL)a0 avoidHighways:(BOOL)a1 defaultDisabledTransitModes:(long long)a2;
- (id)createUserPreferences;

@end
