@class NSString, CalendarNotesCell;

@interface EKConferenceInformationInlineEditItem : EKEventEditItem <EKCalendarItemInlineEditItem> {
    CalendarNotesCell *_cell;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isInline;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)isSaveable;
- (id)searchStringForEventAutocomplete;
- (BOOL)shouldAppearWithVisibility:(int)a0;

@end
