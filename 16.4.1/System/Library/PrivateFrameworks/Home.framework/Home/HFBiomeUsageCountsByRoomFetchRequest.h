@class NSMapTable;

@interface HFBiomeUsageCountsByRoomFetchRequest : HFBiomeAbstractFetchRequest

@property (retain) NSMapTable *usageCountByAccessoryRepresentableByRoom;
@property (retain) NSMapTable *roomsByUniqueIdentifier;
@property (retain) NSMapTable *accessoryRepresentablesByUniqueIdentifier;
@property (copy, nonatomic) id /* block */ filter;

- (void).cxx_destruct;
- (id)successHandler;
- (id)initWithHome:(id)a0;
- (id)_accessoryRepresentableWithUniqueIdentifierString:(id)a0 uniqueIdentifierToAccessoryRepesentableBlock:(id /* block */)a1;
- (void)_incrementUsageCountForAccessoryRepresentable:(id)a0 inRoom:(id)a1;
- (id)_roomWithUniqueIdentifierString:(id)a0 uniqueIdentifierToRoomBlock:(id /* block */)a1;
- (void)eventHandler:(id)a0;

@end
