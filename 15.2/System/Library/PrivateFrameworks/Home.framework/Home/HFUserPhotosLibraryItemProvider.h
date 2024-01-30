@class HMHome, NSMutableSet;

@interface HFUserPhotosLibraryItemProvider : HFItemProvider

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) NSMutableSet *userPhotosLibraryItems;

- (id)initWithHome:(id)a0;
- (void).cxx_destruct;
- (id)reloadItems;
- (id)items;
- (id)invalidationReasons;

@end
