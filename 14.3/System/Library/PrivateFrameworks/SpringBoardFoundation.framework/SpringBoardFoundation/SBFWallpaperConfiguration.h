@class NSData, NSString, UIImage, SBWallpaperImage, NSURL, SBFGradient, NSDictionary, SBFWallpaperOptions, UIColor;

@interface SBFWallpaperConfiguration : NSObject <NSCopying, BSDescriptionProviding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long variant;
@property (nonatomic) BOOL needsWallpaperDimmingTreatment;
@property (retain, nonatomic) SBWallpaperImage *wallpaperImage;
@property (retain, nonatomic) UIImage *wallpaperOriginalImage;
@property (retain, nonatomic) UIImage *wallpaperThumbnailImage;
@property (copy, nonatomic) NSData *wallpaperThumbnailImageData;
@property (copy, nonatomic) NSData *wallpaperImageHashData;
@property (copy, nonatomic) NSDictionary *proceduralWallpaperInfo;
@property (copy, nonatomic) NSURL *videoURL;
@property (copy, nonatomic) NSURL *originalVideoURL;
@property (copy, nonatomic) SBFWallpaperOptions *wallpaperOptions;
@property (copy, nonatomic) UIColor *wallpaperColor;
@property (copy, nonatomic) NSString *wallpaperColorName;
@property (copy, nonatomic) SBFGradient *wallpaperGradient;
@property (readonly, nonatomic) long long wallpaperType;
@property (readonly, copy, nonatomic) NSString *proceduralWallpaperIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *proceduralWallpaperOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithVariant:(long long)a0 type:(long long)a1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
