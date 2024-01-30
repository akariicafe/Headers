@interface SSPurchasableAppItem : SSPurchasableItem

+ (id)databaseTable;
+ (id)allPropertyKeys;
+ (id)itemsFromDatabase:(id)a0 forAccount:(long long)a1 matching:(id)a2 sortedBy:(id)a3 sortAscending:(BOOL)a4;
+ (id)sortByNameKey;
+ (id)allItemsFromDatabase:(id)a0 forAccount:(long long)a1 sortedBy:(id)a2 sortAscending:(BOOL)a3;

- (BOOL)isPreorder;
- (BOOL)supportsIPad;
- (id)category;
- (BOOL)supportsIPhone;
- (id)longTitle;
- (id)accountIdentifier;
- (id)description;
- (BOOL)is32BitOnly;
- (id)bundleID;
- (id)iconURL;
- (id)companyName;
- (id)ovalIconURLString;
- (BOOL)isFamilyShareable;
- (long long)iTunesVersion;
- (BOOL)hasMessagesExtension;
- (BOOL)isHiddenFromSpringBoard;
- (id)humanReadableVersion;
- (id)requiredCapabilitiesString;
- (BOOL)isNewsstand;
- (long long)contentRatingFlags;
- (id)iconTitle;
- (unsigned int)minimumOS;
- (id)redownloadParams;

@end
