@class NSArray, AVCapturePhotoBracketSettingsInternal;

@interface AVCapturePhotoBracketSettings : AVCapturePhotoSettings {
    AVCapturePhotoBracketSettingsInternal *_bracketSettingsInternal;
}

@property (readonly, nonatomic) NSArray *bracketedSettings;
@property (nonatomic, getter=isLensStabilizationEnabled) BOOL lensStabilizationEnabled;

+ (void)initialize;
+ (id)photoBracketSettingsWithRawPixelFormatType:(unsigned int)a0 processedFormat:(id)a1 bracketedSettings:(id)a2;
+ (id)photoBracketSettingsWithRawPixelFormatType:(unsigned int)a0 rawFileType:(id)a1 processedFormat:(id)a2 processedFileType:(id)a3 bracketedSettings:(id)a4;

- (void)setFlashMode:(long long)a0;
- (void)setHDRMode:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void)dealloc;
- (id)description;
- (void)setAutoDualCameraFusionEnabled:(BOOL)a0;
- (id)_initWithFormat:(id)a0 processedFileType:(id)a1 rawPixelFormatType:(unsigned int)a2 rawFileType:(id)a3 bracketedSettings:(id)a4 uniqueID:(long long)a5 exceptionReason:(id *)a6;
- (void)setAutoRedEyeReductionEnabled:(BOOL)a0;
- (void)setAutoStillImageStabilizationEnabled:(BOOL)a0;
- (void)setAutoVirtualDeviceFusionEnabled:(BOOL)a0;
- (void)setEV0PhotoDeliveryEnabled:(BOOL)a0;
- (void)setLivePhotoMovieFileURL:(id)a0;
- (void)setLivePhotoMovieFileURLForOriginalPhoto:(id)a0;
- (void)setLivePhotoMovieMetadata:(id)a0;
- (void)setLivePhotoMovieMetadataForOriginalPhoto:(id)a0;

@end
