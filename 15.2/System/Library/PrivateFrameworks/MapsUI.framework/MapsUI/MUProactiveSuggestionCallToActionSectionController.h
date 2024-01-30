@class MUButtonCellRowView, MKUGCCallToActionViewAppearance, MUCallToActionItemCellModel, MUPlaceSectionView;

@interface MUProactiveSuggestionCallToActionSectionController : MUCallToActionSectionController {
    long long _expectedCallToActionType;
    MUPlaceSectionView *_sectionView;
    MUButtonCellRowView *_buttonCellRowView;
    MUCallToActionItemCellModel *_proactiveViewModel;
    MKUGCCallToActionViewAppearance *_submissionStatus;
}

@property (retain, nonatomic) MKUGCCallToActionViewAppearance *proactiveCallToActionAppearance;

- (void).cxx_destruct;
- (BOOL)hasContent;
- (id)sectionView;
- (id)submissionStatus;
- (void)setSubmissionStatus:(id)a0;
- (int)analyticsModuleType;
- (id)initWithMapItem:(id)a0 expectedCallToActionType:(long long)a1;
- (void)_updateAvailabilityWithPreviousState:(BOOL)a0;

@end
