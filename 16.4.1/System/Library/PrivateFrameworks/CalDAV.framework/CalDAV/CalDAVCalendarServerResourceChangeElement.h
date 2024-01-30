@class NSURL, CalDAVUpdateOwnerItem;

@interface CalDAVCalendarServerResourceChangeElement : CoreDAVItemWithHrefChildItem

@property (readonly, nonatomic) NSURL *fullHrefURL;
@property (retain, nonatomic) CalDAVUpdateOwnerItem *changedBy;

- (id)copyParseRules;
- (id)init;
- (void).cxx_destruct;

@end
