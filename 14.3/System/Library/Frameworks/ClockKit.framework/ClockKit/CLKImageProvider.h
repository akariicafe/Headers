@class UIImage, UIColor, NSString;

@interface CLKImageProvider : NSObject <NSSecureCoding, NSCopying> {
    BOOL _finalized;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) id /* block */ imageViewCreationHandler;
@property (readonly, nonatomic) struct CGSize { double width; double height; } maxSize;
@property (retain, nonatomic) UIImage *foregroundAccentImage;
@property (retain, nonatomic) UIColor *foregroundAccentImageColor;
@property (nonatomic, getter=isForegroundAccentImageTinted) BOOL foregroundAccentImageTinted;
@property (retain, nonatomic) UIImage *onePieceImage;
@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) UIImage *twoPieceImageBackground;
@property (retain, nonatomic) UIImage *twoPieceImageForeground;
@property (retain, nonatomic) NSString *accessibilityLabel;

+ (id)new;
+ (id)imageProviderWithOnePieceImage:(id)a0 twoPieceImageBackground:(id)a1 twoPieceImageForeground:(id)a2;
+ (id)imageProviderWithOnePieceImage:(id)a0;
+ (id)imageProviderWithImageViewCreationHandler:(id /* block */)a0;

- (id)initPrivate;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)validate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)finalizeWithMaxSize:(struct CGSize { double x0; double x1; })a0 maskToCircle:(BOOL)a1;
- (void)finalizeWithMaxSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1;
- (id)initWithJSONObjectRepresentation:(id)a0 bundle:(id)a1;
- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)a0;
- (id)initWithOnePieceImage:(id)a0 twoPieceImageBackground:(id)a1 twoPieceImageForeground:(id)a2;
- (void)_resizeImagesIfNecessaryAndMaskToCircle:(BOOL)a0;
- (void)_resizeImagesIfNecessaryWithCornerRadius:(double)a0;
- (id)initWithOnePieceImage:(id)a0;
- (id)initWithForegroundAccentImage:(id)a0;

@end
