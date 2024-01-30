@class NSString, EKEventURLInlineEditItem, EKEventNotesInlineEditItem;

@interface EKEventURLAndNotesInlineEditItem : EKEventEditItem <EKCalendarItemInlineEditItem> {
    EKEventURLInlineEditItem *_urlEditItem;
    EKEventNotesInlineEditItem *_notesEditItem;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (void)setSelectedResponder:(id)a0;
- (id)init;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)searchStringForEventAutocomplete;
- (BOOL)saveAndDismissWithForce:(BOOL)a0;
- (void)reset;
- (void)dealloc;
- (void)_contentSizeCategoryChanged;
- (void)setCalendarItem:(id)a0 store:(id)a1;
- (void)tableViewDidScroll;
- (BOOL)isInline;
- (unsigned long long)numberOfSubitems;
- (void)setDelegate:(id)a0;
- (BOOL)isSaveable;

@end
