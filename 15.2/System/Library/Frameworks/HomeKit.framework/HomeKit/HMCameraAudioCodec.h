@interface HMCameraAudioCodec : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long audioCodec;

+ (BOOL)isValid:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithAudioCodecType:(unsigned long long)a0;

@end
