@interface HMDCameraRecordingH264Level : HAPNumberParser <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long h264Level;

+ (id)arrayWithLevels:(id)a0;

- (void)description:(id)a0 indent:(id)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTLVData:(id)a0;
- (id)initWithH264Level:(long long)a0;

@end
