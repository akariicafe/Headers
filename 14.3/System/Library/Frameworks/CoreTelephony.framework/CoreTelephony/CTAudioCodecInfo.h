@interface CTAudioCodecInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long callId;
@property (nonatomic) long long codec;
@property (nonatomic) unsigned long long amrMode;
@property (nonatomic) long long evsBandwidth;
@property (nonatomic) long long evsBitrate;

- (id)initWithCallId:(unsigned long long)a0 codec:(long long)a1 amrMode:(unsigned long long)a2 evsBandwidth:(long long)a3 evsBitrate:(long long)a4;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
