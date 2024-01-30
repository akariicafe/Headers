@protocol HFColorProfile;

@interface HUQuickControlColorViewProfile : HUQuickControlViewProfile

@property (nonatomic) BOOL supportsRGBColor;
@property (nonatomic) BOOL supportsNaturalLighting;
@property (nonatomic) BOOL naturalLightingEnabled;
@property (retain, nonatomic) id<HFColorProfile> colorProfile;
@property (nonatomic) unsigned long long mode;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
