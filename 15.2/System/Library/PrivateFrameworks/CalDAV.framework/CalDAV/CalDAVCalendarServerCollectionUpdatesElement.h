@interface CalDAVCalendarServerCollectionUpdatesElement : CalDAVCalendarServerResourceChangeElement

@property (readonly, nonatomic) int state;

- (void)setPublish:(id)a0;
- (void)setUnpublish:(id)a0;
- (id)copyParseRules;

@end
