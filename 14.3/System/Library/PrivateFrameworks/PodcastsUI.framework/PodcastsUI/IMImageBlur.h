@class NSString;

@interface IMImageBlur : NSObject <IMImageModifier>

@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) double radius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_blurredImageFromSourceImage:(id)a0;
- (BOOL)hasModifications;
- (id)_backdropBlurSettings;
- (id)_newBackdropSettings;
- (id)_lightBackdropBlurSettings;
- (id)modificationCacheKey;
- (id)imageFromSourceImage:(id)a0;
- (id)initWithStyle:(long long)a0 radius:(double)a1;

@end
