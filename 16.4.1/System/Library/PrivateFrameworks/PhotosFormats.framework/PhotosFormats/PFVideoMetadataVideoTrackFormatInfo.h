@class NSString, AVAsset;

@interface PFVideoMetadataVideoTrackFormatInfo : NSObject {
    AVAsset *_asset;
}

@property (readonly) unsigned int codec;
@property (readonly) BOOL isHighDynamicRange;
@property (readonly) BOOL hasDolby8_4Metadata;
@property (readonly) BOOL hasHEVCProfileTierLevelInfo;
@property (readonly) unsigned char hevcProfile;
@property (readonly) unsigned char hevcTier;
@property (readonly) unsigned char hevcLevel;
@property (readonly) long long bitsPerComponent;
@property (readonly) NSString *colorPrimaries;
@property (readonly) NSString *transferFunction;
@property (readonly) struct CGSize { double width; double height; } displaySize;
@property (readonly) NSString *formatDebugDescription;

+ (id)infoForFirstVideoTrackOfAsset:(id)a0;
+ (short)_getProfile:(char *)a0 tier:(char *)a1 level:(char *)a2 fromFormatDescriptionExtensions:(id)a3;
+ (BOOL)videoTrackFormatDescriptionHasDolby8_4Metadata:(struct opaqueCMFormatDescription { } *)a0;

- (void).cxx_destruct;
- (id)hevcProfileTierLevelDescription;
- (id)initWithFirstVideoTrackOfAsset:(id)a0;
- (void)_checkFormat;

@end
