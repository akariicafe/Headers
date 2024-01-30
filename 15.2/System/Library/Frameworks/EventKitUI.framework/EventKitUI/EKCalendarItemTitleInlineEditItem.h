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

- (BOOL)isInline;
- (BOOL)textFieldShouldClear:(id)a0;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void)textFieldDidChange:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (unsigned long long)numberOfSubitems;
- (void)dealloc;
- (void)reset;
- (BOOL)isSaveable;
- (void)_contentSizeCategoryChanged:(id)a0;
- (void)addStylingToCell:(id)a0 forSubitemAtIndex:(unsigned long long)a1;
- (id)_makeCell:(unsigned long long)a0;
- (void)_setDrawsOwnRowSeparatorsForCell:(id)a0;
- (id)searchStringForEventAutocomplete;
- (BOOL)usesDetailViewControllerForSubitem:(unsigned long long)a0;
- (BOOL)saveAndDismissWithForce:(BOOL)a0;
- (BOOL)editor:(id)a0 canSelectSubitem:(unsigned long long)a1;

@end
