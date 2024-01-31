@class NSString, CNVisualFingerprint;

@interface _CNAvatarPosterCarouselLikenessFingerprintAvatarImpl : NSObject <_CNAvatarPosterCarouselLikenessFingerprintImpl>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CNVisualFingerprint *visualFingerprint;
@property (nonatomic) long long sourceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithVisualFingerprint:(id)a0 sourceType:(long long)a1;
- (double)similarityThreshold;

@end
