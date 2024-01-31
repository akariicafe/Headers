@class UIColor, UIFont, NSString, NSData;

@interface _CNAvatarPosterCarouselLikenessFingerprintPosterConfigurationImpl : NSObject <_CNAvatarPosterCarouselLikenessFingerprintImpl>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *posterConfigurationData;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIFont *titleFont;
@property (nonatomic) unsigned long long preferredTitleAlignment;
@property (nonatomic) unsigned long long preferredTitleLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fingerprintForPosterConfiguration:(id)a0 withConfigurationData:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPosterConfigurationData:(id)a0 titleColor:(id)a1 titleFont:(id)a2 preferredTitleLayout:(unsigned long long)a3 preferredTitleAlignment:(unsigned long long)a4;
- (id)initWithPosterConfigurationData:(id)a0 titleStyleAttributes:(id)a1;

@end
