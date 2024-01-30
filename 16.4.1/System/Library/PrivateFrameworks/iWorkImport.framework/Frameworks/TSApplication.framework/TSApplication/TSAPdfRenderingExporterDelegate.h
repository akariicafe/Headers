@class NSString, TSARenderingExporter;

@interface TSAPdfRenderingExporterDelegate : NSObject <TSARenderingExporterDelegate> {
    TSARenderingExporter *mRenderingExporter;
    NSString *mPassphraseOpen;
    NSString *mPassphrasePrintCopy;
    BOOL mRequireOpenPassword;
    BOOL mRequireCopyPassword;
    BOOL mRequirePrintPassword;
    int mRenderingQuality;
}

@property int taggingCondition;

- (void)setup;
- (void)teardown;
- (void).cxx_destruct;
- (double)viewScale;
- (void)setPassphrase:(id)a0 hint:(id)a1;
- (void)setCopyPassphrase:(id)a0 hint:(id)a1;
- (void)setPrintPassphrase:(id)a0 hint:(id)a1;
- (BOOL)supportsPaging;
- (id)initWithRenderingExporter:(id)a0;
- (void)setRenderingQuality:(int)a0;
- (BOOL)validatePassphrases:(id *)a0;
- (struct CGContext { } *)newCGContextForURL:(id)a0;
- (void)releaseCGContext:(struct CGContext { } *)a0;
- (int)renderingQuality;
- (BOOL)supportsRenderingQuality;

@end
