@class NSDictionary, NSData, NSValue, NSNumber;

@interface CNVCardMutableImage : CNVCardImage

@property (readonly, copy, nonatomic) NSData *originalData;
@property (readonly, nonatomic) NSDictionary *originalCropRects;
@property (readonly, nonatomic) struct CGSize { double width; double height; } originalSize;
@property (readonly, nonatomic) struct CGImage { } *CGImage;
@property (readonly, nonatomic) BOOL attemptedCGImage;
@property (copy, nonatomic) NSValue *targetSizeValue;
@property (nonatomic) struct __CFString { } *sourceImageFormatUTI;
@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (copy, nonatomic) NSNumber *compressionQuality;

+ (id)CGImageCreateWithData:(id)a0 maxSizeValue:(id)a1;
+ (id)scaleCropRects:(id)a0 factor:(double)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scaleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 byFactor:(double)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)data;
- (void)dealloc;
- (BOOL)hasAlphaChannel;
- (id)cropRects;
- (id)initWithData:(id)a0 cropRects:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
- (void)describePropertiesWithBuilder:(id)a0;
- (void)nts_updateRepresentation;
- (void)nts_initCGImage;
- (void)nts_invalidateImageSize;
- (void)nts_invalidateImageQuality;
- (id)renderCGImage:(struct CGImage { } *)a0;
- (BOOL)shouldReturnPNG;
- (BOOL)isSourceLossless;

@end
