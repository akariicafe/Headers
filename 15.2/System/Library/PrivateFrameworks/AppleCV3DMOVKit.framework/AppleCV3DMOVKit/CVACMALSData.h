@class CVACLMotionTypeDoubleVector3, NSArray, NSNumber, CVACLMotionTypeVector4;

@interface CVACMALSData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int luxValue;
@property (retain, nonatomic) CVACLMotionTypeVector4 *rawChannels;
@property (retain, nonatomic) CVACLMotionTypeDoubleVector3 *colorComponents;
@property (nonatomic) double timestamp;
@property (nonatomic) unsigned long long syncTimestamp;
@property (retain, nonatomic) NSNumber *gain;
@property (retain, nonatomic) NSNumber *integrationTime;
@property (nonatomic) unsigned int vendorNumChannels;
@property (retain, nonatomic) NSArray *vendorRawChannels;

+ (id)classes;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
