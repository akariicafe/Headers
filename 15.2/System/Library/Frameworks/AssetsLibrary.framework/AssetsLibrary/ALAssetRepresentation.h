@interface ALAssetRepresentation : NSObject

@property (retain, nonatomic) id internal;
@property BOOL ignoreRead;

+ (void)_enableImageDataUsesMap;

- (id)url;
- (id)filename;
- (id)UTI;
- (id)metadata;
- (long long)size;
- (id)description;
- (id)_imageData;
- (float)scale;
- (long long)orientation;
- (int)_fileDescriptor;
- (unsigned long long)getBytes:(char *)a0 fromOffset:(long long)a1 length:(unsigned long long)a2 error:(id *)a3;
- (struct CGImage { } *)fullScreenImage;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })dimensions;
- (BOOL)isValid;
- (id)initWithManagedAsset:(id)a0 sidecar:(id)a1 extension:(id)a2 library:(id)a3;
- (struct CGImage { } *)CGImageWithOptions:(id)a0 format:(unsigned short)a1;
- (struct CGImage { } *)CGImageWithOptions:(id)a0;
- (struct CGImage { } *)fullResolutionImage;
- (struct CGImage { } *)zoomableDisplayImage;
- (struct CGImage { } *)_largeDisplayableImageForFormatID:(unsigned short)a0;

@end
