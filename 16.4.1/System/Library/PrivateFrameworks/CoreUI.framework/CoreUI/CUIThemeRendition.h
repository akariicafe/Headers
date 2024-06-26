@class NSString, NSData, NSDictionary;

@interface CUIThemeRendition : NSObject {
    struct _renditionkeytoken { unsigned short identifier; unsigned short value; } _stackKey[22];
    struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *_key;
    struct cuithemerenditionrenditionflags { unsigned char isVectorBased : 1; unsigned char isOpaque : 1; unsigned char bitmapEncoding : 4; unsigned char optOutOfThinning : 1; unsigned char isFlippable : 1; unsigned char isTintable : 1; unsigned char preservedVectorRepresentation : 1; unsigned char preserveForArchiveOnly : 1; unsigned int reserved : 21; } _renditionFlags;
    unsigned long long _colorSpaceID;
    NSString *_name;
    NSString *_utiType;
    struct CGImage { } *_uncroppedImage;
    struct CGSize { double width; double height; } _physicalSizeInMeters;
    NSDictionary *_properties;
}

@property (nonatomic) long long type;
@property (nonatomic) unsigned int subtype;
@property (nonatomic) unsigned int internalScale;
@property (nonatomic) long long internalTemplateRenderingMode;
@property (retain, nonatomic) NSString *internalName;
@property (readonly, nonatomic) NSData *srcData;
@property (nonatomic) double opacity;
@property (nonatomic) int blendMode;
@property (nonatomic) int exifOrientation;

+ (id)displayNameForRenditionType:(long long)a0;
+ (Class)renditionClassForRenditionType:(long long)a0 andPixelFormat:(unsigned int)a1;

- (unsigned long long)colorSpaceID;
- (const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)key;
- (id)gradient;
- (struct { double x0; double x1; double x2; double x3; })vectorGlyphAlignmentRectInsets;
- (struct CGSize { double x0; double x1; })originalUncroppedSize;
- (BOOL)isScaled;
- (BOOL)isOpaque;
- (id)properties;
- (struct CGImage { } *)createImageFromPDFRenditionWithScale:(double)a0;
- (id)utiType;
- (id)systemColorName;
- (id)externalTags;
- (struct CGColor { } *)cgColor;
- (unsigned long long)sourceRowbytes;
- (void)_initalizeMetadataFromCSIData:(const struct _csiheader { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned char x7 : 4; unsigned int x8 : 28; struct _csimetadata { unsigned int x0; unsigned short x1; unsigned short x2; char x3[128]; } x9; unsigned int x10; struct _csibitmaplist { unsigned int x0; unsigned int x1[0]; } x11; } *)a0;
- (double)vectorGlyphCapLine;
- (BOOL)isTiled;
- (long long)templateRenderingMode;
- (id)data;
- (id)linkingToRendition;
- (int)objectVersion;
- (id)vectorGlyphAvailableSizes;
- (int)pixelFormat;
- (BOOL)isInternalLink;
- (id)metrics;
- (void)dealloc;
- (double)vectorGlyphReferencePointSize;
- (double)vectorGlyphBaseline;
- (id)layerReferences;
- (double)scale;
- (BOOL)substituteWithSystemColor;
- (id)_initWithCSIHeader:(const struct _csiheader { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned char x7 : 4; unsigned int x8 : 28; struct _csimetadata { unsigned int x0; unsigned short x1; unsigned short x2; char x3[128]; } x9; unsigned int x10; struct _csibitmaplist { unsigned int x0; unsigned int x1[0]; } x11; } *)a0;
- (id)imageForSliceIndex:(long long)a0;
- (struct CGImage { } *)unslicedImage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alphaCroppedRect;
- (struct { void /* unknown type, empty encoding */ x0[4]; })transformation;
- (id)initWithCSIData:(id)a0 forKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a1;
- (id)_sourceRendition;
- (void)_setStructuredThemeStore:(id)a0;
- (void)setName:(id)a0;
- (struct CGSVGDocument { } *)svgDocument;
- (id)description;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_destinationFrame;
- (int)bitmapEncoding;
- (long long)vectorGlyphRenderingMode;
- (struct CGSize { double x0; double x1; })unslicedSize;
- (struct CGPDFDocument { } *)pdfDocument;
- (id)sliceInformation;
- (id)maskForSliceIndex:(long long)a0;
- (id)name;
- (BOOL)isInterpolatable;
- (float)vectorGlyphTemplateVersion;
- (BOOL)edgesOnly;
- (BOOL)isFlippable;
- (BOOL)preservedVectorRepresentation;
- (id)_initWithCSIData:(id)a0 forKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a1;
- (void)_initializeCompositingOptionsFromCSIData:(const struct _csiheader { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned char x7 : 4; unsigned int x8 : 28; struct _csimetadata { unsigned int x0; unsigned short x1; unsigned short x2; char x3[128]; } x9; unsigned int x10; struct _csibitmaplist { unsigned int x0; unsigned int x1[0]; } x11; } *)a0;
- (void)_initializePropertiesFromCSIData:(const struct _csiheader { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned char x7 : 4; unsigned int x8 : 28; struct _csimetadata { unsigned int x0; unsigned short x1; unsigned short x2; char x3[128]; } x9; unsigned int x10; struct _csibitmaplist { unsigned int x0; unsigned int x1[0]; } x11; } *)a0;
- (void)_initializeRenditionKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a0;
- (void)_initializeTypeIdentifiersWithLayout:(unsigned short)a0;
- (void)_setFlippable:(BOOL)a0;
- (id)assetPackIdentifier;
- (id)contentNames;
- (const struct _csitextstyle { unsigned int x0; unsigned int x1; unsigned int x2; float x3; float x4; float x5; unsigned int x6; unsigned int x7; char x8[0]; } *)csiTextStyle;
- (id)effectPreset;
- (double)gradientDrawingAngle;
- (unsigned int)gradientStyle;
- (BOOL)isTintable;
- (BOOL)isVectorBased;
- (id)mipLevels;
- (id)modelAsset;
- (id)modelMesh;
- (id)modelSubmesh;
- (BOOL)optOutOfThinning;
- (struct CGSize { double x0; double x1; })physicalSizeInMeters;
- (BOOL)preserveForArchiveOnly;
- (id)provideTextureInfo;
- (struct cuithemerenditionrenditionflags { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 4; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned int x8 : 21; } *)renditionFlags;
- (id)sizeIndexes;
- (id)textureImages;
- (long long)textureIntepretation;
- (struct CGImage { } *)uncroppedImage;
- (unsigned short)valueForTokenIdentifier:(unsigned short)a0;

@end
