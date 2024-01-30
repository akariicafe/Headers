@class CoreDAVLeafItem;

@interface CalDAVCalendarServerReplyItem : CalDAVItemWithRecurrenceChildren

@property (retain, nonatomic) CoreDAVLeafItem *attendee;

- (id)copyParseRules;
- (void).cxx_destruct;

@end
