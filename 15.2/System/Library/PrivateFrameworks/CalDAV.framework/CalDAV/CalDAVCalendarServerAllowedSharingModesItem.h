@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerAllowedSharingModesItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItemWithNoChildren *canBePublished;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *canBeShared;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *isMarkedUndeletable;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *isMarkedImmutableSharees;

- (void).cxx_destruct;
- (id)init;
- (id)copyParseRules;

@end
