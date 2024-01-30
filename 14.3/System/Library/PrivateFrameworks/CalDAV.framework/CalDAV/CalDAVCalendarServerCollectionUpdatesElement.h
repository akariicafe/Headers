@interface CalDAVCalendarServerCollectionUpdatesElement : CalDAVCalendarServerResourceChangeElement

@property (readonly, nonatomic) int state;

- (id)copyParseRules;
- (void)setPublish:(id)a0;
- (void)setUnpublish:(id)a0;

@end
