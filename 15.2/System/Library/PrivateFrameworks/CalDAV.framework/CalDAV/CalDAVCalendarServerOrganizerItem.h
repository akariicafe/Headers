@class CoreDAVLeafItem, CoreDAVHrefItem;

@interface CalDAVCalendarServerOrganizerItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVHrefItem *href;
@property (retain, nonatomic) CoreDAVLeafItem *commonName;

- (void).cxx_destruct;
- (id)init;
- (id)copyParseRules;

@end
