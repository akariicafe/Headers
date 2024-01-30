@interface NUImageExportFormatJPEG : NUImageExportFormat {
    double _compressionQuality;
}

@property (nonatomic) double compressionQuality;

- (id)fileType;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)renderFormat;
- (void)addImageDestinationOptionsToImageProperties:(id)a0;

@end
