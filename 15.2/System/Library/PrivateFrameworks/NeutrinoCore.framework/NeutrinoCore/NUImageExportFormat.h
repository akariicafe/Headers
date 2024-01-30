@interface NUImageExportFormat : NSObject <NSCopying>

+ (id)defaultFormatForURL:(id)a0;

- (id)fileType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)renderFormat;
- (void)addImageDestinationOptionsToImageProperties:(id)a0;

@end
