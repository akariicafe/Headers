@interface NUImageExportFormatTIFF : NUImageExportFormat

@property long long pixelType;
@property long long compression;
@property BOOL preserveAlpha;

- (int)depth;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)fileType;
- (int)renderFormat;
- (void)addImageDestinationOptionsToImageProperties:(id)a0;

@end
