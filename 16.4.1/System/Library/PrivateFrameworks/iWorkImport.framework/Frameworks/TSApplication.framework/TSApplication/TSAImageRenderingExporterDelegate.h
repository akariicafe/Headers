@class NSString, TSARenderingExporter, NSURL;
@protocol TSKImageExporter;

@interface TSAImageRenderingExporterDelegate : NSObject <TSARenderingExporterDelegate> {
    TSARenderingExporter<TSKImageExporter> *mRenderingExporter;
    NSURL *mURL;
}

@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (nonatomic) BOOL scaleToFit;
@property (retain, nonatomic) NSString *imageType;
@property (nonatomic) float compressionFactor;

- (void)setup;
- (void)teardown;
- (void).cxx_destruct;
- (double)viewScale;
- (BOOL)supportsPaging;
- (id)initWithRenderingExporter:(id)a0;
- (struct CGContext { } *)newCGContextForURL:(id)a0;
- (void)releaseCGContext:(struct CGContext { } *)a0;
- (BOOL)supportsRenderingQuality;

@end
