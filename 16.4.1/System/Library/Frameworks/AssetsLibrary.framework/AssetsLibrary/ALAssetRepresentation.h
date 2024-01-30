@interface ALAssetRepresentation : NSObject

@property (retain, nonatomic) id internal;
@property BOOL ignoreRead;

+ (void)_enableImageDataUsesMap;

- (struct CGSize { double x0; double x1; })dimensions;
- (id)filename;
- (id)url;
- (id)metadata;
- (long long)orientation;
- (BOOL)isValid;
- (id)_imageData;
- (void)dealloc;
- (id)UTI;
- (float)scale;
- (long long)size;
- (id)description;
- (int)_fileDescriptor;
- (struct CGImage { } *)fullScreenImage;
- (unsigned long long)getBytes:(char *)a0 fromOffset:(long long)a1 length:(unsigned long long)a2 error:(id *)a3;
- (struct CGImage { } *)CGImageWithOptions:(id)a0;
- (struct CGImage { } *)CGImageWithOptions:(id)a0 format:(unsigned short)a1;
- (struct CGImage { } *)_largeDisplayableImageForFormatID:(unsigned short)a0;
- (struct CGImage { } *)fullResolutionImage;
- (id)initWithManagedAsset:(id)a0 sidecar:(id)a1 extension:(id)a2 library:(id)a3;
- (struct CGImage { } *)zoomableDisplayImage;

@end
