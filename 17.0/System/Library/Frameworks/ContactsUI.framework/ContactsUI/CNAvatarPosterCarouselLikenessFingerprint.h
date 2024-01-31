@protocol _CNAvatarPosterCarouselLikenessFingerprintImpl;

@interface CNAvatarPosterCarouselLikenessFingerprint : NSObject <NSCopying, NSSecureCoding> {
    id<_CNAvatarPosterCarouselLikenessFingerprintImpl> _impl;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)archiveWithFingerprint:(id)a0;
+ (id)fingerprintForPosterConfiguration:(id)a0 snapshotController:(id)a1;
+ (id)fingerprintForPosterConfiguration:(id)a0 withConfigurationData:(id)a1;
+ (id)fingerprintForPosterConfiguration:(id)a0 withVisualFingerprint:(id)a1;
+ (id)fingerprintFromArchive:(id)a0;
+ (id)visualFingerprintForSnapshotImage:(id)a0;

- (id)initWithImpl:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAvatarVisualFingerprint:(id)a0 sourceType:(long long)a1;
- (id)initWithPosterConfigurationData:(id)a0;
- (id)initWithPosterVisualFingerprint:(id)a0 styleAttributes:(id)a1;

@end
