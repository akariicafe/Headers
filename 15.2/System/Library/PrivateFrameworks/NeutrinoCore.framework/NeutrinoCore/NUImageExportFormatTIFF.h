@interface NUImageExportFormatTIFF : NUImageExportFormat

@property long long pixelType;
@property long long compression;
@property BOOL preserveAlpha;

- (id)fileType;
- (int)depth;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)renderFormat;
- (void)addImageDestinationOptionsToImageProperties:(id)a0;

@end
