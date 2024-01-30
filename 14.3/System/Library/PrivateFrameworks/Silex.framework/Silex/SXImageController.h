@class SXColumnLayout, NSMutableDictionary, NSDictionary, SXDocumentController;

@interface SXImageController : NSObject

@property (readonly, weak, nonatomic) SXDocumentController *documentController;
@property (readonly, nonatomic) SXColumnLayout *columnLayout;
@property (readonly, nonatomic) struct CGSize { double width; double height; } viewportSize;
@property (readonly, nonatomic) NSDictionary *imageResourcesGroupedByImageIdentifier;
@property (readonly, nonatomic) NSDictionary *image2ResourcesGroupedByImageIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *optimalImageResources;

- (void).cxx_destruct;
- (id)imageResourceForIdentifier:(id)a0;
- (id)initWithDocumentController:(id)a0 columnCalculator:(id)a1;
- (id)largestImageResourceForImageIdentifier:(id)a0;
- (id)allImageResources;
- (void)prepareImageResources;
- (void)determineOptimalImagesForComponents:(id)a0;
- (void)determineOptimalImagesForComponentStyles:(id)a0;
- (void)determineOptimalImagesForMetadata;
- (id)imageResourceForImageIdentifier:(id)a0 constrainedToSize:(struct CGSize { double x0; double x1; })a1;
- (id)imageResourcesForComponent:(id)a0;
- (id)imageResourceForImageComponent:(id)a0;
- (id)imageResourceForScalableImageComponent:(id)a0;
- (id)imageResourceForVideoComponent:(id)a0;
- (id)imageResourceForAudioComponent:(id)a0;
- (id)imageResourcesForGalleryComponent:(id)a0;
- (id)imageResourceForDataTableComponent:(id)a0;
- (struct CGSize { double x0; double x1; })sizeConstraintForComponent:(id)a0;
- (id)imageResourceForGalleryItem:(id)a0;
- (id)imageResourcesForComponentStyle:(id)a0;
- (id)imageResourceForImageFill:(id)a0;
- (id)imageResourceForVideoFill:(id)a0;
- (id)imageResourceForRepeatableImageFill:(id)a0;
- (id)imageResourcesForImageIdentifier:(id)a0;
- (id)taggedEquivalentOfImageResource:(id)a0;
- (id)Image2ResourcesForImageIdentifier:(id)a0;

@end
