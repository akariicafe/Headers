@class ATXInformationStore;

@interface ATXWidgetSuggestionDismissManager : NSObject {
    ATXInformationStore *_store;
}

+ (id)startDateOfDismissHistoryConsidered;

- (id)initWithStore:(id)a0;
- (void)userDidDismissSuggestionForWidget:(id)a0 kind:(id)a1 intent:(id)a2 atDate:(id)a3 duration:(double)a4;
- (BOOL)_shouldBlockSuggestionByRelatedDismissDates:(id)a0;
- (unsigned long long)userDismissCountForWidgetSuggestionWithBundleId:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)shouldBlockWidgetSuggestionBecauseOfPreviousDismiss:(id)a0 kind:(id)a1 intent:(id)a2;
- (BOOL)shouldBlockSuggestionWithIntent:(id)a0;

@end
