@interface PLLegacyChangeEventBuilder : NSObject

+ (id)createXPCDictionaryFromChangedObjectIDs:(id)a0 redundantDeletes:(id)a1 uuidsForCloudDeletion:(id)a2 updatedAttributesByObjectID:(id)a3 updatedRelationshipsByObjectID:(id)a4 updatedOrderKeys:(id)a5 changeSource:(int)a6 syncChangeMarker:(BOOL)a7;

@end
