@class NSString, UITextField, UITableViewCell;

@interface EKCalendarItemTitleInlineEditItem : EKCalendarItemEditItem <UITextFieldDelegate, EKEditItemViewControllerDelegate, EKCalendarItemInlineEditItem> {
    UITableViewCell *_titleCell;
}

@property (nonatomic) BOOL drawsOwnRowSeparators;
@property (readonly, nonatomic) UITextField *titleTextField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textFieldShouldClear:(id)a0;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (void)addStylingToCell:(id)a0 forSubitemAtIndex:(unsigned long long)a1;
- (void)_setDrawsOwnRowSeparatorsForCell:(id)a0;
- (id)init;
- (void)_contentSizeCategoryChanged:(id)a0;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (id)searchStringForEventAutocomplete;
- (BOOL)usesDetailViewControllerForSubitem:(unsigned long long)a0;
- (BOOL)saveAndDismissWithForce:(BOOL)a0;
- (BOOL)editor:(id)a0 canSelectSubitem:(unsigned long long)a1;
- (void)reset;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)dealloc;
- (void)textFieldDidEndEditing:(id)a0;
- (id)_makeCell:(unsigned long long)a0;
- (BOOL)isInline;
- (unsigned long long)numberOfSubitems;
- (BOOL)isSaveable;
- (void)textFieldDidChange:(id)a0;

@end
