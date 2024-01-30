@class BCSBusinessItem, NSDate;

@interface BCSPersistentBusinessItemObject : NSObject

@property (readonly, nonatomic) BCSBusinessItem *businessItem;
@property (readonly, nonatomic) NSDate *TTLDate;
@property (readonly, nonatomic) NSDate *lastRetrievedDate;

- (void).cxx_destruct;
- (id)initWithBusinessItem:(id)a0 lastRetrievedDate:(id)a1 TTLDate:(id)a2;

@end
