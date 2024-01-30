@class NSString, UIColorPickerViewController, NSMutableArray, EKCalendarColorViewController;
@protocol EKCalendarColorEditItemDelegate;

@interface EKCalendarColorEditItem : EKCalendarEditItem <UIColorPickerViewControllerDelegate, EKCalendarColorEditItemDelegate> {
    UIColorPickerViewController *_customColorPicker;
    NSMutableArray *_cells;
    unsigned long long _checkedRow;
    EKCalendarColorViewController *_layoutInlineViewController;
}

@property (nonatomic) BOOL layoutInline;
@property (weak, nonatomic) id<EKCalendarColorEditItemDelegate> colorEditItemDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (id)headerTitle;
- (unsigned long long)numberOfSubitems;
- (void).cxx_destruct;
- (void)reset;
- (id)cells;
- (void)colorPickerViewControllerDidSelectColor:(id)a0;
- (id)_cellForSymbolicColor:(id)a0;
- (id)_cellWithText:(id)a0;
- (id)_checkmarkCellForCustomColor:(id)a0;
- (void)_setInitialColorOnCalendar;
- (void)calendarEditor:(id)a0 didSelectSubitem:(unsigned long long)a1;
- (BOOL)configureWithCalendar:(id)a0;
- (void)editItemSelectedColor:(id)a0 symbolicName:(id)a1;
- (unsigned long long)lastSubitemIndex;
- (BOOL)saveStateToCalendar:(id)a0;
- (void)setCalendar:(id)a0 store:(id)a1;

@end
