@class NSArray, NSMutableDictionary, HFStaticItem, HMHome;

@interface HFMediaAccessControlEditorItemProvider : HFStaticItemProvider

@property (copy, nonatomic) NSArray *accessControlItems;
@property (copy, nonatomic) HFStaticItem *passwordEnableItem;
@property (copy, nonatomic) HFStaticItem *passwordItem;
@property (readonly, nonatomic) NSMutableDictionary *itemForIdentifier;
@property (readonly, nonatomic) HMHome *home;

- (id)initWithItems:(id)a0;
- (id)initWithHome:(id)a0;
- (void).cxx_destruct;
- (id)items;
- (id)_buildItems;

@end
