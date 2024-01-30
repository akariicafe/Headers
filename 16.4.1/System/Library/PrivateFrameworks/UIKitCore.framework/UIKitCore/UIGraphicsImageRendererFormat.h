@interface UIGraphicsImageRendererFormat : UIGraphicsRendererFormat {
    struct CGColorSpace { } *_overrideColorSpace;
}

@property (nonatomic, getter=_overrideColorSpace, setter=_setOverrideColorSpace:) struct CGColorSpace { } *_overrideColorSpace;
@property (nonatomic, getter=_overrideBitsPerComponent, setter=_setOverrideBitsPerComponent:) long long _overrideBitsPerComponent;
@property (readonly, nonatomic, getter=_contextScale) double _contextScale;
@property (nonatomic, getter=_wantsAlphaMask, setter=_setWantsAlphaMask:) BOOL _wantsAlphaMask;
@property (nonatomic, getter=_grayscale, setter=_setGrayscale:) BOOL _grayscale;
@property (nonatomic) double scale;
@property (nonatomic) BOOL opaque;
@property (nonatomic) BOOL prefersExtendedRange;
@property (nonatomic) long long preferredRange;

+ (id)preferredFormat;
+ (id)formatForTraitCollection:(id)a0;
+ (id)defaultFormat;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;

@end
