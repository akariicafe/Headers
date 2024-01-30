@class NSURL;

@interface WKLayeredAnimationWallpaperInput : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSURL *backgroundAnimationFileURL;
@property (readonly, copy, nonatomic) NSURL *foregroundAnimationFileURL;
@property (readonly, copy, nonatomic) NSURL *floatingAnimationFileURL;

+ (id)na_identity;

- (id /* block */)descriptionBuilderBlock;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)wk_descriptionBuilder;
- (unsigned long long)hash;
- (id)description;
- (id)initWithBackgroundAnimationFileURL:(id)a0 foregroundAnimationFileURL:(id)a1 floatingAnimationFileURL:(id)a2;
- (void).cxx_destruct;

@end
