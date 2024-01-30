@class NSMutableSet;

@interface HFFakeMediaAccessoryItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *mediaAccessoryItems;
@property (retain, nonatomic) NSMutableSet *mediaAccessoryItemTypes;

- (id)init;
- (void).cxx_destruct;
- (id)items;
- (id)reloadItems;

@end
