@class UIImage;

@interface TSUImage : NSObject {
    struct CGImage { } *mCachedSliceableImage;
    struct __CFDictionary { } *mImageSlices;
    long long mImageSliceCacheLock;
    id mCachedSystemImage;
    long long mCachedImageLock;
}

@property (readonly, nonatomic) UIImage *UIImage;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) struct CGImage { } *CGImage;
@property (readonly, nonatomic) long long imageOrientation;
@property (readonly, nonatomic) double scale;

+ (id)imageWithData:(id)a0;
+ (id)imageWithContentsOfFile:(id)a0;
+ (id)imageNamed:(id)a0 inBundle:(id)a1;
+ (id)imageWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 orientation:(long long)a2;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)imageWithCGImage:(struct CGImage { } *)a0;
+ (id)imageWithUIImage:(id)a0;
+ (id)noisePatternWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 factor:(double)a2;
+ (id)imageWithSize:(struct CGSize { double x0; double x1; })a0 drawnUsingBlock:(id /* block */)a1;

- (id)initWithCGImage:(struct CGImage { } *)a0;
- (id)initWithContentsOfFile:(id)a0;
- (id)initWithData:(id)a0;
- (BOOL)isEmpty;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)TIFFRepresentation;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 orientation:(long long)a2;
- (id)PNGRepresentation;
- (id)initWithUIImage:(id)a0;
- (id)initWithImageSourceRef:(struct CGImageSource { } *)a0;
- (struct CGImage { } *)CGImageForSize:(struct CGSize { double x0; double x1; })a0;
- (id)JPEGRepresentationWithCompressionQuality:(double)a0;
- (id)stretchedImageOfSize:(struct CGSize { double x0; double x1; })a0 leftCapWidth:(double)a1 rightCapWidth:(double)a2 topCapHeight:(double)a3 bottomCapHeight:(double)a4;
- (struct CGImage { } *)CGImageForContentsScale:(double)a0;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1 stretchingCenterWidthBy:(double)a2;
- (id)imagePartsWithLeftCapWidth:(double)a0 rightCapWidth:(double)a1 topCapHeight:(double)a2 bottomCapHeight:(double)a3;

@end
