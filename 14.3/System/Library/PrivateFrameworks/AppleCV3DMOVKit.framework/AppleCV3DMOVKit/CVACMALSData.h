@class CVACLMotionTypeVector4, CVACLMotionTypeDoubleVector3, NSNumber;

@interface CVACMALSData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int luxValue;
@property (retain, nonatomic) CVACLMotionTypeVector4 *rawChannels;
@property (retain, nonatomic) CVACLMotionTypeDoubleVector3 *colorComponents;
@property (nonatomic) double timestamp;
@property (nonatomic) unsigned long long syncTimestamp;
@property (retain, nonatomic) NSNumber *gain;
@property (retain, nonatomic) NSNumber *integrationTime;

+ (id)classes;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
