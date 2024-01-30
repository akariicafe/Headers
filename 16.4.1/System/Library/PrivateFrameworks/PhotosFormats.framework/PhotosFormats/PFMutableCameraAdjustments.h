@class NSString, AVApplePortraitMetadata;

@interface PFMutableCameraAdjustments : PFCameraAdjustments

@property (copy, nonatomic) NSString *effectFilterName;
@property (copy, nonatomic) NSString *portraitEffectFilterName;
@property (retain, nonatomic) AVApplePortraitMetadata *portraitMetadata;
@property (nonatomic, getter=isDepthEnabled) BOOL depthEnabled;
@property (nonatomic) unsigned long long cinematicVideoRenderingVersion;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cropRect;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setDepthEnabled:(BOOL)a0;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setEffectFilterName:(id)a0;
- (void)setPortraitEffectFilterName:(id)a0;
- (void)setPortraitMetadata:(id)a0;
- (void)setCinematicVideoRenderingVersion:(unsigned long long)a0;

@end
