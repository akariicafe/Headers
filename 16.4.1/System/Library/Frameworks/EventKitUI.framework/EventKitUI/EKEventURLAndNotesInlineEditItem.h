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
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void)setDelegate:(id)a0;
- (void)dealloc;
- (id)init;
- (void)_contentSizeCategoryChanged;
- (unsigned long long)numberOfSubitems;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)isInline;
- (BOOL)isSaveable;
- (void)refreshFromCalendarItemAndStore;
- (BOOL)saveAndDismissWithForce:(BOOL)a0;
- (id)searchStringForEventAutocomplete;
- (void)setCalendarItem:(id)a0 store:(id)a1;
- (void)setSelectedResponder:(id)a0;
- (void)tableViewDidScroll;

@end
