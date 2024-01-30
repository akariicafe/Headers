@class CoreDAVLeafItem;

@interface CalDAVCalendarServerReplyItem : CalDAVItemWithRecurrenceChildren

@property (retain, nonatomic) CoreDAVLeafItem *attendee;

- (void).cxx_destruct;
- (id)copyParseRules;

@end
