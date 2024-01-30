@class ICDocCamDocumentInfoCollection, ICDocCamImageCache;

@interface DCActivityViewController : UIActivityViewController

@property (retain, nonatomic) ICDocCamDocumentInfoCollection *documentInfoCollection;
@property (retain, nonatomic) ICDocCamImageCache *imageCache;
@property (nonatomic) BOOL ignoreAttachmentsForCopyToPasteboard;

- (void).cxx_destruct;
- (void)_performActivity:(id)a0;
- (BOOL)_canShowWhileLocked;
- (BOOL)inhibitPDFGenerationForActivityType:(id)a0;
- (BOOL)writeGalleryPDFDataToPasteboardIfNecessaryForActivity:(id)a0 documentInfoCollection:(id)a1;
- (id)activityTypesThatInhibitPDFGeneration;

@end
