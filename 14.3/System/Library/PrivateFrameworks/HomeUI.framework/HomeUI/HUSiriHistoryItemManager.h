@class NSObject, HFStaticItem;
@protocol OS_dispatch_queue;

@interface HUSiriHistoryItemManager : HFItemManager {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) HFStaticItem *deleteSiriHistoryItem;

- (void).cxx_destruct;
- (id)didSelectItemAtIndexPath:(id)a0;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithDelegate:(id)a0 groupItem:(id)a1;
- (id)didUpdateItemAtIndexPath:(id)a0;

@end
