@class NSMutableSet, ICSDateValue;

@interface CalDAVCalendarServerResourceChangedItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *created;
@property (retain, nonatomic) NSMutableSet *updated;
@property (retain, nonatomic) NSMutableSet *deleted;
@property (retain, nonatomic) NSMutableSet *collectionChanges;
@property (retain, nonatomic) NSMutableSet *collectionUpdates;
@property (retain, nonatomic) ICSDateValue *dtstamp;

- (void).cxx_destruct;
- (id)init;
- (id)copyParseRules;
- (void)addCreated:(id)a0;
- (void)addUpdated:(id)a0;
- (void)addDeleted:(id)a0;
- (void)addCollectionChanges:(id)a0;
- (void)addCollectionUpdates:(id)a0;
- (void)setDtstampItem:(id)a0;

@end
