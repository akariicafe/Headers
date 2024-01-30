@interface HMDCameraRecordingH264Profile : HAPNumberParser <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long h264Profile;

+ (id)arrayWithProfiles:(id)a0;

- (void)description:(id)a0 indent:(id)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithH264Profile:(long long)a0;
- (id)initWithTLVData:(id)a0;

@end
