@class HFServiceItem, NSMutableArray;

@interface HUQuickControlGridServiceSection : NSObject

@property (retain, nonatomic) HFServiceItem *serviceItem;
@property (retain, nonatomic) NSMutableArray *gridControlItems;
@property (retain, nonatomic) NSMutableArray *supplementaryControlItems;

- (id)init;
- (void).cxx_destruct;

@end
