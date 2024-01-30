@class MUPlaceRibbonItemViewModel, MKUGCCallToActionViewAppearance;

@interface MUPlaceCallToActionRibbonViewModel : MUPlaceRibbonItemViewModel {
    MUPlaceRibbonItemViewModel *_callToActionViewModel;
}

@property (retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;

- (BOOL)isTappable;
- (void).cxx_destruct;
- (void)_updateInternalState;
- (id /* block */)titleStringProvider;
- (id /* block */)valueStringProvider;
- (id)initWithSubmissionStatus:(id)a0;

@end
