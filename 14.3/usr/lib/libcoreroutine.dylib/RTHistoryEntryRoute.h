@class NSUUID, RTLocation, RTMapItem, NSDate;

@interface RTHistoryEntryRoute : NSObject

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSDate *usageDate;
@property (readonly, nonatomic) RTLocation *originLocation;
@property (readonly, nonatomic) RTMapItem *originMapItem;
@property (readonly, nonatomic) RTLocation *destinationLocation;
@property (readonly, nonatomic) RTMapItem *destinationMapItem;
@property (readonly, nonatomic) BOOL navigationWasInterrupted;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:(id)a0 usageDate:(id)a1 originLocation:(id)a2 originMapItem:(id)a3 destinationLocation:(id)a4 destinationMapItem:(id)a5 navigationWasInterrupted:(BOOL)a6;

@end
