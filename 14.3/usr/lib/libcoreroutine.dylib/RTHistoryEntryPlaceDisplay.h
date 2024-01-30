@class NSUUID, RTLocation, RTMapItem, NSDate;

@interface RTHistoryEntryPlaceDisplay : NSObject

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSDate *usageDate;
@property (readonly, nonatomic) RTLocation *location;
@property (readonly, nonatomic) RTMapItem *mapItem;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:(id)a0 usageDate:(id)a1 location:(id)a2 mapItem:(id)a3;

@end
