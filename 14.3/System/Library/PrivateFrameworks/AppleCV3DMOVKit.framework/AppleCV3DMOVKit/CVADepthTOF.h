@class NSDictionary, ADJasperPointCloud;

@interface CVADepthTOF : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *data;
@property (nonatomic) double timestamp;
@property (nonatomic) long long projectorMode;
@property (retain, nonatomic) ADJasperPointCloud *pointCloud;

+ (id)classes;

- (void).cxx_destruct;
- (void)reset;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAVPointCloudData:(id)a0 timestamp:(double)a1;
- (id)initWithADJasperPointCloud:(id)a0 timestamp:(double)a1;
- (id)initWithJasperDepth:(id)a0 timestamp:(double)a1 projectorMode:(long long)a2;

@end
