@interface FMDEraseOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL useObliteration;
@property (nonatomic) BOOL brickDevice;
@property (nonatomic) double customDelay;
@property (nonatomic) double maxDelayInterval;
@property (nonatomic) BOOL hasBridgeCoProcessor;

- (id)initWithCoder:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
