@class NSURL, NTKGreenfieldDraftRecipe, NTKGreenfieldEncodedRecipe, UIImage;
@protocol NTKGreenfieldCompanionActivityItemProviderDelegate;

@interface NTKGreenfieldCompanionActivityItemProvider : UIActivityItemProvider {
    NTKGreenfieldDraftRecipe *_draftRecipe;
    NTKGreenfieldEncodedRecipe *_encodedRecipe;
    NSURL *_emailImageUrl;
    UIImage *_previewImage;
}

@property (weak, nonatomic) id<NTKGreenfieldCompanionActivityItemProviderDelegate> delegate;

- (id)item;
- (void).cxx_destruct;
- (id)activityViewController:(id)a0 subjectForActivityType:(id)a1;
- (id)activityViewControllerLinkPresentationMetadata:(id)a0;
- (id)activityViewController:(id)a0 itemsForActivityType:(id)a1;
- (id)initWithDraftRecipe:(id)a0 previewImage:(id)a1;
- (id)writeImageToDisk:(id)a0 suffix:(id)a1;

@end
