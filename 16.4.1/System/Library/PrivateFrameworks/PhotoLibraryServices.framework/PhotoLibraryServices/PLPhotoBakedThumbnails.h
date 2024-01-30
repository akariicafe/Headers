@class NSData, NSMutableDictionary, NSMutableArray;

@interface PLPhotoBakedThumbnails : NSObject {
    unsigned short _format;
    int _singleThumbnailImageLength;
    unsigned long long _count;
    BOOL _dataIsMutable;
    NSData *_thumbnailData;
    NSMutableArray *_thumbnailImages;
    NSMutableDictionary *_options;
    NSData *_optionsData;
    BOOL _optionsAccessed;
    BOOL _missingHeader;
    struct CGSize { double width; double height; } _size;
}

@property (readonly, nonatomic) unsigned short format;
@property (readonly, nonatomic) NSMutableDictionary *options;
@property (readonly, nonatomic) NSData *optionsData;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) int bitsPerComponent;
@property (readonly, nonatomic) int bytesPerPixel;
@property (readonly, nonatomic) unsigned int bitmapInfo;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } imageRect;

+ (BOOL)_transformForImage:(struct CGImage { } *)a0 isCropped:(BOOL)a1 captureOrientation:(int)a2 sizeInOut:(struct CGSize { double x0; double x1; } *)a3 contextSizeOut:(struct CGSize { double x0; double x1; } *)a4 transformOut:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a5;
+ (id)thumbnailsWithContentsOfFile:(id)a0 format:(unsigned short)a1;

- (id)serializedData;
- (BOOL)saveToFile:(id)a0;
- (unsigned long long)count;
- (id)description;
- (void).cxx_destruct;
- (id)_thumbnailData;
- (id)initWithContentsOfFile:(id)a0 format:(unsigned short)a1 readOnly:(BOOL)a2;
- (id)initWithData:(id)a0 format:(unsigned short)a1 readOnly:(BOOL)a2;
- (id)initWithImages:(id)a0 format:(unsigned short)a1 options:(id)a2 delegate:(id)a3;
- (char *)thumbnailBytesAtIndex:(long long)a0;
- (id)thumbnailDataAtIndex:(long long)a0;
- (struct CGImage { } *)thumbnailImageAtIndex:(long long)a0;
- (BOOL)writeBorderedThumbnailOfImage:(struct CGImage { } *)a0 toBuffer:(void *)a1 orientation:(int *)a2 format:(unsigned short)a3 formatInfo:(const struct { int x0; struct CGSize { double x0; double x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; unsigned int x4; int x5; int x6; double x7[4]; double x8[4]; unsigned int x9; } *)a4 delegate:(id)a5;

@end
