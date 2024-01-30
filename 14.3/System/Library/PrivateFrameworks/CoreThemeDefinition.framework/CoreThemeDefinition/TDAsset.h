@class NSString, TDThemeBitSource, TDTemplateRenderingMode;

@interface TDAsset : NSManagedObject {
    unsigned int _scaleFactor;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *category;
@property (retain, nonatomic) TDThemeBitSource *source;
@property (readonly, nonatomic) NSString *baseName;
@property (retain, nonatomic) TDTemplateRenderingMode *templateRenderingMode;

+ (unsigned int)scaleFactorFromImageFilename:(id)a0;
+ (id)_filenameRegex;
+ (BOOL)isTemplateFromImageFilename:(id)a0;
+ (long long)idiomFromImageFilename:(id)a0;
+ (long long)subtypeFromImageFilename:(id)a0;

- (unsigned int)scaleFactor;
- (void)setScaleFactor:(unsigned int)a0;
- (id)fileURLWithDocument:(id)a0;
- (BOOL)hasProduction;
- (id)_sourceRelativePathComponents;
- (id)sourceRelativePath;
- (void)setHasProduction:(id)a0;

@end
