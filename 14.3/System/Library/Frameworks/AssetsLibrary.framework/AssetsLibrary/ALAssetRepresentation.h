@interface ALAssetRepresentation : NSObject

@property (retain, nonatomic) id internal;
@property BOOL ignoreRead;

+ (void)_enableImageDataUsesMap;

- (id)UTI;
- (float)scale;
- (id)filename;
- (void)dealloc;
- (id)metadata;
- (int)_fileDescriptor;
- (struct CGImage { } *)fullScreenImage;
- (unsigned long long)getBytes:(char *)a0 fromOffset:(long long)a1 length:(unsigned long long)a2 error:(id *)a3;
- (long long)size;
- (struct CGImage { } *)fullResolutionImage;
- (BOOL)isValid;
- (long long)orientation;
- (struct CGSize { double x0; double x1; })dimensions;
- (id)url;
- (id)description;
- (id)_imageData;
- (id)initWithManagedAsset:(id)a0 sidecar:(id)a1 extension:(id)a2 library:(id)a3;
- (struct CGImage { } *)CGImageWithOptions:(id)a0 format:(unsigned short)a1;
- (struct CGImage { } *)CGImageWithOptions:(id)a0;
- (struct CGImage { } *)zoomableDisplayImage;
- (struct CGImage { } *)_largeDisplayableImageForFormatID:(unsigned short)a0;

@end
