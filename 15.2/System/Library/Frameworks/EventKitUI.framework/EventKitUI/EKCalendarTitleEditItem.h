@class NSString, UITableViewCell;

@interface EKCalendarTitleEditItem : EKCalendarEditItem <UITextFieldDelegate> {
    UITableViewCell *_cell;
}

@property (nonatomic) BOOL showHeader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (id)headerTitle;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)reset;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (BOOL)saveStateToCalendar:(id)a0;

@end
