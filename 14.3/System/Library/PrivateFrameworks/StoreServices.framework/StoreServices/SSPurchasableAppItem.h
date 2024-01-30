@interface SSPurchasableAppItem : SSPurchasableItem

+ (id)databaseTable;
+ (id)allPropertyKeys;
+ (id)sortByNameKey;
+ (id)itemsFromDatabase:(id)a0 forAccount:(long long)a1 matching:(id)a2 sortedBy:(id)a3 sortAscending:(BOOL)a4;
+ (id)allItemsFromDatabase:(id)a0 forAccount:(long long)a1 sortedBy:(id)a2 sortAscending:(BOOL)a3;

- (id)iconURL;
- (id)bundleID;
- (BOOL)isNewsstand;
- (id)companyName;
- (BOOL)isFamilyShareable;
- (BOOL)isPreorder;
- (id)accountIdentifier;
- (id)category;
- (id)description;
- (id)iconTitle;
- (id)longTitle;
- (long long)contentRatingFlags;
- (BOOL)isHiddenFromSpringBoard;
- (id)ovalIconURLString;
- (BOOL)supportsIPad;
- (BOOL)supportsIPhone;
- (id)redownloadParams;
- (id)humanReadableVersion;
- (long long)iTunesVersion;
- (id)requiredCapabilitiesString;
- (BOOL)is32BitOnly;
- (unsigned int)minimumOS;
- (BOOL)hasMessagesExtension;

@end
