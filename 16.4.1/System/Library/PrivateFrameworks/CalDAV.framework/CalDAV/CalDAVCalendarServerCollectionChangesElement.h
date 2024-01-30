@interface CalDAVCalendarServerCollectionChangesElement : CalDAVCalendarServerResourceChangeElement

@property (nonatomic) long long created;
@property (nonatomic) long long updated;
@property (nonatomic) long long deleted;

- (id)copyParseRules;
- (void)setCreatedItem:(id)a0;
- (void)setDeletedItem:(id)a0;
- (void)setUpdatedItem:(id)a0;
- (id)init;

@end
