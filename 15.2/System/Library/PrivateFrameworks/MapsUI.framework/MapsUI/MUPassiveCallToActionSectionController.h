@class MUCallToActionItemCellModel, MKUGCCallToActionViewAppearance, MUPlaceSectionView;

@interface MUPassiveCallToActionSectionController : MUCallToActionSectionController {
    MUPlaceSectionView *_sectionView;
    MUCallToActionItemCellModel *_addPhotoModel;
    MUCallToActionItemCellModel *_ratingsModel;
    MKUGCCallToActionViewAppearance *_submissionStatus;
}

- (void).cxx_destruct;
- (BOOL)hasContent;
- (id)sectionView;
- (id)submissionStatus;
- (void)setSubmissionStatus:(id)a0;
- (int)analyticsModuleType;
- (void)_updateForSubmissionStatusChangeWithPreviousStatus:(id)a0;
- (void)_handlePhotoItemTapWithPresentationOptions:(id)a0;
- (void)_handleRatingItemTapWithPresentationOptions:(id)a0;
- (void)_handleViewCurrentSubmissionTapWithPresentationOptions:(id)a0;
- (void)_instrumentUserAction:(int)a0;

@end
