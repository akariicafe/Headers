@class MKUGCCallToActionViewAppearance, MUCallToActionItemCellModel, UIView, MUPlaceSectionView;

@interface MUPassiveCallToActionSectionController : MUCallToActionSectionController {
    MUPlaceSectionView *_sectionView;
    MUCallToActionItemCellModel *_addPhotoModel;
    MUCallToActionItemCellModel *_ratingsModel;
    UIView *_suggestionView;
    MKUGCCallToActionViewAppearance *_submissionStatus;
}

- (BOOL)hasContent;
- (void).cxx_destruct;
- (id)sectionView;
- (void)_handlePhotoItemTapWithPresentationOptions:(id)a0;
- (void)_handlePhotoItemTapWithPresentationOptions:(id)a0 entryPoint:(long long)a1;
- (void)_handleRatingItemTapWithPresentationOptions:(id)a0;
- (void)_handleViewCurrentSubmissionTapWithPresentationOptions:(id)a0;
- (void)_instrumentUserAction:(int)a0;
- (void)_loadContentIfNeeded;
- (void)_unloadContent;
- (void)_updateForSubmissionStatusChangeWithPreviousStatus:(id)a0;
- (int)analyticsModuleType;
- (BOOL)isImpressionable;
- (void)setSubmissionStatus:(id)a0;
- (id)submissionStatus;
- (void)updateSuggestionView;

@end
