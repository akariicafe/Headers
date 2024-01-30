@class EKCalendarItemRecurrenceEndCell, NSString, EKRecurrenceTypeEditItemViewController, NSDate, PreferencesValueCell;

@interface EKCalendarItemRecurrenceEditItem : EKCalendarItemEditItem <EKRecurrenceTypeEditItemViewControllerDelegate, EKCellShortener> {
    long long _repeatType;
    long long _originalRepeatType;
    NSDate *_repeatEnd;
    NSDate *_originalRepeatEnd;
    NSString *_customRepeatDescription;
    unsigned long long _disclosedSubitem;
    int _shorteningStatus;
    PreferencesValueCell *_repeatEndDateCell;
    EKRecurrenceTypeEditItemViewController *_recurrenceTypeVC;
    EKCalendarItemRecurrenceEndCell *_repeatEndPickerCell;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_neverLocalizedString;

- (id)init;
- (void)_contentSizeCategoryChanged:(id)a0;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)saveAndDismissWithForce:(BOOL)a0;
- (void)reset;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (void)dealloc;
- (BOOL)editItemViewControllerSave:(id)a0;
- (id)stringForDate:(id)a0;
- (id)recurrenceTimeZone;
- (id)minRecurrenceEndDate;
- (void)refreshFromCalendarItemAndStore;
- (BOOL)canBeConfiguredForCalendarConstraints:(id)a0;
- (id)_recurrenceTypeVC;
- (BOOL)_validateRecurrenceType:(id)a0;
- (void)_updateRepeatEndDateCell;
- (BOOL)editItemViewControllerSave:(id)a0 notify:(BOOL)a1;
- (void)_repeatEndDateChanged:(id)a0;
- (void)_neverRepeatButtonTapped:(id)a0;
- (id)_repeatEndPickerCell;
- (BOOL)forceRefreshStartAndEndDatesOnSave;
- (id)recurrenceDate;
- (void)shortenCell:(id)a0;
- (unsigned long long)numberOfSubitems;
- (long long)repeatTypeForRecurrenceRule:(id)a0;

@end
