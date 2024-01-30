@interface CUIKVirtualConferenceRoomTypeRecents : NSObject

+ (void)cleanup;
+ (void)selectRoomType:(id)a0 forSource:(id)a1;
+ (id)roomTypesOrderedByMRU:(id)a0 forSource:(id)a1;
+ (void)_updateSavedMRUDictWithRoomTypes:(id)a0 source:(id)a1;
+ (id)_identifierFromRoomType:(id)a0;
+ (id)_extensionBundleIdentifierFromIdentifier:(id)a0;

@end
