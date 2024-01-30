@class NSString, UITableViewCell;

@interface EKEventURLInlineEditItem : EKEventEditItem <UITextFieldDelegate, EKCalendarItemInlineEditItem> {
    UITableViewCell *_cell;
    BOOL _tokenized;
    BOOL _hasChanges;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (BOOL)textFieldShouldClear:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)isInline;
- (BOOL)isSaveable;
- (void)refreshFromCalendarItemAndStore;
- (void)_setTokenized:(BOOL)a0;
- (BOOL)canBeConfiguredForCalendarConstraints:(id)a0;
- (BOOL)saveAndDismissWithForce:(BOOL)a0;
- (id)searchStringForEventAutocomplete;

@end
