@class PKPassSecurePreviewContext, NSString, NSURL, LPWebLinkPresentationProperties;

@interface CKPassPreviewMediaObject : CKPassbookMediaObject <CKMediaObjectMetadataPreview>

@property (class, readonly, nonatomic, getter=isSupported) BOOL supported;

@property (retain, nonatomic) LPWebLinkPresentationProperties *presentationProperties;
@property (retain, nonatomic) PKPassSecurePreviewContext *passPreview;
@property (retain, nonatomic) NSURL *overrideFileURL;
@property (retain, nonatomic) NSURL *overrideMetadataProperties;
@property (readonly, nonatomic) BOOL supportsPreviewMetadata;
@property (readonly, copy, nonatomic) NSString *previewMetadataFilenameExtension;

+ (id)_dictionaryRepresentationForColorString:(id)a0;
+ (id)_colorFromColorString:(id)a0;
+ (id)_dictionaryRepresentationForText:(id)a0 colorString:(id)a1;
+ (id)_colorFromDictionaryRepresentation:(id)a0;
+ (void)_updatePresentationPropertiesForRow:(id)a0 representation:(id)a1;
+ (void)_updatePresentationPropertiesForRow:(id)a0 text:(id)a1 color:(id)a2;
+ (BOOL)isPreviewable;
+ (BOOL)shouldUseTranscoderGeneratedPreviewSize;
+ (id)_paddedImage:(id)a0;
+ (id)_darkenColor:(id)a0;

- (id)fileURL;
- (id)previewMetadata;
- (id)previewMetadataWithContentsOfURL:(id)a0 error:(out id *)a1;
- (BOOL)writePreviewMetadata:(id)a0 toURL:(id)a1 error:(out id *)a2;
- (id)generatePreviewMetadata;
- (id)_initWithOverrideFileURL:(id)a0;
- (BOOL)generatePreviewOutOfProcess;
- (void).cxx_destruct;
- (id)presentationPropertiesForWidth:(double)a0 orientation:(char)a1;
- (Class)balloonViewClassForWidth:(double)a0 orientation:(char)a1;
- (id)generateThumbnailFillToSize:(struct CGSize { double x0; double x1; })a0 contentAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (Class)previewBalloonViewClass;

@end
