@class UITableViewHeaderFooterView, NSString, UILabel, NSMutableArray;

@interface EKCalendarShareesEditItem : EKCalendarEditItem <EKShareeViewControllerDelegate, EKShareePickerViewControllerDelegate> {
    UITableViewHeaderFooterView *_footerView;
    UILabel *_descriptionLabel;
}

@property (retain, nonatomic) NSMutableArray *shareeCells;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)footerView;
- (void)reset;
- (id)_shareeCellForName:(id)a0 detailText:(id)a1 additionalDetailText:(id)a2;
- (id)_stringForShareeStatus:(unsigned long long)a0;
- (id)_stringForShareeAccessLevel:(unsigned long long)a0;
- (id)_addPersonCell;
- (void)_dismissShareePicker;
- (void)_popBackToCalendarEditor:(BOOL)a0;
- (void)shareeViewControllerDidChangeAccessLevel:(id)a0;
- (void)shareeViewController:(id)a0 didCompleteWithAction:(int)a1;
- (void)shareePickerViewController:(id)a0 didCompleteWithAction:(int)a1;
- (id)eventStoreForShareePickerViewController:(id)a0;
- (BOOL)configureWithCalendar:(id)a0;
- (void)calendarEditor:(id)a0 didSelectSubitem:(unsigned long long)a1;
- (unsigned long long)numberOfSubitems;
- (id)headerTitle;
- (void)layoutForWidth:(double)a0;
- (void)_applyStyleToUILabel:(id)a0;
- (id)footerViewForSection;
- (double)footerHeightForSection;
- (BOOL)saveStateToCalendar:(id)a0;

@end
