@class NSURL, CalDAVUpdateOwnerItem;

@interface CalDAVCalendarServerResourceChangeElement : CoreDAVItemWithHrefChildItem

@property (readonly, nonatomic) NSURL *fullHrefURL;
@property (retain, nonatomic) CalDAVUpdateOwnerItem *changedBy;

- (void).cxx_destruct;
- (id)init;
- (id)copyParseRules;

@end
