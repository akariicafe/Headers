@class NSSet;

@interface ARImageTrackingConfiguration : ARConfiguration

@property (nonatomic, getter=isAutoFocusEnabled) BOOL autoFocusEnabled;
@property (copy, nonatomic) NSSet *trackingImages;
@property (nonatomic) long long maximumNumberOfTrackedImages;

+ (BOOL)isSupported;
+ (id)new;
+ (id)supportedVideoFormats;
+ (BOOL)supportsFrameSemantics:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)createTechniques:(id)a0;

@end
