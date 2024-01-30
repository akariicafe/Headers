@interface EKCalendarRemoveExtraInfoEditItem : EKCalendarEditItem

- (id)headerTitle;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (id)footerTitle;
- (unsigned long long)numberOfSubitems;
- (void)_stripAlertsChanged:(id)a0;
- (void)_stripAttachmentsChanged:(id)a0;

@end
