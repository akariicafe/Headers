@class NSString, CSSearchableItem, CSUserAction;

@interface CSUserActivityTuple : NSObject <CSIndexQueuableItem>

@property (retain) CSUserAction *action;
@property (retain) CSSearchableItem *item;
@property (retain) NSString *protectionClass;

- (void)updateWithItem:(id)a0;
- (id)initWithAction:(id)a0 item:(id)a1;
- (id)searchableItem;
- (id)description;
- (void).cxx_destruct;

@end
