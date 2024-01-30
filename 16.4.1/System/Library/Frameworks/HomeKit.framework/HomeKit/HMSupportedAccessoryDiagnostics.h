@interface HMSupportedAccessoryDiagnostics : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long supportedTypes;
@property (readonly, nonatomic) long long supportedFormat;
@property (readonly, nonatomic) unsigned long long supportedOptions;
@property (readonly, nonatomic) unsigned long long supportedAudio;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithSupportedTypes:(unsigned long long)a0 format:(long long)a1 audio:(unsigned long long)a2 options:(unsigned long long)a3;

@end
