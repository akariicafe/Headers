@class UIColor, PDFRenderingPropertiesPrivate, PDFView, PDFLayerController;

@interface PDFRenderingProperties : NSObject {
    PDFRenderingPropertiesPrivate *_private;
}

@property (weak, nonatomic, setter=setPDFView:) PDFView *pdfView;
@property (weak, nonatomic, setter=setPDFLayerController:) PDFLayerController *pdfLayerController;
@property (nonatomic) long long displayBox;
@property (nonatomic) BOOL shouldAntiAlias;
@property (nonatomic) double greekingThreshold;
@property (nonatomic) long long interpolationQuality;
@property (nonatomic) double lineWidthThreshold;
@property (retain, nonatomic) UIColor *pageColor;
@property (nonatomic) BOOL enablePageShadows;
@property (nonatomic) double screenScaleFactor;
@property (nonatomic) BOOL enableTileUpdates;
@property (nonatomic) BOOL enableBackgroundImages;
@property (nonatomic) BOOL isUsingPDFExtensionView;
@property (nonatomic) struct CGColorSpace { } *deviceColorSpace;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_notifyPropertyChanged:(long long)a0;

@end
