@class NSString, EKEventURLInlineEditItem, EKEventNotesInlineEditItem;

@interface EKEventURLAndNotesInlineEditItem : EKEventEditItem <EKCalendarItemInlineEditItem> {
    EKEventURLInlineEditItem *_urlEditItem;
    EKEventNotesInlineEditItem *_notesEditItem;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isInline;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_contentSizeCategoryChanged;
- (unsigned long long)numberOfSubitems;
- (void)dealloc;
- (void)reset;
- (BOOL)isSaveable;
- (void)setSelectedResponder:(id)a0;
- (id)searchStringForEventAutocomplete;
- (BOOL)saveAndDismissWithForce:(BOOL)a0;
- (void)refreshFromCalendarItemAndStore;
- (void)setCalendarItem:(id)a0 store:(id)a1;
- (void)tableViewDidScroll;

@end
