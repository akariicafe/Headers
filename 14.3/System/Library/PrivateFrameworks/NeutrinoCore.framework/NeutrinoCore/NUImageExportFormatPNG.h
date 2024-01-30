@interface NUImageExportFormatPNG : NUImageExportFormat

@property BOOL preserveAlpha;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)fileType;
- (int)renderFormat;
- (void)addImageDestinationOptionsToImageProperties:(id)a0;

@end
