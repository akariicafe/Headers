@class HMHome, NSMutableSet;

@interface HFUserPhotosLibraryItemProvider : HFItemProvider

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) NSMutableSet *userPhotosLibraryItems;

- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (id)items;
- (id)invalidationReasons;
- (id)reloadItems;

@end
