@class CVACLMotionTypeVector3;

@interface CVACMGyroData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CVACLMotionTypeVector3 *rotationRate;
@property (nonatomic) double timestamp;
@property (nonatomic) float temperature;
@property (nonatomic) unsigned long long syncTimestamp;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionary;

@end
