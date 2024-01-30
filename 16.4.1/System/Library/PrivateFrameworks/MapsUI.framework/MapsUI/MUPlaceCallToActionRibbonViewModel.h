@class MUPlaceRibbonItemViewModel, MKUGCCallToActionViewAppearance;

@interface MUPlaceCallToActionRibbonViewModel : MUPlaceRibbonItemViewModel {
    MUPlaceRibbonItemViewModel *_callToActionViewModel;
}

@property (retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;

- (BOOL)isTappable;
- (void).cxx_destruct;
- (void)_updateInternalState;
- (id)initWithSubmissionStatus:(id)a0;
- (id /* block */)titleStringProvider;
- (id /* block */)valueStringProvider;

@end
