@class NSSet;

@interface TDPNGAsset : TDAsset {
    int _exifOrientation;
    unsigned int _fileScaleFactor;
}

@property (retain, nonatomic) NSSet *renditions;
@property (nonatomic) BOOL rawData;

- (void)_logError:(id)a0;
- (int)exifOrientation;
- (unsigned int)fileScaleFactor;
- (struct CGSize { double x0; double x1; })sourceImageSizeWithDocument:(id)a0;
- (id)sourceImageWithDocument:(id)a0;
- (void)setFileScaleFactor:(unsigned int)a0;
- (BOOL)hasCursorProduction;
- (BOOL)hasProduction;

@end
