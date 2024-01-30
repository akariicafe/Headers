@class NSString, MPCPlayerResponseItem, MPCPlayerResponse, MPSectionedCollection, NSIndexPath;

@interface MPCPlayerResponseTracklist : NSObject <_MPCStateDumpPropertyListTransformable> {
    unsigned long long _changeItemSupport;
}

@property (readonly, weak, nonatomic) MPCPlayerResponse *response;
@property (readonly, copy, nonatomic) MPSectionedCollection *items;
@property (readonly, copy, nonatomic) NSIndexPath *playingItemIndexPath;
@property (readonly, copy, nonatomic) MPSectionedCollection *displayItems;
@property (readonly, nonatomic) long long playingItemGlobalIndex;
@property (readonly, nonatomic) long long globalItemCount;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) long long lastChangeDirection;
@property (readonly, nonatomic) long long upNextItemCount;
@property (readonly, nonatomic) MPCPlayerResponseItem *playingItem;
@property (readonly, nonatomic) long long repeatType;
@property (readonly, nonatomic) long long shuffleType;
@property (readonly, nonatomic) long long actionAtQueueEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resetCommandForPlayerPath:(id)a0 devices:(id)a1;
+ (id)insertCommandForPlayerPath:(id)a0 devices:(id)a1;

- (id)_stateDumpObject;
- (id)repeatCommand;
- (id)displayIndexPathForStructuredIndexPath:(id)a0;
- (void).cxx_destruct;
- (id)changeItemCommand;
- (id)reorderCommand;
- (id)resetCommand;
- (id)disableModificationsCommand;
- (id)structuredIndexPathForDisplayIndexPath:(id)a0;
- (unsigned long long)_determineChangeItemSupport;
- (id)insertCommand;
- (id)actionAtQueueEndCommand;
- (id)shuffleCommand;
- (id)initWithResponse:(id)a0;

@end
