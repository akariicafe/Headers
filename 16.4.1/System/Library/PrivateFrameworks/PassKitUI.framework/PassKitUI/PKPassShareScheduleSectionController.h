@class PKPassShareTimeConfiguration, NSArray, NSMutableDictionary, NSDateFormatter, NSMutableArray;
@protocol PKPassShareScheduleSectionControllerDelegate;

@interface PKPassShareScheduleSectionController : PKPassShareSectionController <PKWeekdaySelectorDelegate> {
    NSMutableArray *_dayRowItems;
    NSArray *_dateRowItems;
    NSMutableDictionary *_tags;
    NSDateFormatter *_formatter;
    BOOL _isEditable;
    PKPassShareTimeConfiguration *_possibleTimeConfiguration;
    id<PKPassShareScheduleSectionControllerDelegate> _delegate;
}

@property (retain, nonatomic) PKPassShareTimeConfiguration *configuration;
@property (nonatomic) BOOL isDisabled;

- (void).cxx_destruct;
- (void)didSelectItem:(id)a0;
- (id)_formattedDate:(id)a0;
- (void)_updateRowsIfNecessary;
- (id)cellRegistrationForItem:(id)a0;
- (id)decorateCell:(id)a0 forScheduleRowItem:(id)a1;
- (void)decorateDayPicker:(id)a0 forScheduleRowItem:(id)a1;
- (id)initWithConfiguration:(id)a0 possibleTimeConfiguration:(id)a1 isEditable:(BOOL)a2 isDisabled:(BOOL)a3 delegate:(id)a4;
- (BOOL)shouldHighlightItem:(id)a0;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;
- (void)timePickerValueDidChange:(id)a0;
- (void)toggleValueChanged:(id)a0;
- (void)weekdaySelector:(id)a0 didUpdateSelectedWeekdays:(id)a1;

@end
