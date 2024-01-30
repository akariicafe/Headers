@class HMHome, NSMutableSet;

@interface HFUserPhotosLibraryItemProvider : HFItemProvider

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) NSMutableSet *userPhotosLibraryItems;

- (void).cxx_destruct;
- (id)items;
- (id)reloadItems;
- (id)initWithHome:(id)a0;
- (id)invalidationReasons;

@end
