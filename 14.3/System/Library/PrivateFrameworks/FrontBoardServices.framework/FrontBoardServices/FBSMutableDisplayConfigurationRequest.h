@interface FBSMutableDisplayConfigurationRequest : FBSDisplayConfigurationRequest

@property (nonatomic) long long overscanCompensation;
@property (nonatomic) struct CGSize { double x0; double x1; } nativePixelSize;
@property (nonatomic) double refreshRate;
@property (nonatomic) long long hdrMode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setHdrMode:(long long)a0;
- (void)setNativePixelSize:(struct CGSize { double x0; double x1; })a0;
- (void)setRefreshRate:(double)a0;
- (void)setOverscanCompensation:(long long)a0;

@end
