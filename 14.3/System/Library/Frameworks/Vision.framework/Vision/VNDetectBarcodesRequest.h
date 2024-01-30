@class NSArray, NSString;

@interface VNDetectBarcodesRequest : VNImageBasedRequest

@property (class, readonly, copy, nonatomic) NSArray *availableLocateModes;
@property (class, readonly, copy, nonatomic) NSArray *supportedSymbologies;

@property (copy, nonatomic) NSString *locateMode;
@property (nonatomic) BOOL stopAtFirstPyramidWith2DCode;
@property (copy, nonatomic) NSArray *symbologies;

+ (void)initialize;
+ (id)barcodeSymbologyForACBSBarcodeType:(id)a0;
+ (id)ACBSBarcodeTypeForBarcodeSymbology:(id)a0;
+ (id)_allBarcodeSymbologies;
+ (Class)configurationClass;
+ (void)recordDefaultOptionsInDictionary:(id)a0;

- (id)_newVNBarcodeSymbologyQRDescriptorForACBSBarcodeInfo:(id)a0;
- (id)_newVNBarcodeSymbologyAztecDescriptorForACBSBarcodeInfo:(id)a0;
- (int)_ACBarcodeRecognizerLocateMode;
- (id)_newVNBarcodeSymbologyPDF417DescriptorForACBSBarcodeInfo:(id)a0;
- (struct ACBSConfig { } *)_createACBSConfigAndReturnError:(id *)a0;
- (BOOL)_getCornerPointsFromCodeLocationPoints:(id)a0 bottomLeft:(struct CGPoint { double x0; double x1; } *)a1 topLeft:(struct CGPoint { double x0; double x1; } *)a2 topRight:(struct CGPoint { double x0; double x1; } *)a3 bottomRight:(struct CGPoint { double x0; double x1; } *)a4;
- (id)newBarcodeObservationForACBSBarcodeInfo:(id)a0 imageWidth:(unsigned long long)a1 imageHeight:(unsigned long long)a2 roiCroppingPixelRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 requestRevision:(unsigned long long)a4 error:(id *)a5;
- (id)_barcodesDetectedInImageBuffer:(id)a0 usingACBSConfig:(struct ACBSConfig { } *)a1 requestRevision:(unsigned long long)a2 error:(id *)a3;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (void)applyConfigurationOfRequest:(id)a0;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;

@end
