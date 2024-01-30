@interface NUImageExportFormat : NSObject <NSCopying>

+ (id)defaultFormatForURL:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)fileType;
- (int)renderFormat;
- (void)addImageDestinationOptionsToImageProperties:(id)a0;

@end
