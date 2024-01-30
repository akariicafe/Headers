@class NSDictionary, ADJasperPointCloud;

@interface CVADepthTOF : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *data;
@property (nonatomic) double timestamp;
@property (nonatomic) long long projectorMode;
@property (retain, nonatomic) NSDictionary *metadata;
@property (nonatomic) unsigned long long syncTimestamp;
@property (nonatomic) unsigned long long frameId;
@property (retain, nonatomic) ADJasperPointCloud *pointCloud;

+ (id)classes;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithAVPointCloudData:(id)a0 timestamp:(double)a1;
- (id)initWithADJasperPointCloud:(id)a0 timestamp:(double)a1;
- (id)initWithCVDataBufferRef:(struct __CVBuffer { } *)a0 timestamp:(double)a1 projectorMode:(long long)a2;
- (id)initWithJasperDepth:(id)a0 timestamp:(double)a1 projectorMode:(long long)a2;

@end
