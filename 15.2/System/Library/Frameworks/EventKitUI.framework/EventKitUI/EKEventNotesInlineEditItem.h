@class NSString, CalendarNotesCell;

@interface EKEventNotesInlineEditItem : EKEventEditItem <UITextViewDelegate, EKCalendarItemInlineEditItem> {
    CalendarNotesCell *_cell;
    NSString *_lastTextChange;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _keyboardRect;
    BOOL _textViewDirty;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_keyboardWillHide:(id)a0;
- (BOOL)isInline;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void)_keyboardWillShow:(id)a0;
- (void).cxx_destruct;
- (void)textViewDidBeginEditing:(id)a0;
- (void)reset;
- (BOOL)isSaveable;
- (void)textViewDidEndEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (id)searchStringForEventAutocomplete;
- (BOOL)saveAndDismissWithForce:(BOOL)a0;
- (void)tableViewDidScroll;
- (BOOL)textViewShouldReturn:(id)a0;

@end
