@interface CAEDRMetadata : NSObject <NSCopying, NSSecureCoding> {
    struct _CAEDRMetadataPrivate { struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned int x8; unsigned int x9; } x0; struct { unsigned short x0; unsigned short x1; } x1; BOOL x2; float x3; } *_priv;
}

@property (class, readonly, retain) CAEDRMetadata *HLGMetadata;
@property (class, readonly, getter=isAvailable) BOOL available;
@property (class, readonly) BOOL supportsSecureCoding;

+ (id)HDR10MetadataWithMinLuminance:(float)a0 maxLuminance:(float)a1 opticalOutputScale:(float)a2;
+ (id)HDR10MetadataWithDisplayInfo:(id)a0 contentInfo:(id)a1 opticalOutputScale:(float)a2;
+ (void)setMetadata:(id)a0 onSurface:(struct __IOSurface { } *)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (id)initWithBT2100HLG;
- (id)initWithMasteringDisplayMinNits:(float)a0 maxNits:(float)a1 opticalOutputScale:(float)a2;
- (id)initWithSEIMasteringDisplayData:(id)a0 contentLightLevelData:(id)a1;
- (id)initWithSEIMasteringDisplayData:(id)a0 contentLightLevelData:(id)a1 opticalOutputScale:(float)a2;

@end
