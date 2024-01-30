@class NSString;

@interface ICPlayActivityAudioQualityProperties : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long bitRate;
@property (readonly, nonatomic) long long bitDepth;
@property (readonly, nonatomic) NSString *channelLayoutDescription;
@property (readonly, nonatomic) unsigned int codec;
@property (readonly, nonatomic) NSString *codecString;
@property (readonly, nonatomic) long long sampleRate;
@property (readonly, nonatomic, getter=isSpatialized) BOOL spatialized;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_copyWithClass:(Class)a0 zone:(struct _NSZone { } *)a1;
- (id)description;
- (void).cxx_destruct;

@end
