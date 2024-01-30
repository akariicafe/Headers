@interface CalDAVCalendarServerCollectionChangesElement : CalDAVCalendarServerResourceChangeElement

@property (nonatomic) long long created;
@property (nonatomic) long long updated;
@property (nonatomic) long long deleted;

- (void)setCreatedItem:(id)a0;
- (void)setDeletedItem:(id)a0;
- (id)init;
- (void)setUpdatedItem:(id)a0;
- (id)copyParseRules;

@end
