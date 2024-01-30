@class UIImage, UIColor, NSString;

@interface CLKImageProvider : NSObject <NSSecureCoding, NSCopying> {
    BOOL _finalized;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct CGSize { double width; double height; } maxSize;
@property (copy, nonatomic) id /* block */ imageViewCreationHandler;
@property (retain, nonatomic) UIImage *foregroundAccentImage;
@property (retain, nonatomic) UIColor *foregroundAccentImageColor;
@property (nonatomic, getter=isForegroundAccentImageTinted) BOOL foregroundAccentImageTinted;
@property (retain, nonatomic) UIImage *onePieceImage;
@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) UIImage *twoPieceImageBackground;
@property (retain, nonatomic) UIImage *twoPieceImageForeground;
@property (retain, nonatomic) NSString *accessibilityLabel;

+ (id)new;
+ (id)imageProviderWithOnePieceImage:(id)a0;
+ (id)imageProviderWithImageViewCreationHandler:(id /* block */)a0;
+ (id)imageProviderWithOnePieceImage:(id)a0 twoPieceImageBackground:(id)a1 twoPieceImageForeground:(id)a2;
+ (id)imageProviderWithJSONObjectRepresentation:(id)a0 bundle:(id)a1;

- (BOOL)validate;
- (void)encodeWithCoder:(id)a0;
- (id)initPrivate;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)finalizeWithMaxSDKSize:(struct CGSize { double x0; double x1; })a0 maxDeviceSize:(struct CGSize { double x0; double x1; })a1 maskToCircle:(BOOL)a2;
- (void)finalizeWithMaxSDKSize:(struct CGSize { double x0; double x1; })a0 maxDeviceSize:(struct CGSize { double x0; double x1; })a1 cornerRadius:(double)a2;
- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)a0;
- (id)initWithOnePieceImage:(id)a0;
- (id)initWithJSONObjectRepresentation:(id)a0 bundle:(id)a1;
- (id)initWithOnePieceImage:(id)a0 twoPieceImageBackground:(id)a1 twoPieceImageForeground:(id)a2;
- (void)_resizeImagesIfNecessaryWithMaxSDKSize:(struct CGSize { double x0; double x1; })a0 andMaskToCircle:(BOOL)a1;
- (void)_resizeImagesIfNecessaryWithMaxSDKSize:(struct CGSize { double x0; double x1; })a0 andCornerRadius:(double)a1;
- (id)initWithForegroundAccentImage:(id)a0;

@end
