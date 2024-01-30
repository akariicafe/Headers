@class NSSet;

@interface ARImageTrackingConfiguration : ARConfiguration

@property (nonatomic, getter=isAutoFocusEnabled) BOOL autoFocusEnabled;
@property (copy, nonatomic) NSSet *trackingImages;
@property (nonatomic) long long maximumNumberOfTrackedImages;

+ (id)new;
+ (BOOL)isSupported;
+ (id)supportedVideoFormats;
+ (BOOL)supportsFrameSemantics:(unsigned long long)a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)createTechniques:(id)a0;

@end
