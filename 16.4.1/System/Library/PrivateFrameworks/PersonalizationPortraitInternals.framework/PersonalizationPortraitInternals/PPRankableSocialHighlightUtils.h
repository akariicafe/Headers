@interface PPRankableSocialHighlightUtils : NSObject

+ (BOOL)isSearchableItemCollaboration:(id)a0;
+ (id)rankableHighlightFromSearchableItem:(id)a0 attribution:(id)a1 autoDonatingChats:(id)a2 applicationIdentifiers:(id)a3 clientIdentifier:(id)a4 variant:(id)a5;
+ (id)rankableHighlightFromSyncedItem:(id)a0 applicationIdentifiers:(id)a1 clientIdentifier:(id)a2;
+ (int)socialContactSourceForContactSource:(unsigned char)a0;

@end
