@class NSArray;

@interface HFAccessoryListUtilities : NSObject

@property (class, nonatomic, readonly) NSArray *sortedAccessoryTypeGroups;

+ (id)accessoryRepresentableItemForAccessoryRepresentable:(id)a0 valueSource:(id)a1;
+ (id)accessoryRepresentableObjectsFromAccessoryLikeObjects:(id)a0 objectLevel:(unsigned long long)a1 accessoryTypeGroups:(id)a2;
+ (id)createAccessoryCategorySectionsWithItems:(id)a0 inHome:(id)a1 sectionIdentifierBlock:(id /* block */)a2;
+ (id)createRoomSectionsWithItems:(id)a0 inHome:(id)a1 sectionIdentifierBlock:(id /* block */)a2;
+ (id)sortedRoomsForHome:(id)a0;

- (id)init;

@end
