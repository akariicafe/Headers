@interface NUImageExportFormatJPEG : NUImageExportFormat {
    double _compressionQuality;
}

@property (nonatomic) double compressionQuality;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)fileType;
- (int)renderFormat;
- (void)addImageDestinationOptionsToImageProperties:(id)a0;

@end
