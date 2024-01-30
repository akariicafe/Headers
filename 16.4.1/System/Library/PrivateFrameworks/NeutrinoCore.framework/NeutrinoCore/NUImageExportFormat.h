@interface NUImageExportFormat : NSObject <NSCopying>

+ (id)defaultFormatForURL:(id)a0;

- (id)fileType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addImageDestinationOptionsToImageProperties:(id)a0;
- (int)renderFormat;

@end
