@class NSArray, PLImageFormat, PLDeviceConfiguration;

@interface PLFormatChooser : NSObject {
    PLDeviceConfiguration *_deviceConfiguration;
    PLImageFormat *_posterThumbnailFormat;
}

@property (readonly, nonatomic) NSArray *supportedDerivativeFormats;
@property (readonly, nonatomic) PLImageFormat *fullScreenFormatForCurrentDevice;
@property (readonly, nonatomic) PLImageFormat *indexSheetUnbakedFormat;
@property (readonly, nonatomic) PLImageFormat *largestUncroppedNonJPEGThumbnailFormat;
@property (readonly, nonatomic) PLImageFormat *masterThumbnailFormat;
@property (readonly, nonatomic) PLImageFormat *portraitScrubberThumbnailFormat;
@property (readonly, nonatomic) PLImageFormat *landscapeScrubberThumbnailFormat;

+ (struct CGSize { double x0; double x1; })_desiredImageSizeForRequestedViewSizeInPixels:(struct CGSize { double x0; double x1; })a0 isAspectFill:(BOOL)a1 srcAspectRatio:(double)a2;
+ (id)defaultFormatChooser;
+ (id)_suppportedFullSizeFormatIDs;

- (void).cxx_destruct;
- (void)chooseFormatsForSize:(struct CGSize { double x0; double x1; })a0 specificVersionType:(long long)a1 contentMode:(long long)a2 demoteFactor:(double)a3 srcAspectRatio:(double)a4 degradedFormatPolicy:(long long)a5 hasAdjustmentsHandler:(id /* block */)a6 desiredImagePixelSize:(struct CGSize { double x0; double x1; } *)a7 bestFormat:(id *)a8 degradedFormat:(id *)a9;
- (id)_fastestDegradedFormatFallingBackFromFormat:(id)a0;
- (id)_standardDegradedFormatFallingBackFromFormat:(id)a0;
- (id)derivativeFormatThatFitsSize:(struct CGSize { double x0; double x1; })a0 contentMode:(long long)a1 demoteFactor:(double)a2 srcAspectRatio:(double)a3 desiredImagePixelSize:(struct CGSize { double x0; double x1; } *)a4;
- (id)_nextLargestAcceptableFormatForFormat:(id)a0;
- (id)_bestFormatWithSize:(struct CGSize { double x0; double x1; })a0 specificVersionType:(long long)a1 contentMode:(long long)a2 demoteFactor:(double)a3 srcAspectRatio:(double)a4 hasAdjustmentsHandler:(id /* block */)a5 desiredImagePixelSize:(struct CGSize { double x0; double x1; } *)a6;
- (struct CGSize { double x0; double x1; })posterThumbnailSize;
- (id)initWithDeviceConfiguration:(id)a0;

@end
