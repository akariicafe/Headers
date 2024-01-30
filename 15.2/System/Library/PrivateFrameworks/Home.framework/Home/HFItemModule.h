@class NSSet;
@protocol HFItemUpdating;

@interface HFItemModule : NSObject

@property (readonly, nonatomic) NSSet *itemProviders;
@property (readonly, nonatomic) NSSet *allItems;
@property (readonly, weak, nonatomic) id<HFItemUpdating> itemUpdater;

- (void).cxx_destruct;
- (id)init;
- (BOOL)containsItem:(id)a0;
- (id)initWithItemUpdater:(id)a0;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (void)registerForExternalUpdates;
- (void)unregisterForExternalUpdates;
- (id)buildItemProviders;

@end
