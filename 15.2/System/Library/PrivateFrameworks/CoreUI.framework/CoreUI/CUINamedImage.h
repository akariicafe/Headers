@interface CUINamedImage : CUINamedLookup {
    struct _cuiniproperties { unsigned char isVectorBased : 1; unsigned char hasSliceInformation : 1; unsigned char hasAlignmentInformation : 1; unsigned char resizingMode : 2; unsigned char templateRenderingMode : 3; unsigned char exifOrientation : 4; unsigned char isAlphaCropped : 1; unsigned char isFlippable : 1; unsigned char isTintable : 1; unsigned char preservedVectorRepresentation : 1; unsigned short _reserved : 16; } _imageProperties;
}

@property (readonly, nonatomic) struct CGImage { } *image;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) long long imageType;
@property (readonly, nonatomic) struct { double x0; double x1; double x2; double x3; } edgeInsets;
@property (readonly, nonatomic) long long resizingMode;
@property (readonly, nonatomic) double opacity;
@property (readonly, nonatomic) struct { double x0; double x1; double x2; double x3; } alignmentEdgeInsets;
@property (readonly, nonatomic) int blendMode;
@property (readonly, nonatomic) BOOL hasSliceInformation;
@property (readonly, nonatomic) BOOL hasAlignmentInformation;
@property (readonly, nonatomic) BOOL isVectorBased;
@property (readonly, nonatomic) BOOL preservedVectorRepresentation;
@property (readonly, nonatomic) BOOL isTemplate;
@property (readonly, nonatomic) long long templateRenderingMode;
@property (readonly, nonatomic) BOOL isStructured;
@property (readonly, nonatomic) BOOL isFlippable;
@property (readonly, nonatomic) int exifOrientation;
@property (readonly, nonatomic) BOOL isAlphaCropped;
@property (readonly, nonatomic) struct CGImage { } *croppedImage;

- (id)baseKey;
- (BOOL)_cacheRenditionProperties;
- (long long)resizingModeWithSubtype:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alphaCroppedRect;
- (id)description;
- (id)initWithName:(id)a0 usingRenditionKey:(id)a1 fromTheme:(unsigned long long)a2;
- (struct CGImage { } *)createImageFromPDFRenditionWithScale:(double)a0;
- (double)positionOfSliceBoundary:(unsigned int)a0;
- (struct CGSize { double x0; double x1; })originalUncroppedSize;

@end
