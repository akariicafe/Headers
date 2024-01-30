@class NSArray;
@protocol EKEventAutocompleteResultsEditItemDelegate;

@interface EKEventAutocompleteResultsEditItem : EKCalendarItemEditItem {
    BOOL _suggestionApplied;
}

@property (retain, nonatomic) NSArray *results;
@property (weak, nonatomic) id<EKEventAutocompleteResultsEditItemDelegate> delegate;
@property (readonly, nonatomic) BOOL hasSuggestedLocationResult;

- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (unsigned long long)numberOfSubitems;
- (void).cxx_destruct;
- (BOOL)editor:(id)a0 canSelectSubitem:(unsigned long long)a1;
- (void)editor:(id)a0 didSelectSubitem:(unsigned long long)a1;
- (BOOL)editor:(id)a0 shouldClearSelectionFromSubitem:(unsigned long long)a1;
- (BOOL)shouldAppearWithVisibility:(int)a0;

@end
